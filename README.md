# [Roguelike (Dungeon Template Library) ](https://github.com/Kasugaccho/DungeonTemplateLibrary) [![BSL-1.0](https://img.shields.io/badge/license-BSL--1.0-blue.svg)](https://github.com/Kasugaccho/DungeonTemplateLibrary/blob/master/LICENSE_1_0.txt)

[![Logo-GIF](https://kasugaccho.github.io/DungeonPicture/Picture/Logo/logo_color800_2.gif)](https://github.com/Kasugaccho/DungeonTemplateLibrary)

---

# Supported Compilers 🔧

|Compiler|Run|
|:---|:---|
|MSVC|None|
|GCC|[Wandbox](https://wandbox.org/permlink/mh9FPcIeSE4UyPkL)|
|Clang|[Wandbox](https://wandbox.org/permlink/rH99RSoLGXrDu8CU)|

---

# Generated Image 🖼️

![rl1](https://Kasugaccho.github.io/DungeonPicture/Picture/Dungeon/nrl256.gif) 
![rl2](https://Kasugaccho.github.io/DungeonPicture/Picture/Dungeon/nrl_player256.gif)

---

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

---

# [License 💳](https://github.com/Kasugaccho/DungeonTemplateLibrary/blob/master/LICENSE_1_0.txt)

[>> View License 💳](https://github.com/Kasugaccho/DungeonTemplateLibrary/blob/master/LICENSE_1_0.txt)

Copyright (c) 2017-2019 Kasugaccho.
Copyright (c) 2018-2019 As Project.

Distributed under the Boost Software License, Version 1.0.(See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

---

# Related Items 🎮

[![DTL](https://raw.githubusercontent.com/Kasugaccho/Kasugaccho/master/Picture/dungeon_template_library.png)](https://github.com/Kasugaccho/DungeonTemplateLibrary)
[![GenkaiSyuraku](https://raw.githubusercontent.com/Kasugaccho/Kasugaccho/master/Picture/genkai_syuraku.png)](https://github.com/Kasugaccho/GenkaiSyuraku)
[![AsLib](https://raw.githubusercontent.com/Kasugaccho/Kasugaccho/master/Picture/aslib.png)](https://github.com/Kasugaccho/AsLib)
