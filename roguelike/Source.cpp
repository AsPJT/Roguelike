#define NOMINMAX
#include <DxLib.h>
#include "RogueLike.hpp"

#include <array>
#include <bitset>

constexpr int hachi{ 2 };
//出力
template<typename Vector_>
void output(const Vector_& vec_) {
	for (size_t y{}; y < vec_.size(); ++y) {
		for (size_t x{}; x < vec_[y].size(); ++x) {
			switch (vec_[y][x])
			{
			case dtl::outside_wall_id:DrawBox((int)x * hachi, (int)y * hachi, (int)(x + 1) * hachi, (int)(y + 1) * hachi, GetColor(47, 104, 173), TRUE); break;
			case dtl::inside_wall_id:DrawBox((int)x * hachi, (int)y * hachi, (int)(x + 1) * hachi, (int)(y + 1) * hachi, GetColor(192, 192, 192), TRUE); break;
			case dtl::room_id:DrawBox((int)x * hachi, (int)y * hachi, (int)(x + 1) * hachi, (int)(y + 1) * hachi, GetColor(63, 155, 76), TRUE); break;
			case dtl::entrance_id:DrawBox((int)x * hachi, (int)y * hachi, (int)(x + 1) * hachi, (int)(y + 1) * hachi, GetColor(63, 55, 76), TRUE); break;
			case  dtl::way_id:DrawBox((int)x * hachi, (int)y * hachi, (int)(x + 1) * hachi, (int)(y + 1) * hachi, GetColor(163, 155, 76), TRUE); break;
			default: DrawBox((int)x * hachi, (int)y * hachi, (int)(x + 1) * hachi, (int)(y + 1) * hachi, GetColor(47, 104, 173), TRUE); break;
			}
		}
	}
}

//横画面サイズ
constexpr std::int_fast32_t window_map_size_x{ 512 };

//縦画面サイズ
constexpr std::int_fast32_t window_map_size_y{ 256 };

//メインループ
bool mainLoop() {
	return (ScreenFlip() == 0 && ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0);
}

void VMain() {
	//マップ格納配列
	std::vector<std::vector<uint8_t>> col(window_map_size_y, std::vector<uint8_t>(window_map_size_x, 0));
	//ボロノイ図を線画
	dtl::RogueLike<uint8_t> diagram(col, 20);
	//更新時間
	constexpr std::int_fast32_t max_time{ 20 };
	std::int_fast32_t now_time{ max_time };
	while (mainLoop()) {
		if (++now_time < max_time) continue;

		for (auto&& i : col)
			for (auto&& j : i) j = 0;

		diagram.create(col, 200);
		ClearDrawScreen();
		output(col);
		now_time = 0;

		ScreenFlip();
	}
		WaitKey();
}

//前処理関数
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, std::int_fast32_t) {
	SetOutApplicationLogValidFlag(FALSE);
	ChangeWindowMode(TRUE);
	SetGraphMode(window_map_size_x*2, window_map_size_y*2, 32);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);
	SetMainWindowText("Voronoi");
	VMain();
	return DxLib_End();
}