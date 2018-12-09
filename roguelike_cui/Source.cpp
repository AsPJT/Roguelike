#include "RogueLike.hpp"
//#include <vector>
#include <array>
#include <iostream>
#include <cstdint>

template<typename vArray>
constexpr void print(const vArray& tilev) {
	for (const auto& i : tilev) {
		for (const auto& j : i)
			switch (j)
			{
			case dtl::outside_wall_id:std::cout << "@"; break;
			case dtl::inside_wall_id:std::cout << "¡"; break;
			case dtl::room_id:std::cout << "š"; break;
			case dtl::entrance_id:std::cout << "E"; break;
			case  dtl::way_id:std::cout << "–"; break;
			}
		std::cout << std::endl;
	}
}

int main() {
	std::array<std::array<std::int32_t, 63>, 31> col{ {} };
	//std::vector<std::array<uint8_t, 63>> col(31, { {} });
	//std::vector<std::vector<uint8_t>> col(31, std::vector<uint8_t>(63, 0));
	dtl::RogueLike<std::int32_t> d(col, 20);
	print(col);
}