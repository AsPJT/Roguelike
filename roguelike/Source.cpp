#include "RogueLike.hpp"
#include <array>
#include <iostream>

int main() {

	using shape_t = int;
	std::array<std::array<shape_t, 32>, 24> matrix{ {} };

	dtl::shape::RogueLike<shape_t>(0, 1, 2, 3, 4, 20,
		dtl::base::MatrixRange(3, 3, 2, 2),
		dtl::base::MatrixRange(3, 3, 4, 4)).draw(matrix);

	for (const auto& i : matrix) {
		for (const auto& j : i)
			std::cout << j << ',';
		std::cout << '\n';
	}

	for (const auto& i : matrix) {
		for (const auto& j : i)
			switch (j) {
			case 0:std::cout << "%%"; break;
			case 1:std::cout << "##"; break;
			case 2:std::cout << "  "; break;
			case 3:std::cout << "++"; break;
			case 4:std::cout << "--"; break;
			}
		std::cout << '\n';
	}

	return 0;
}