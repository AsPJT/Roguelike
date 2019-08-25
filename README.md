# [RogueLike(Dungeon Template Library) ](https://github.com/Kasugaccho/DungeonTemplateLibrary) [![BSL-1.0](https://img.shields.io/badge/license-BSL--1.0-blue.svg)](https://github.com/Kasugaccho/DungeonTemplateLibrary/blob/master/LICENSE_1_0.txt)


[![Logo-GIF](https://kasugaccho.github.io/DungeonPicture/Picture/Logo/logo_color800_2.gif)](https://github.com/Kasugaccho/DungeonTemplateLibrary/wiki/API-reference)

[DTL (Dungeon Template Library)](https://github.com/Kasugaccho/DungeonTemplateLibrary)

# Support Compiler 🔧

|Compiler|Pass_C++14|Test|
|:---|:---|:---|
|MSVC|![cl](https://img.shields.io/badge/cl%2014.10-passing-brightgreen.svg)|None|
|GCC|![gcc](https://img.shields.io/badge/gcc%205.1.0-passing-brightgreen.svg)|[Wandbox](https://wandbox.org/permlink/zlwCfiuu0lE3zwM9)|
|Clang|![clang](https://img.shields.io/badge/clang%203.5.0-passing-brightgreen.svg)|[Wandbox](https://wandbox.org/permlink/r0PaawnBDMxH6RBa)|

# Overview 💬

![rl1](https://github.com/Kasugaccho/DTL_RogueLike/blob/master/picture/rl.gif)
![rl4](https://github.com/Kasugaccho/DTL_RogueLike/blob/master/picture/rl4.gif)

# Example

```cpp
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
```

```
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,1,0,0,1,4,1,1,1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,1,0,0,1,4,4,4,1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,1,0,0,1,4,1,4,1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,3,1,1,0,0,1,4,1,4,1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,4,4,4,4,4,1,0,0,0,1,4,1,1,1,0,0,0,0,0,0,
0,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,0,0,0,1,3,1,1,1,1,0,0,0,0,0,
0,1,4,4,4,4,4,4,3,2,2,2,2,1,0,0,0,0,0,0,0,1,2,2,2,2,1,0,0,0,0,0,
1,1,1,1,4,1,1,1,1,2,2,2,2,1,1,1,1,1,1,0,0,1,2,2,2,2,1,0,0,0,0,0,
1,4,4,4,4,1,0,0,1,2,2,2,2,1,1,2,2,2,1,1,1,1,2,2,2,2,1,0,0,0,0,0,
1,1,1,4,1,1,0,0,1,1,1,3,1,1,1,2,2,2,3,4,1,1,1,1,3,1,1,0,0,0,0,0,
0,0,1,4,1,0,0,0,1,4,4,4,4,4,3,2,2,2,1,4,4,4,4,4,4,1,0,0,0,0,0,0,
0,0,1,4,1,0,0,0,1,1,1,1,1,1,1,2,2,2,1,4,1,1,1,1,4,1,1,1,0,0,0,0,
0,0,1,4,1,0,0,0,0,1,1,1,1,1,1,3,1,1,1,4,1,0,0,1,4,4,4,1,0,0,0,0,
0,0,1,4,1,0,0,0,0,1,4,4,4,4,4,4,1,0,1,4,1,1,1,1,1,1,3,1,1,0,0,0,
0,0,1,4,1,0,0,0,0,1,1,1,1,1,1,4,1,0,1,1,1,4,4,4,3,2,2,2,1,0,0,0,
0,0,1,1,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,1,1,1,4,1,2,2,2,1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,1,1,4,1,1,1,1,0,1,4,4,4,1,2,2,2,1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,4,4,4,1,0,1,1,1,1,1,2,2,2,1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,0,0,0,
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%############%%%%######%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%##        ##%%%%##--######%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%##        ##%%%%##------##%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%##        ##%%%%##--##--##%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%##########++####%%%%##--##--##%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%##----------##%%%%%%##--######%%%%%%%%%%%%
%%######################++##########%%%%%%##++########%%%%%%%%%%
%%##------------++        ##%%%%%%%%%%%%%%##        ##%%%%%%%%%%
########--########        ############%%%%##        ##%%%%%%%%%%
##--------##%%%%##        ####      ########        ##%%%%%%%%%%
######--####%%%%######++######      ++--########++####%%%%%%%%%%
%%%%##--##%%%%%%##----------++      ##------------##%%%%%%%%%%%%
%%%%##--##%%%%%%##############      ##--########--######%%%%%%%%
%%%%##--##%%%%%%%%############++######--##%%%%##------##%%%%%%%%
%%%%##--##%%%%%%%%##------------##%%##--############++####%%%%%%
%%%%##--##%%%%%%%%############--##%%######------++      ##%%%%%%
%%%%######%%%%%%%%%%%%##--------##%%%%%%######--##      ##%%%%%%
%%%%%%%%%%%%%%%%%%%%%%######--########%%##------##      ##%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%##--------##%%##########      ##%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%############%%%%%%%%%%##########%%%%%%
```

## [License 💳](https://github.com/Kasugaccho/DungeonTemplateLibrary/blob/master/LICENSE_1_0.txt)

[>> View License 💳](https://github.com/Kasugaccho/DungeonTemplateLibrary/blob/master/LICENSE_1_0.txt)

Copyright (c) 2017-2019 Kasugaccho.
Copyright (c) 2018-2019 As Project.

Distributed under the Boost Software License, Version 1.0.(See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

---

## Contact 📮

|E-mail:|wanotaitei@gmail.com|
|:---|:---|
|Twitter:|[@wanotaitei](https://twitter.com/wanotaitei)|
|![svg](https://Kasugaccho.github.io/DungeonPicture/Picture/as_logo.svg)|Made by **As Project**.|
|![gaccho](https://Kasugaccho.github.io/DungeonPicture/Picture/gaccho_icon.svg)|Made by Gaccho.|
