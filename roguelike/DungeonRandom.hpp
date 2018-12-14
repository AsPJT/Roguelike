#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DUNGEON_RANDOM
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DUNGEON_RANDOM
//:::::----------::::::::::----------::::://
//     Dungeon Template Library     //
//          Made by Gaccho.          //
// This code is licensed under CC0.  //
//:::::----------::::::::::----------::::://

#include <cstdint>
#include <random>

//Dungeon Template Library Namespace
namespace dtl {

	class Rand {
	private:
		//32�r�b�g�Ń����Z���k�E�c�C�X�^
		std::mt19937 mt;
		//�񌈒�_�I�ȗ���
		std::random_device rd;

	public:
		//�R���X�g���N�^(������)
		Rand() { mt.seed(rd()); }

		//�����l
		void seed() {
			mt.seed(rd());
		}
		void seed(const std::uint_fast32_t seed_) {
			mt.seed(seed_);
		}

		//�ʏ�̗���
		std::uint_fast32_t operator()() {
			return mt();
		}
		//0�`�ő�l-1 (�]��͈̔͂̈�l���z����)
		std::int_fast32_t operator()(const std::int_fast32_t max_) {
			std::uniform_int_distribution<> uid(0, ((max_ > 0) ? max_ - 1 : 0));
			return uid(mt);
		}
		//�ŏ��l�`�ő�l
		std::int_fast32_t operator()(const std::int_fast32_t min_, const std::int_fast32_t max_) {
			std::uniform_int_distribution<> uid((min_ <= max_) ? min_ : max_, (min_ <= max_) ? max_ : min_);
			return uid(mt);
		}
		//�m��
		bool randBool(const double probability_) {
			std::bernoulli_distribution uid(probability_);
			return uid(mt);
		}
		bool randBool() {
			std::uniform_int_distribution<> uid(0, 1);
			return ((uid(mt)) ? true : false);
		}
	};
	static thread_local Rand rnd;

}

#endif //Included Dungeon Template Library