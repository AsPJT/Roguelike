/*#######################################################################################
	Copyright (c) 2017-2019 Kasugaccho
	Copyright (c) 2018-2019 As Project
	https://github.com/Kasugaccho/DungeonTemplateLibrary
	wanotaitei@gmail.com

	Distributed under the Boost Software License, Version 1.0. (See accompanying
	file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#######################################################################################*/
#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_SHAPE_ROGUE_LIKE_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_SHAPE_ROGUE_LIKE_HPP

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_BASE_STRUCT_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_BASE_STRUCT_HPP

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_TYPE_SIZE_T_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_TYPE_SIZE_T_HPP
#if defined(UE_BUILD_FINAL_RELEASE)
namespace dtl { namespace type { using size =::SIZE_T; } }
#else
#include <cstddef>
namespace dtl { namespace type { using size =::std::size_t; } }
#endif
#endif 
namespace dtl {
	inline namespace base {
		template<typename Int_>
		struct Coordinate1Dimensional {
			Int_ x{};
			Coordinate1Dimensional() = default;
			constexpr Coordinate1Dimensional(const Int_& x_)noexcept :x(x_) {};
		};
		template<typename Int_>
		struct Coordinate2Dimensional {
			Int_ x{};
			Int_ y{};
			Coordinate2Dimensional() = default;
			constexpr Coordinate2Dimensional(const Int_& x_, const Int_& y_)noexcept :x(x_), y(y_) {};
			constexpr bool operator==(const ::dtl::base::Coordinate2Dimensional<Int_>& vec2_)const noexcept {
				return vec2_.x == this->x && vec2_.y == this->y;
			}
			constexpr bool operator!=(const ::dtl::base::Coordinate2Dimensional<Int_>& vec2_)const noexcept {
				return vec2_.x != this->x || vec2_.y != this->y;
			}
		};
		using MatrixVec2 =::dtl::base::Coordinate2Dimensional<::dtl::type::size>;
		template<typename Int_>
		struct Coordinate3Dimensional {
			Int_ x{};
			Int_ y{};
			Int_ z{};
			Coordinate3Dimensional() = default;
			constexpr Coordinate3Dimensional(const Int_& x_, const Int_& y_, const Int_& z_)noexcept :x(x_), y(y_), z(z_) {};
			constexpr bool operator==(const ::dtl::base::Coordinate3Dimensional<Int_>& vec3_)const noexcept {
				return vec3_.x == this->x && vec3_.y == this->y && vec3_.z == this->z;
			}
			constexpr bool operator!=(const ::dtl::base::Coordinate3Dimensional<Int_>& vec3_)const noexcept {
				return vec3_.x != this->x || vec3_.y != this->y || vec3_.z != this->z;
			}
		};
		using MatrixVec3 =::dtl::base::Coordinate3Dimensional<::dtl::type::size>;

		template<typename Int_>
		struct Coordinate2DimensionalAndLength2Dimensional {
			Int_ x{};
			Int_ y{};
			Int_ w{};
			Int_ h{};
			Coordinate2DimensionalAndLength2Dimensional() = default;
			constexpr Coordinate2DimensionalAndLength2Dimensional(const Int_& x_, const Int_& y_)noexcept
				:x(x_), y(y_) {};
			constexpr Coordinate2DimensionalAndLength2Dimensional(const Int_& x_, const Int_& y_, const Int_& l_)noexcept
				:x(x_), y(y_), w(l_), h(l_) {};
			constexpr Coordinate2DimensionalAndLength2Dimensional(const Int_& x_, const Int_& y_, const Int_& w_, const Int_& h_)noexcept
				:x(x_), y(y_), w(w_), h(h_) {};

			constexpr bool operator==(const ::dtl::base::Coordinate2DimensionalAndLength2Dimensional<Int_>& range_)const noexcept {
				return range_.x == this->x && range_.y == this->y && range_.w == this->w && range_.h == this->h;
			}

			constexpr bool operator!=(const ::dtl::base::Coordinate2DimensionalAndLength2Dimensional<Int_>& range_)const noexcept {
				return range_.x != this->x || range_.y != this->y || range_.w != this->w || range_.h != this->h;
			}
			constexpr bool operator>(const ::dtl::base::Coordinate2DimensionalAndLength2Dimensional<Int_>& range_)const noexcept {
				return (this->w * this->h) > (range_.w * range_.h);
			}
			constexpr bool operator>=(const ::dtl::base::Coordinate2DimensionalAndLength2Dimensional<Int_>& range_)const noexcept {
				return (this->w * this->h) >= (range_.w * range_.h);
			}
			constexpr bool operator<(const ::dtl::base::Coordinate2DimensionalAndLength2Dimensional<Int_>& range_)const noexcept {
				return (this->w * this->h) < (range_.w * range_.h);
			}
			constexpr bool operator<=(const ::dtl::base::Coordinate2DimensionalAndLength2Dimensional<Int_>& range_)const noexcept {
				return (this->w * this->h) <= (range_.w * range_.h);
			}
		};
		using MatrixRange =::dtl::base::Coordinate2DimensionalAndLength2Dimensional<::dtl::type::size>;

		template<typename Int_>
		struct Coordinate3DimensionalAndLength3Dimensional {
			Int_ x{};
			Int_ y{};
			Int_ z{};
			Int_ w{};
			Int_ h{};
			Int_ d{};
			Coordinate3DimensionalAndLength3Dimensional() = default;
			constexpr Coordinate3DimensionalAndLength3Dimensional(const Int_& x_, const Int_& y_, const Int_& z_)noexcept
				:x(x_), y(y_), z(z_) {};
			constexpr Coordinate3DimensionalAndLength3Dimensional(const Int_& x_, const Int_& y_, const Int_& z_, const Int_& l_)noexcept
				:x(x_), y(y_), z(z_), w(l_), h(l_), d(l_) {};
			constexpr Coordinate3DimensionalAndLength3Dimensional(const Int_& x_, const Int_& y_, const Int_& z_, const Int_& w_, const Int_& h_, const Int_& d_)noexcept
				:x(x_), y(y_), z(z_), w(w_), h(h_), d(d_) {};

			constexpr bool operator==(const ::dtl::base::Coordinate3DimensionalAndLength3Dimensional<Int_>& range_)const noexcept {
				return range_.x == this->x && range_.y == this->y && range_.z == this->z && range_.w == this->w && range_.h == this->h && range_.d == this->d;
			}

			constexpr bool operator!=(const ::dtl::base::Coordinate3DimensionalAndLength3Dimensional<Int_>& range_)const noexcept {
				return range_.x != this->x || range_.y != this->y || range_.z != this->z || range_.w != this->w || range_.h != this->h || range_.d != this->d;
			}
			constexpr bool operator>(const ::dtl::base::Coordinate3DimensionalAndLength3Dimensional<Int_>& range_)const noexcept {
				return (this->w * this->h * this->d) > (range_.w * range_.h * range_.d);
			}
			constexpr bool operator>=(const ::dtl::base::Coordinate3DimensionalAndLength3Dimensional<Int_>& range_)const noexcept {
				return (this->w * this->h * this->d) >= (range_.w * range_.h * range_.d);
			}
			constexpr bool operator<(const ::dtl::base::Coordinate3DimensionalAndLength3Dimensional<Int_>& range_)const noexcept {
				return (this->w * this->h * this->d) < (range_.w * range_.h * range_.d);
			}
			constexpr bool operator<=(const ::dtl::base::Coordinate3DimensionalAndLength3Dimensional<Int_>& range_)const noexcept {
				return (this->w * this->h * this->d) <= (range_.w * range_.h * range_.d);
			}
		};
		using MatrixRange3D =::dtl::base::Coordinate3DimensionalAndLength3Dimensional<::dtl::type::size>;
	}
}
#endif 

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_MACROS_CONSTEXPR_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_MACROS_CONSTEXPR_HPP
#ifndef DTL_VERSIONING_CPP14_CONSTEXPR
#if defined(_MSC_VER)
#if (_MSC_VER <=1900)
#define DTL_VERSIONING_CPP14_CONSTEXPR
#elif defined(_MSC_VER)&& defined(_MSVC_LANG)
#if (_MSVC_LANG >=201402L)
#define DTL_VERSIONING_CPP14_CONSTEXPR constexpr
#endif
#endif
#elif defined(__cplusplus)
#if (__cplusplus >=201402L)
#define DTL_VERSIONING_CPP14_CONSTEXPR constexpr
#endif
#endif
#endif
#ifndef DTL_VERSIONING_CPP14_CONSTEXPR
#define DTL_VERSIONING_CPP14_CONSTEXPR
#endif
#endif 

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_MACROS_NODISCARD_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_MACROS_NODISCARD_HPP
#ifndef DTL_VERSIONING_CPP17_NODISCARD
# if defined(__has_cpp_attribute)&& 201402 < __cplusplus
# if __has_cpp_attribute(nodiscard)
# define DTL_VERSIONING_CPP17_NODISCARD [[nodiscard]]
# endif
# elif defined(__clang__)|| defined(__GNUC__)
# define DTL_VERSIONING_CPP17_NODISCARD __attribute__((warn_unused_result))
# elif defined(_MSC_VER)
# if 1911 <=_MSC_VER && 201402 < _MSVC_LANG
# define DTL_VERSIONING_CPP17_NODISCARD [[nodiscard]]
# else
# define DTL_VERSIONING_CPP17_NODISCARD \
__declspec( "SAL_name" \
"(" \
"\"_Must_inspect_result_\"" \
"," \
"\"\"" \
"," \
"\"2\"" \
")")__declspec("SAL_begin")__declspec("SAL_post")__declspec("SAL_mustInspect")__declspec("SAL_post")__declspec("SAL_checkReturn")__declspec("SAL_end")
# endif
# endif
#endif
#ifndef DTL_VERSIONING_CPP17_NODISCARD
#define DTL_VERSIONING_CPP17_NODISCARD
#endif
#endif

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_TYPE_FORWARD_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_TYPE_FORWARD_HPP
#ifndef DTL_TYPE_FORWARD
#if defined(UE_BUILD_FINAL_RELEASE)
#define DTL_TYPE_FORWARD ::Forward
#else
#include <utility>
#define DTL_TYPE_FORWARD ::std::forward
#endif
#endif
#endif 

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_TYPE_INT_X_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_TYPE_INT_X_HPP
#if defined(UE_BUILD_FINAL_RELEASE)
namespace dtl {
	namespace type {
		using int8 =::int8;
		using int16 =::int16;
		using int32 =::int32;
		using int64 =::int64;
		using uint8 =::uint8;
		using uint16 =::uint16;
		using uint32 =::uint32;
		using uint64 =::uint64;
		using int_fast8 =::int8;
		using int_fast16 =::int16;
		using int_fast32 =::int32;
		using int_fast64 =::int64;
		using uint_fast8 =::uint8;
		using uint_fast16 =::uint16;
		using uint_fast32 =::uint32;
		using uint_fast64 =::uint64;
		using int_least8 =::int8;
		using int_least16 =::int16;
		using int_least32 =::int32;
		using int_least64 =::int64;
		using uint_least8 =::uint8;
		using uint_least16 =::uint16;
		using uint_least32 =::uint32;
		using uint_least64 =::uint64;
	}
}
#else
#include <cstdint>
namespace dtl {
	namespace type {
#ifdef INT8_MAX
		using int8 =::std::int8_t;
#else
		using int8 =::std::int_least8_t;
#endif
#ifdef INT16_MAX
		using int16 =::std::int16_t;
#else
		using int16 =::std::int_least16_t;
#endif
#ifdef INT32_MAX
		using int32 =::std::int32_t;
#else
		using int32 =::std::int_least32_t;
#endif
#ifdef INT64_MAX
		using int64 =::std::int64_t;
#else
		using int64 =::std::int_least64_t;
#endif
#ifdef UINT8_MAX
		using uint8 =::std::uint8_t;
#else
		using uint8 =::std::uint_least8_t;
#endif
#ifdef UINT16_MAX
		using uint16 =::std::uint16_t;
#else
		using uint16 =::std::uint_least16_t;
#endif
#ifdef UINT32_MAX
		using uint32 =::std::uint32_t;
#else
		using uint32 =::std::uint_least32_t;
#endif
#ifdef UINT64_MAX
		using uint64 =::std::uint64_t;
#else
		using uint64 =::std::uint_least64_t;
#endif
		using int_fast8 =::std::int_fast8_t;
		using int_fast16 =::std::int_fast16_t;
		using int_fast32 =::std::int_fast32_t;
		using int_fast64 =::std::int_fast64_t;
		using uint_fast8 =::std::uint_fast8_t;
		using uint_fast16 =::std::uint_fast16_t;
		using uint_fast32 =::std::uint_fast32_t;
		using uint_fast64 =::std::uint_fast64_t;
		using int_least8 =::std::int_least8_t;
		using int_least16 =::std::int_least16_t;
		using int_least32 =::std::int_least32_t;
		using int_least64 =::std::int_least64_t;
		using uint_least8 =::std::uint_least8_t;
		using uint_least16 =::std::uint_least16_t;
		using uint_least32 =::std::uint_least32_t;
		using uint_least64 =::std::uint_least64_t;
	}
}
#endif
#endif 

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_RANDOM_MERSENNE_TWISTER_32_BIT_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_RANDOM_MERSENNE_TWISTER_32_BIT_HPP
#include <cstdint>
#include <bitset>
#include <random>

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_TYPE_NUMERIC_LIMITS_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_TYPE_NUMERIC_LIMITS_HPP
#ifndef DTL_TYPE_NUMERIC_LIMITS
#if defined(UE_BUILD_FINAL_RELEASE)
#define DTL_TYPE_NUMERIC_LIMITS ::TNumericLimits
#else
#include <limits>
#define DTL_TYPE_NUMERIC_LIMITS ::std::numeric_limits
#endif
#endif
#ifndef DTL_TYPE_NUMERIC_LIMITS_MIN
#if defined(UE_BUILD_FINAL_RELEASE)
#define DTL_TYPE_NUMERIC_LIMITS_MIN Min
#else
#define DTL_TYPE_NUMERIC_LIMITS_MIN min
#endif
#endif
#ifndef DTL_TYPE_NUMERIC_LIMITS_MAX
#if defined(UE_BUILD_FINAL_RELEASE)
#define DTL_TYPE_NUMERIC_LIMITS_MAX Max
#else
#define DTL_TYPE_NUMERIC_LIMITS_MAX max
#endif
#endif
#endif 

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_TYPE_THREAD_LOCAL_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_TYPE_THREAD_LOCAL_HPP
#ifndef DTL_TYPE_THREAD_LOCAL
#if defined(__clang_major__)&& defined(__clang_minor__)
#if __clang_major__ ==3 && __clang_minor__ <=5
#define DTL_TYPE_THREAD_LOCAL
#endif
#endif
#endif
#ifndef DTL_TYPE_THREAD_LOCAL
#define DTL_TYPE_THREAD_LOCAL thread_local
#endif
#endif 
#ifndef DTL_RANDOM_INIT_SEED
#define DTL_RANDOM_INIT_SEED ::std::random_device()()
#endif
#ifndef DTL_RANDOM_ENGINE
#define DTL_RANDOM_ENGINE ::dtl::random::RandClassMT::random_engine
#endif
namespace dtl {
	inline namespace random {
		template<typename T>
		DTL_VERSIONING_CPP17_NODISCARD
			constexpr ::dtl::type::size bitCheck(const T value_, const ::dtl::type::size bit_ = 0)noexcept {
			return (value_ == 0) ? bit_ : ::dtl::random::bitCheck(value_ / 2, bit_ + 1);
		}
		template<typename Random_Engine_ = ::std::mt19937>
		class Random {
		private:

			Random_Engine_ mt;


			::dtl::type::size bit_num{};
			::dtl::type::size counter_bit1{};
			::dtl::type::size counter_bit2{};
			::std::uint_fast32_t random_num_bit1{};
			::std::uint_fast32_t random_num_bit2{};
			template<typename T>
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr ::dtl::type::size bitInit2(T)const noexcept {
				return ::dtl::random::bitCheck((DTL_TYPE_NUMERIC_LIMITS<T>::DTL_TYPE_NUMERIC_LIMITS_MAX)());
			}
			DTL_VERSIONING_CPP17_NODISCARD
				::dtl::type::size bitInit()noexcept {
				return this->bitInit2(this->mt());
			}
			DTL_VERSIONING_CPP17_NODISCARD
				bool getBit1() {
				if (counter_bit1 >= bit_num) {
					random_num_bit1 = this->get();
					counter_bit1 = 0;
				}
				else ++counter_bit1;
				const bool tmp{ (random_num_bit1 & 1) == 0 };
				random_num_bit1 >>= 1;
				return tmp;
			}
		public:
			template<typename Random_Int_ = ::dtl::type::size>
			DTL_VERSIONING_CPP17_NODISCARD
				Random_Int_ getBit2() {
				if (this->counter_bit2 >= bit_num / 2) {
					this->random_num_bit2 = this->get();
					this->counter_bit2 = 0;
				}
				else ++counter_bit2;
				const ::std::uint_fast32_t tmp{ this->random_num_bit2 & 3 };
				this->random_num_bit2 >>= 2;
				return static_cast<Random_Int_>(tmp);
			}
			void clear()noexcept {
				counter_bit1 = bit_num;
				counter_bit2 = bit_num / 2;
				random_num_bit1 = 0;
				random_num_bit2 = 0;
			}

			Random() :mt(DTL_RANDOM_INIT_SEED), bit_num(this->bitInit()), counter_bit1(bit_num), counter_bit2(bit_num / 2) {}
			template<typename Seed_, typename ...Args_>
			Random(Seed_&& seed_, Args_&& ... args_) : mt(DTL_TYPE_FORWARD<Seed_>(seed_), DTL_TYPE_FORWARD<Args_>(args_)...),
				bit_num(this->bitInit()), counter_bit1(bit_num), counter_bit2(bit_num / 2) {}
			void seed() {
				this->mt.seed(DTL_RANDOM_INIT_SEED);
			}
			template<typename Seed_, typename ...Args_>
			void seed(Seed_&& seed_, Args_&& ... args_) {
				this->mt.seed(DTL_TYPE_FORWARD<Seed_>(seed_), DTL_TYPE_FORWARD<Args_>(args_)...);
			}
			template<typename Random_Int_ = ::std::uint_fast32_t>
			DTL_VERSIONING_CPP17_NODISCARD
				Random_Int_ get() {
				return static_cast<Random_Int_>(this->mt());
			}
			template<typename Random_Int_ = ::std::int_fast32_t, typename Random_Int2_>
			DTL_VERSIONING_CPP17_NODISCARD
				Random_Int_ get(const Random_Int2_ max_) {
				if (static_cast<::std::int_fast32_t>(max_) <= 1)return 0;
				::std::uniform_int_distribution<> uid(0, static_cast<::std::int_fast32_t>(max_) - 1);
				return static_cast<Random_Int_>(uid(this->mt));
			}
			template<typename Random_Int_ = ::std::int_fast32_t, typename Random_Int2_, typename Random_Int3_>
			DTL_VERSIONING_CPP17_NODISCARD
				Random_Int_ get(const Random_Int2_ min_, const Random_Int3_ max_) {
				::std::uniform_int_distribution<> uid(static_cast<::std::int_fast32_t>((min_ <= static_cast<Random_Int2_>(max_)) ? min_ : static_cast<Random_Int2_>(max_)), static_cast<::std::int_fast32_t>((min_ <= static_cast<Random_Int2_>(max_)) ? static_cast<Random_Int2_>(max_) : min_));
				return static_cast<Random_Int_>(uid(this->mt));
			}
			DTL_VERSIONING_CPP17_NODISCARD
				bool probability(const double probability_) {
				::std::bernoulli_distribution uid(probability_);
				return uid(this->mt);
			}
			DTL_VERSIONING_CPP17_NODISCARD
				bool probability() {
				return this->getBit1();
			}
		};
		template<typename T>
		struct RandClass {
			static DTL_TYPE_THREAD_LOCAL::dtl::random::Random<T> random_engine;
		};
		template<typename T>
		DTL_TYPE_THREAD_LOCAL::dtl::random::Random<T> RandClass<T>::random_engine;
		using RandClassMT =RandClass<::std::mt19937>;
	}
}
#endif 

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_RANGE_RECT_BASE_ROGUE_LIKE_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_RANGE_RECT_BASE_ROGUE_LIKE_HPP

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_BASE_ROGUE_LIKE_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_BASE_ROGUE_LIKE_HPP
namespace dtl {
	inline namespace base {
		template<typename Matrix_Var_>
		struct RogueLikeList {
			Matrix_Var_ outside_wall_id{};
			Matrix_Var_ inside_wall_id{};
			Matrix_Var_ room_id{};
			Matrix_Var_ entrance_id{};
			Matrix_Var_ way_id{};
			RogueLikeList() = default;
			constexpr RogueLikeList(
				const Matrix_Var_& wall_id_,
				const Matrix_Var_& way_id_)noexcept :
				outside_wall_id(wall_id_),
				inside_wall_id(wall_id_),
				room_id(way_id_),
				entrance_id(way_id_),
				way_id(way_id_) {}
			constexpr RogueLikeList(
				const Matrix_Var_& wall_id_,
				const Matrix_Var_& room_id_,
				const Matrix_Var_& way_id_)noexcept :
				outside_wall_id(wall_id_),
				inside_wall_id(wall_id_),
				room_id(room_id_),
				entrance_id(way_id_),
				way_id(way_id_) {}
			constexpr RogueLikeList(
				const Matrix_Var_& wall_id_,
				const Matrix_Var_& room_id_,
				const Matrix_Var_& entrance_id_,
				const Matrix_Var_& way_id_)noexcept :
				outside_wall_id(wall_id_),
				inside_wall_id(wall_id_),
				room_id(room_id_),
				entrance_id(entrance_id_),
				way_id(way_id_) {}
			constexpr RogueLikeList(
				const Matrix_Var_& outside_wall_id_,
				const Matrix_Var_& inside_wall_id_,
				const Matrix_Var_& room_id_,
				const Matrix_Var_& entrance_id_,
				const Matrix_Var_& way_id_)noexcept :
				outside_wall_id(outside_wall_id_),
				inside_wall_id(inside_wall_id_),
				room_id(room_id_),
				entrance_id(entrance_id_),
				way_id(way_id_) {}
		};
		template<typename Matrix_Var_>
		constexpr ::dtl::base::RogueLikeList<Matrix_Var_> defaultRogueLikeList()noexcept {
			return ::dtl::base::RogueLikeList<Matrix_Var_>(0, 1, 2, 3, 4);
		}
	}
}
#endif 

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_RANGE_BASIC_RECT_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_RANGE_BASIC_RECT_HPP
namespace dtl {
	inline namespace range {

		template<typename Derived_>
		class BasicRect {
		private:

			using Index_Size =::dtl::type::size;
		protected:

			Index_Size start_x{};
			Index_Size start_y{};
			Index_Size width{};
			Index_Size height{};

			constexpr Index_Size calcEndX(const Index_Size max_x_)const noexcept {
				return (this->width == 0 || this->start_x + this->width >= max_x_)
					? max_x_
					: this->start_x + this->width;
			}
			constexpr Index_Size calcEndY(const Index_Size max_y_)const noexcept {
				return (this->height == 0 || this->start_y + this->height >= max_y_)
					? max_y_
					: this->start_y + this->height;
			}
		public:

			BasicRect() = default;
			constexpr explicit BasicRect(const ::dtl::base::MatrixRange& matrix_range_)noexcept
				:start_x(matrix_range_.x), start_y(matrix_range_.y),
				width(matrix_range_.w), height(matrix_range_.h) {}
			constexpr BasicRect(const Index_Size start_x_, const Index_Size start_y_, const Index_Size width_, const Index_Size height_)noexcept
				:start_x(start_x_), start_y(start_y_),
				width(width_), height(height_) {}

			template<typename Matrix_Var_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getPointX(Matrix_Var_& value_)noexcept {
				value_ = static_cast<Matrix_Var_>(this->start_x);
				return static_cast<Derived_&>(*this);
			}
			template<typename Matrix_Var_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getPointY(Matrix_Var_& value_)noexcept {
				value_ = static_cast<Matrix_Var_>(this->start_y);
				return static_cast<Derived_&>(*this);
			}
			template<typename Matrix_Var_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getWidth(Matrix_Var_& value_)noexcept {
				value_ = static_cast<Matrix_Var_>(this->width);
				return static_cast<Derived_&>(*this);
			}
			template<typename Matrix_Var_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getHeight(Matrix_Var_& value_)noexcept {
				value_ = static_cast<Matrix_Var_>(this->height);
				return static_cast<Derived_&>(*this);
			}
			template<typename Matrix_Var_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getPoint(Matrix_Var_& value_)noexcept {
				const Matrix_Var_ value{ this->start_x ,this->start_y };
				value_ = value;
				return static_cast<Derived_&>(*this);
			}
			template<typename Matrix_Var_, typename Matrix_Int2_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getPoint(Matrix_Var_& value_, Matrix_Int2_& value2_)noexcept {
				value_ = static_cast<Matrix_Var_>(this->start_x);
				value2_ = static_cast<Matrix_Int2_>(this->start_y);
				return static_cast<Derived_&>(*this);
			}
			template<typename Matrix_Var_, typename Matrix_Int2_, typename Matrix_Int3_, typename Matrix_Int4_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getRange(Matrix_Var_& value_, Matrix_Int2_& value2_, Matrix_Int3_& value3_, Matrix_Int4_& value4_)noexcept {
				value_ = static_cast<Matrix_Var_>(this->start_x);
				value2_ = static_cast<Matrix_Int2_>(this->start_y);
				value3_ = static_cast<Matrix_Int3_>(this->width);
				value4_ = static_cast<Matrix_Int4_>(this->height);
				return static_cast<Derived_&>(*this);
			}
			template<typename Matrix_Var_, typename Matrix_Int2_, typename Matrix_Int3_, typename Matrix_Int4_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getRange(Matrix_Var_& value_, Matrix_Int2_& value2_, Matrix_Int3_& value3_)noexcept {
				value_ = static_cast<Matrix_Var_>(this->start_x);
				value2_ = static_cast<Matrix_Int2_>(this->start_y);
				value3_ = static_cast<Matrix_Int3_>(this->width);
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Index_Size getPointX()const noexcept {
				return this->start_x;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Index_Size getPointY()const noexcept {
				return this->start_y;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Index_Size getWidth()const noexcept {
				return this->width;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Index_Size getHeight()const noexcept {
				return this->height;
			}

			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearPointX()noexcept {
				this->start_x = 0;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearPointY()noexcept {
				this->start_y = 0;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearWidth()noexcept {
				this->width = 0;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearHeight()noexcept {
				this->height = 0;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearLength()noexcept {
				this->clearWidth();
				this->clearHeight();
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearPoint()noexcept {
				this->clearPointX();
				this->clearPointY();
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearRange()noexcept {
				this->clearPointX();
				this->clearPointY();
				this->clearWidth();
				this->clearHeight();
				return static_cast<Derived_&>(*this);
			}

			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setPointX(const Index_Size start_x_)noexcept {
				this->start_x = start_x_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setPointY(const Index_Size start_y_)noexcept {
				this->start_y = start_y_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setWidth(const Index_Size width_)noexcept {
				this->width = width_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setHeight(const Index_Size height_)noexcept {
				this->height = height_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setPoint(const Index_Size point_)noexcept {
				this->start_x = point_;
				this->start_y = point_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setPoint(const Index_Size start_x_, const Index_Size start_y_)noexcept {
				this->start_x = start_x_;
				this->start_y = start_y_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setRange(const Index_Size start_x_, const Index_Size start_y_, const Index_Size length_)noexcept {
				this->start_x = start_x_;
				this->start_y = start_y_;
				this->width = length_;
				this->height = length_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setRange(const Index_Size start_x_, const Index_Size start_y_, const Index_Size width_, const Index_Size height_)noexcept {
				this->start_x = start_x_;
				this->start_y = start_y_;
				this->width = width_;
				this->height = height_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setRange(const ::dtl::base::MatrixRange& matrix_range_)noexcept {
				this->start_x = matrix_range_.x;
				this->start_y = matrix_range_.y;
				this->width = matrix_range_.w;
				this->height = matrix_range_.h;
				return static_cast<Derived_&>(*this);
			}
		};
	}
}
#endif 
namespace dtl {
	inline namespace range {
		template<typename Derived_, typename Matrix_Var_>
		class RectBaseRogueLike : public ::dtl::range::BasicRect<Derived_> {
		private:

			using Index_Size =::dtl::type::size;
			using RectBase_t =::dtl::range::BasicRect<Derived_>;
		protected:

			::dtl::base::RogueLikeList<Matrix_Var_> rogueLikeList{};
			Index_Size max_way{ 20 };
			::dtl::base::MatrixRange roomRange{ 3,3,3,3 };
			::dtl::base::MatrixRange wayRange{ 3,3,12,12 };
		public:

			template<typename Matrix_Int1_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getOutsideWall(Matrix_Int1_& value_)noexcept {
				value_ = static_cast<Matrix_Int1_>(this->rogueLikeList.outside_wall_id);
				return static_cast<Derived_&>(*this);
			}
			template<typename Matrix_Int1_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getInsideWall(Matrix_Int1_& value_)noexcept {
				value_ = static_cast<Matrix_Int1_>(this->rogueLikeList.inside_wall_id);
				return static_cast<Derived_&>(*this);
			}
			template<typename Matrix_Int1_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getRoom(Matrix_Int1_& value_)noexcept {
				value_ = static_cast<Matrix_Int1_>(this->rogueLikeList.room_id);
				return static_cast<Derived_&>(*this);
			}
			template<typename Matrix_Int1_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getEntrance(Matrix_Int1_& value_)noexcept {
				value_ = static_cast<Matrix_Int1_>(this->rogueLikeList.entrance_id);
				return static_cast<Derived_&>(*this);
			}
			template<typename Matrix_Int1_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getWay(Matrix_Int1_& value_)noexcept {
				value_ = static_cast<Matrix_Int1_>(this->rogueLikeList.way_id);
				return static_cast<Derived_&>(*this);
			}
			template<typename Matrix_Int1_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getWall(Matrix_Int1_& value_)noexcept {
				value_ = static_cast<Matrix_Int1_>(this->rogueLikeList.outside_wall_id);
				return static_cast<Derived_&>(*this);
			}
			template<typename Matrix_Int1_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& getMaxWay(Matrix_Int1_& value_)noexcept {
				value_ = static_cast<Matrix_Int1_>(this->max_way);
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Var_ getOutsideWall()const noexcept {
				return this->rogueLikeList.outside_wall_id;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Var_ getInsideWall()const noexcept {
				return this->rogueLikeList.inside_wall_id;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Var_ getRoom()const noexcept {
				return this->rogueLikeList.room_id;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Var_ getEntrance()const noexcept {
				return this->rogueLikeList.entrance_id;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Var_ getWay()const noexcept {
				return this->rogueLikeList.way_id;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Var_ getWall()const noexcept {
				return this->rogueLikeList.outside_wall_id;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Index_Size getMaxWay()const noexcept {
				return this->max_way;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr ::dtl::base::RogueLikeList<Matrix_Var_> getValue()const noexcept {
				return this->rogueLikeList;
			}

			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearOutsideWall()noexcept {
				const Matrix_Var_ chick_{};
				this->rogueLikeList.outside_wall_id = chick_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearInsideWall()noexcept {
				const Matrix_Var_ chick_{};
				this->rogueLikeList.inside_wall_id = chick_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearRoom()noexcept {
				const Matrix_Var_ elephant_{};
				this->rogueLikeList.room_id = elephant_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearEntrance()noexcept {
				const Matrix_Var_ elephant_{};
				this->rogueLikeList.entrance_id = elephant_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearWay()noexcept {
				const Matrix_Var_ giraffe_{};
				this->rogueLikeList.way_id = giraffe_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearWall()noexcept {
				this->clearOutsideWall();
				this->clearInsideWall();
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearMaxWay()noexcept {
				this->max_way = 0;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearValue()noexcept {
				const ::dtl::base::RogueLikeList<Matrix_Var_> new_draw_value{};
				this->rogueLikeList = new_draw_value;
				this->clearMaxWay();
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clear()noexcept {
				this->clearRange();
				this->clearValue();
				return static_cast<Derived_&>(*this);
			}

			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setOutsideWall(const Matrix_Var_& chick_)noexcept {
				return this->rogueLikeList.outside_wall_id = chick_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setInsideWall(const Matrix_Var_& chick_)noexcept {
				return this->rogueLikeList.inside_wall_id = chick_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setRoom(const Matrix_Var_& elephant_)noexcept {
				return this->rogueLikeList.room_id = elephant_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setEntrance(const Matrix_Var_& elephant_)noexcept {
				return this->rogueLikeList.entrance_id = elephant_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setWay(const Matrix_Var_& giraffe_)noexcept {
				return this->rogueLikeList.way_id = giraffe_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setWall(const Matrix_Var_& giraffe_)noexcept {
				return this->rogueLikeList.outside_wall_id = this->rogueLikeList.inside_wall_id = giraffe_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setMaxWay(const Index_Size& giraffe_)noexcept {
				return this->max_way = giraffe_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setValue(const ::dtl::base::RogueLikeList<Matrix_Var_>& draw_value_)noexcept {
				this->rogueLikeList = draw_value_;
				return static_cast<Derived_&>(*this);
			}

			RectBaseRogueLike() = default;
			constexpr explicit RectBaseRogueLike(const ::dtl::base::MatrixRange& matrix_range_)noexcept
				:RectBase_t(matrix_range_) {}
			constexpr RectBaseRogueLike(const Index_Size start_x_, const Index_Size start_y_, const Index_Size width_, const Index_Size height_)noexcept
				:RectBase_t(start_x_, start_y_, width_, height_) {}
			constexpr explicit RectBaseRogueLike(const ::dtl::base::RogueLikeList<Matrix_Var_>& draw_value_)noexcept
				:rogueLikeList(draw_value_) {}
			constexpr explicit RectBaseRogueLike(const ::dtl::base::RogueLikeList<Matrix_Var_>& draw_value_, const Matrix_Var_& max_way_)noexcept
				:rogueLikeList(draw_value_), max_way(max_way_) {}
			constexpr explicit RectBaseRogueLike(const ::dtl::base::RogueLikeList<Matrix_Var_>& draw_value_, const Matrix_Var_& max_way_, const ::dtl::base::MatrixRange& roomRange_)noexcept
				:rogueLikeList(draw_value_), max_way(max_way_), roomRange(roomRange_) {}
			constexpr explicit RectBaseRogueLike(const ::dtl::base::RogueLikeList<Matrix_Var_>& draw_value_, const Matrix_Var_& max_way_, const ::dtl::base::MatrixRange& roomRange_, const ::dtl::base::MatrixRange& wayRange_)noexcept
				:rogueLikeList(draw_value_), max_way(max_way_), roomRange(roomRange_), wayRange(wayRange_) {}
			constexpr RectBaseRogueLike(
				const Matrix_Var_& outside_wall_id_,
				const Matrix_Var_& inside_wall_id_,
				const Matrix_Var_& room_id_,
				const Matrix_Var_& entrance_id_,
				const Matrix_Var_& way_id_)noexcept :
				rogueLikeList(outside_wall_id_, inside_wall_id_, room_id_, entrance_id_, way_id_) {}
			constexpr RectBaseRogueLike(const ::dtl::base::MatrixRange& matrix_range_, const ::dtl::base::RogueLikeList<Matrix_Var_>& draw_value_)noexcept
				:RectBase_t(matrix_range_),
				rogueLikeList(draw_value_) {}
			constexpr RectBaseRogueLike(const Index_Size start_x_, const Index_Size start_y_, const Index_Size width_, const Index_Size height_, const ::dtl::base::RogueLikeList<Matrix_Var_>& draw_value_)noexcept
				:RectBase_t(start_x_, start_y_, width_, height_),
				rogueLikeList(draw_value_) {}
			constexpr RectBaseRogueLike(
				const Matrix_Var_& outside_wall_id_,
				const Matrix_Var_& inside_wall_id_,
				const Matrix_Var_& room_id_,
				const Matrix_Var_& entrance_id_,
				const Matrix_Var_& way_id_,
				const Matrix_Var_& max_way_)noexcept :
				rogueLikeList(outside_wall_id_, inside_wall_id_, room_id_, entrance_id_, way_id_), max_way(max_way_) {}
			constexpr RectBaseRogueLike(
				const Matrix_Var_& outside_wall_id_,
				const Matrix_Var_& inside_wall_id_,
				const Matrix_Var_& room_id_,
				const Matrix_Var_& entrance_id_,
				const Matrix_Var_& way_id_,
				const Matrix_Var_& max_way_, const ::dtl::base::MatrixRange& roomRange_)noexcept :
				rogueLikeList(outside_wall_id_, inside_wall_id_, room_id_, entrance_id_, way_id_), max_way(max_way_), roomRange(roomRange_) {}
			constexpr RectBaseRogueLike(
				const Matrix_Var_& outside_wall_id_,
				const Matrix_Var_& inside_wall_id_,
				const Matrix_Var_& room_id_,
				const Matrix_Var_& entrance_id_,
				const Matrix_Var_& way_id_,
				const Matrix_Var_& max_way_, const ::dtl::base::MatrixRange& roomRange_, const ::dtl::base::MatrixRange& wayRange_)noexcept :
				rogueLikeList(outside_wall_id_, inside_wall_id_, room_id_, entrance_id_, way_id_), max_way(max_way_), roomRange(roomRange_), wayRange(wayRange_) {}
			constexpr RectBaseRogueLike(const ::dtl::base::MatrixRange& matrix_range_, const ::dtl::base::RogueLikeList<Matrix_Var_>& draw_value_, const Matrix_Var_& max_way_)noexcept
				:RectBase_t(matrix_range_),
				rogueLikeList(draw_value_), max_way(max_way_) {}
			constexpr explicit RectBaseRogueLike(const ::dtl::base::MatrixRange& matrix_range_, const ::dtl::base::RogueLikeList<Matrix_Var_>& draw_value_, const Matrix_Var_& max_way_, const ::dtl::base::MatrixRange& roomRange_)noexcept
				:RectBase_t(matrix_range_),
				rogueLikeList(draw_value_), max_way(max_way_), roomRange(roomRange_) {}
			constexpr explicit RectBaseRogueLike(const ::dtl::base::MatrixRange& matrix_range_, const ::dtl::base::RogueLikeList<Matrix_Var_>& draw_value_, const Matrix_Var_& max_way_, const ::dtl::base::MatrixRange& roomRange_, const ::dtl::base::MatrixRange& wayRange_)noexcept
				:RectBase_t(matrix_range_),
				rogueLikeList(draw_value_), max_way(max_way_), roomRange(roomRange_), wayRange(wayRange_) {}
			constexpr RectBaseRogueLike(const Index_Size start_x_, const Index_Size start_y_, const Index_Size width_, const Index_Size height_, const ::dtl::base::RogueLikeList<Matrix_Var_>& draw_value_, const Matrix_Var_& max_way_)noexcept
				:RectBase_t(start_x_, start_y_, width_, height_),
				rogueLikeList(draw_value_), max_way(max_way_) {}
			constexpr explicit RectBaseRogueLike(const Index_Size start_x_, const Index_Size start_y_, const Index_Size width_, const Index_Size height_, const ::dtl::base::RogueLikeList<Matrix_Var_>& draw_value_, const Matrix_Var_& max_way_, const ::dtl::base::MatrixRange& roomRange_)noexcept
				:RectBase_t(start_x_, start_y_, width_, height_),
				rogueLikeList(draw_value_), max_way(max_way_), roomRange(roomRange_) {}
			constexpr explicit RectBaseRogueLike(const Index_Size start_x_, const Index_Size start_y_, const Index_Size width_, const Index_Size height_, const ::dtl::base::RogueLikeList<Matrix_Var_>& draw_value_, const Matrix_Var_& max_way_, const ::dtl::base::MatrixRange& roomRange_, const ::dtl::base::MatrixRange& wayRange_)noexcept
				:RectBase_t(start_x_, start_y_, width_, height_),
				rogueLikeList(draw_value_), max_way(max_way_), roomRange(roomRange_), wayRange(wayRange_) {}

		};
	}
}
#endif 

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_UTILITY_DRAW_JAGGED_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_UTILITY_DRAW_JAGGED_HPP

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_UTILITY_MATRIX_WRAPPER_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_UTILITY_MATRIX_WRAPPER_HPP
#include <cassert>
#include <cstddef>
#include <array>
#include <bitset>
#include <type_traits>
#include <utility>

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_TYPE_ENABLE_IF_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_TYPE_ENABLE_IF_HPP
#ifndef DTL_TYPE_ENABLE_IF
#if defined(UE_BUILD_FINAL_RELEASE)
#define DTL_TYPE_ENABLE_IF ::TEnableIf
#ifndef DTL_TYPE_EITYPE
#define DTL_TYPE_EITYPE Type
#endif
#else
#include <type_traits>
#define DTL_TYPE_ENABLE_IF ::std::enable_if
#ifndef DTL_TYPE_EITYPE
#define DTL_TYPE_EITYPE type
#endif
#endif
#endif
#endif 
#ifdef DTL_USE_BOOST_ARRAY
#endif
namespace dtl {
	inline namespace utility {

		template<typename...>
		struct void_helper {
			using type =void;
		};
		template<typename... Ts>
		using void_t =typename ::dtl::utility::void_helper<Ts...>::type;

		template<typename...>
		struct TList {};

		template<typename, typename = void>
		struct to_element {
			static constexpr bool value = false;
		};
		template<typename T>
		struct to_element<T, ::dtl::utility::void_t<decltype(::std::declval<T&>()[0])>> {
			static constexpr bool value = true;
			using type =typename ::std::remove_reference<decltype(::std::declval<T&>()[0])>::type;
		};
		template<typename T>
		using to_element_t =typename ::dtl::utility::to_element<T>::type;


		template<typename T>
		struct mcat_fixed {
			using is_jagged =::std::false_type;
			constexpr ::dtl::type::size get(const T&)const noexcept { return max_; }
			constexpr mcat_fixed(::dtl::type::size max_)noexcept : max_(max_) {}
		private:
			::dtl::type::size max_;
		};

		template<typename T, ::dtl::type::size N>
		struct mcat_const {
			using is_jagged =::std::false_type;
			constexpr ::dtl::type::size get(const T&)const noexcept { return N; }
		};

		template<typename T>
		struct mcat_memfn {
			using is_jagged =::std::true_type;
			constexpr ::dtl::type::size get(const T& v)const noexcept(noexcept(v.size())) { return v.size(); }
		};

		template<typename B, typename V, typename M, typename TY, typename TX>
		struct MatrixWrapperCommon : TX, TY {
			using Index_Size =::dtl::type::size;
			using is_jagged =typename TX::is_jagged;
			constexpr MatrixWrapperCommon(M& mat, Index_Size max_x, Index_Size max_y)noexcept : TX(max_x), TY(max_y), mat(mat) {}
			constexpr MatrixWrapperCommon(M& mat)noexcept : mat(mat) {}
			constexpr Index_Size getX(const Index_Size pos = 0)const
				noexcept(noexcept(::std::declval<MatrixWrapperCommon>().getY()) && noexcept(::std::declval<TX>().get(::std::declval<M&>()[0]))) {
				return is_jagged::value && getY() <= pos ? 0 : TX::get(mat[pos]);
			}
			constexpr Index_Size getY()const noexcept(noexcept(::std::declval<TY>().get(::std::declval<M&>()))) {
				return TY::get(mat);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				void set(const Index_Size point_x_, const Index_Size point_y_, V value_)
				noexcept(noexcept(::std::declval<B&>()(0, 0) = {})) {
				static_cast<B&>(*this)(point_x_, point_y_) = value_;
			}
			template<typename Function_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				void set(const Index_Size point_x_, const Index_Size point_y_, V value_, Function_&& function_)
				noexcept(noexcept(function_(::std::declval<B&>()(0, 0))) && noexcept(::std::declval<B&>()(0, 0) = {})) {
				if (function_(static_cast<B&>(*this)(point_x_, point_y_)))
					static_cast<B&>(*this)(point_x_, point_y_) = value_;
			}

			DTL_VERSIONING_CPP14_CONSTEXPR
				void set(const Index_Size point_x_, const Index_Size point_y_, V value_, int, int, int, int)
				noexcept(noexcept(::std::declval<B&>()(0, 0) = {})) {
				static_cast<B&>(*this)(point_x_, point_y_) += value_;
			}

			template<typename Function_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				void set(const Index_Size point_x_, const Index_Size point_y_, V value_, Function_&& function_, int, int, int)
				noexcept(noexcept(function_(::std::declval<B&>()(0, 0))) && noexcept(::std::declval<B&>()(0, 0) = {})) {
				if (function_(static_cast<B&>(*this)(point_x_, point_y_)))
					static_cast<B&>(*this)(point_x_, point_y_) += value_;
			}

			template<typename Function_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				void set(const Index_Size point_x_, const Index_Size point_y_, V value_, Function_&& function_, int, int, int, int)
				noexcept(noexcept(function_(::std::declval<B&>()(0, 0), {})) && noexcept(::std::declval<B&>()(0, 0) = {})) {
				function_(static_cast<B&>(*this)(point_x_, point_y_), value_);
			}

			template<typename Matrix_, typename Matrix_Var2_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				void set(const Index_Size point_x_, const Index_Size point_y_, V value_, Matrix_&& matrix_, Matrix_Var2_, int, int, int, int) {
				matrix_.set(point_x_, point_y_, static_cast<Matrix_Var2_>(value_));
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				V get(const Index_Size point_x_, const Index_Size point_y_)
				noexcept(noexcept(::std::declval<B&>()(0, 0) = {})) {
				return static_cast<B&>(*this)(point_x_, point_y_);
			}
			template<typename Function_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				V get(const Index_Size point_x_, const Index_Size point_y_, Function_&& function_)
				noexcept(noexcept(function_(::std::declval<B&>()(0, 0))) && noexcept(::std::declval<B&>()(0, 0) = {})) {
				if (function_(static_cast<B&>(*this)(point_x_, point_y_)))
					return static_cast<B&>(*this)(point_x_, point_y_);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				void add(const Index_Size point_x_, const Index_Size point_y_, V value_)
				noexcept(noexcept(::std::declval<B&>()(0, 0) = {})) {
				static_cast<B&>(*this)(point_x_, point_y_) += value_;
			}
			template<typename Function_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				void add(const Index_Size point_x_, const Index_Size point_y_, V value_, Function_&& function_)
				noexcept(noexcept(function_(::std::declval<B&>()(0, 0))) && noexcept(::std::declval<B&>()(0, 0) = {})) {
				if (function_(static_cast<B&>(*this)(point_x_, point_y_)))
					static_cast<B&>(*this)(point_x_, point_y_) += value_;
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				void sub(const Index_Size point_x_, const Index_Size point_y_, V value_)
				noexcept(noexcept(::std::declval<B&>()(0, 0) = {})) {
				static_cast<B&>(*this)(point_x_, point_y_) -= value_;
			}
			template<typename Function_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				void sub(const Index_Size point_x_, const Index_Size point_y_, V value_, Function_&& function_)
				noexcept(noexcept(function_(::std::declval<B&>()(0, 0))) && noexcept(::std::declval<B&>()(0, 0) = {})) {
				if (function_(static_cast<B&>(*this)(point_x_, point_y_)))
					static_cast<B&>(*this)(point_x_, point_y_) -= value_;
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				void mul(const Index_Size point_x_, const Index_Size point_y_, V value_)
				noexcept(noexcept(::std::declval<B&>()(0, 0) = {})) {
				static_cast<B&>(*this)(point_x_, point_y_) *= value_;
			}
			template<typename Function_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				void mul(const Index_Size point_x_, const Index_Size point_y_, V value_, Function_&& function_)
				noexcept(noexcept(function_(::std::declval<B&>()(0, 0))) && noexcept(::std::declval<B&>()(0, 0) = {})) {
				if (function_(static_cast<B&>(*this)(point_x_, point_y_)))
					static_cast<B&>(*this)(point_x_, point_y_) *= value_;
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				void div(const Index_Size point_x_, const Index_Size point_y_, V value_)
				noexcept(noexcept(::std::declval<B&>()(0, 0) = {})) {
				static_cast<B&>(*this)(point_x_, point_y_) /= value_;
			}
			template<typename Function_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				void div(const Index_Size point_x_, const Index_Size point_y_, V value_, Function_&& function_)
				noexcept(noexcept(function_(::std::declval<B&>()(0, 0))) && noexcept(::std::declval<B&>()(0, 0) = {})) {
				if (function_(static_cast<B&>(*this)(point_x_, point_y_)))
					static_cast<B&>(*this)(point_x_, point_y_) /= value_;
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				void mod(const Index_Size point_x_, const Index_Size point_y_, V value_)
				noexcept(noexcept(::std::declval<B&>()(0, 0) = {})) {
				static_cast<B&>(*this)(point_x_, point_y_) %= value_;
			}
			template<typename Function_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				void mod(const Index_Size point_x_, const Index_Size point_y_, V value_, Function_&& function_)
				noexcept(noexcept(function_(::std::declval<B&>()(0, 0))) && noexcept(::std::declval<B&>()(0, 0) = {})) {
				if (function_(static_cast<B&>(*this)(point_x_, point_y_)))
					static_cast<B&>(*this)(point_x_, point_y_) %= value_;
			}
		protected:
			M& mat;
		};

		template<typename V, typename M, typename = ::dtl::utility::void_t<decltype(static_cast<V>(::std::declval<M&>()[0]))>>
		struct MatrixWrapperBase1 : ::dtl::utility::MatrixWrapperCommon<MatrixWrapperBase1<V, M>, V, M, ::dtl::utility::mcat_fixed<M>, ::dtl::utility::mcat_fixed<::dtl::utility::to_element_t<M>>> {
			using Base_t =::dtl::utility::MatrixWrapperCommon<MatrixWrapperBase1, V, M, ::dtl::utility::mcat_fixed<M>, ::dtl::utility::mcat_fixed<::dtl::utility::to_element_t<M>>>;
			using Index_Size =typename Base_t::Index_Size;
			using Base_t::Base_t;
			decltype(::std::declval<M&>()[0])operator()(Index_Size x, Index_Size y)noexcept(noexcept(::std::declval<M&>()[0])) { return Base_t::mat[y * Base_t::getX() + x]; }
			typename std::add_const<decltype(::std::declval<M&>()[0])>::type operator()(Index_Size x, Index_Size y)const noexcept(noexcept(::std::declval<M&>()[0])) { return Base_t::mat[y * Base_t::getX() + x]; }
		};

		template<typename V, typename M, typename TY, typename TX, typename = ::dtl::utility::void_t<decltype(static_cast<V>(::std::declval<M&>()[0][0]))>>
		struct MatrixWrapperBase2 : ::dtl::utility::MatrixWrapperCommon<MatrixWrapperBase2<V, M, TY, TX>, V, M, TY, TX> {
			using Base_t =::dtl::utility::MatrixWrapperCommon<MatrixWrapperBase2, V, M, TY, TX>;
			using Index_Size =typename Base_t::Index_Size;
			using Base_t::Base_t;
			decltype(::std::declval<M&>()[0][0])operator()(Index_Size x, Index_Size y)noexcept(noexcept(::std::declval<M&>()[0][0])) { return Base_t::mat[y][x]; }
			typename std::add_const<decltype(::std::declval<M&>()[0][0])>::type operator()(Index_Size x, Index_Size y)const noexcept(noexcept(::std::declval<M&>()[0][0])) { return Base_t::mat[y][x]; }
		};

		template<typename V, typename M, typename TY, typename TX, typename = ::dtl::utility::void_t<decltype(static_cast<V>(::std::declval<M&>()[0][0][0]))>>
		struct MatrixWrapperBase3 : ::dtl::utility::MatrixWrapperCommon<MatrixWrapperBase3<V, M, TY, TX>, V, M, TY, TX> {
			using Base_t =::dtl::utility::MatrixWrapperCommon<MatrixWrapperBase3, V, M, TY, TX>;
			using Index_Size =typename Base_t::Index_Size;
			constexpr MatrixWrapperBase3(M& mat, Index_Size draw_layer, Index_Size max_x, Index_Size max_y)noexcept : Base_t(mat, max_x, max_y), draw_layer_(draw_layer) {}
			constexpr MatrixWrapperBase3(M& mat, Index_Size draw_layer)noexcept : Base_t(mat), draw_layer_(draw_layer) {}
			decltype(::std::declval<M&>()[0][0][0])operator()(Index_Size x, Index_Size y)noexcept(noexcept(::std::declval<M&>()[0][0][0])) { return Base_t::mat[y][x][draw_layer_]; }
			typename std::add_const<decltype(::std::declval<M&>()[0][0][0])>::type operator()(Index_Size x, Index_Size y)const noexcept(noexcept(::std::declval<M&>()[0][0][0])) { return Base_t::mat[y][x][draw_layer_]; }
		private:
			Index_Size draw_layer_;
		};


		template<typename, typename = TList<>, typename = void>
		struct MatrixWrapperImpl;

		template<typename E, typename... Ts>
		struct MatrixWrapperImpl<E*, TList<Ts...>, ::dtl::utility::void_t<::dtl::utility::to_element_t<E*>>> : MatrixWrapperImpl<E, TList<Ts..., ::dtl::utility::mcat_fixed<E*>>> {};

		template<typename E, ::dtl::type::size N, typename... Ts>
		struct MatrixWrapperImpl<E[N], TList<Ts...>, ::dtl::utility::void_t<::dtl::utility::to_element_t<E[N]>>> : MatrixWrapperImpl<E, TList<Ts..., ::dtl::utility::mcat_const<E[N], N>>> {};

		template<typename E, ::dtl::type::size N, typename... Ts>
		struct MatrixWrapperImpl<::std::array<E, N>, TList<Ts...>, ::dtl::utility::void_t<::dtl::utility::to_element_t<::std::array<E, N>>>> : MatrixWrapperImpl<E, TList<Ts..., ::dtl::utility::mcat_const<::std::array<E, N>, N>>> {};
#ifdef DTL_USE_BOOST_ARRAY

		template<typename E, ::dtl::type::size N, typename... Ts>
		struct MatrixWrapperImpl<boost::array<E, N>, TList<Ts...>, ::dtl::utility::void_t<::dtl::utility::to_element_t<boost::array<E, N>>>> : MatrixWrapperImpl<E, TList<Ts..., ::dtl::utility::mcat_const<boost::array<E, N>, N>>> {};
#endif

		template<::dtl::type::size N, typename... Ts>
		struct MatrixWrapperImpl<::std::bitset<N>, TList<Ts...>, ::dtl::utility::void_t<::dtl::utility::to_element_t<::std::bitset<N>>>> : MatrixWrapperImpl<bool, TList<Ts..., ::dtl::utility::mcat_const<::std::bitset<N>, N>>> {};

		template<typename T, typename... Ts>
		struct MatrixWrapperImpl<T, TList<Ts...>, ::dtl::utility::void_t<::dtl::utility::to_element_t<T>>> : MatrixWrapperImpl<::dtl::utility::to_element_t<T>, TList<Ts..., ::dtl::utility::mcat_memfn<T>>> {};

		template<typename T, typename TX>
		struct MatrixWrapperImpl<T, TList<TX>, typename DTL_TYPE_ENABLE_IF<!::dtl::utility::to_element<T>::value>::DTL_TYPE_EITYPE> {
			template<typename V, typename M>
			using Base_t =::dtl::utility::MatrixWrapperBase1<V, M>;
		};

		template<typename T, typename TY, typename TX>
		struct MatrixWrapperImpl<T, TList<TY, TX>, typename DTL_TYPE_ENABLE_IF<!::dtl::utility::to_element<T>::value>::DTL_TYPE_EITYPE> {
			template<typename V, typename M>
			using Base_t =::dtl::utility::MatrixWrapperBase2<V, M, TY, TX>;
		};

		template<typename T, typename TY, typename TX, typename TL>
		struct MatrixWrapperImpl<T, TList<TY, TX, TL>, typename DTL_TYPE_ENABLE_IF<!::dtl::utility::to_element<T>::value>::DTL_TYPE_EITYPE> {
			template<typename V, typename M>
			using Base_t =::dtl::utility::MatrixWrapperBase3<V, M, TY, TX>;
		};

		template<typename V, typename M, ::dtl::type::size N, typename = void>
		struct MatrixWrapper : ::dtl::utility::MatrixWrapperImpl<M>::template Base_t<V, M> {
			using Base_t =typename ::dtl::utility::MatrixWrapperImpl<M>::template Base_t<V, M>;
			using Base_t::Base_t;
		};

		template<typename V, typename M>
		struct MatrixWrapper<V, M, 2, typename DTL_TYPE_ENABLE_IF<!::dtl::utility::to_element<::dtl::utility::to_element_t<M>>::value>::DTL_TYPE_EITYPE>
			: ::dtl::utility::MatrixWrapperBase1<V, M> {
			using Base_t =::dtl::utility::MatrixWrapperBase1<V, M>;
			using Base_t::Base_t;
		};

		template<typename V, typename M>
		struct MatrixWrapper<V, M, 2, typename DTL_TYPE_ENABLE_IF<::dtl::utility::to_element<::dtl::utility::to_element_t<M>>::value>::DTL_TYPE_EITYPE>
			: ::dtl::utility::MatrixWrapperBase2<V, M, ::dtl::utility::mcat_fixed<M>, ::dtl::utility::mcat_fixed<::dtl::utility::to_element_t<M>>> {
			using Base_t =::dtl::utility::MatrixWrapperBase2<V, M, ::dtl::utility::mcat_fixed<M>, ::dtl::utility::mcat_fixed<::dtl::utility::to_element_t<M>>>;
			using Base_t::Base_t;
		};

		template<typename V, typename M>
		struct MatrixWrapper<V, M, 3>
			: ::dtl::utility::MatrixWrapperBase3<V, M, ::dtl::utility::mcat_fixed<M>, ::dtl::utility::mcat_fixed<::dtl::utility::to_element_t<M>>> {
			using Base_t =::dtl::utility::MatrixWrapperBase3<V, M, ::dtl::utility::mcat_fixed<M>, ::dtl::utility::mcat_fixed<::dtl::utility::to_element_t<M>>>;
			using Base_t::Base_t;
		};

		template<typename V, typename M, typename... Args>
		constexpr MatrixWrapper<V, typename ::std::remove_reference<M>::type, sizeof...(Args)> makeWrapper(M&& mat, Args&& ... args) {
			return MatrixWrapper<V, typename ::std::remove_reference<M>::type, sizeof...(Args)>(mat, DTL_TYPE_FORWARD<Args>(args)...);
		}
	}
}
#endif 
namespace dtl {
	inline namespace utility {
		template<typename Derived, typename Matrix_Var_, typename Return_Var_ = bool>
		class DrawJagged {
		private:

			using Index_Size =::dtl::type::size;
		public:
			template<typename Matrix_, typename ...Args_>
			constexpr Return_Var_ make(Matrix_& matrix_, Args_&& ... args_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(matrix_, DTL_TYPE_FORWARD<Args_>(args_)...);
			}
			template<typename Matrix_>
			constexpr Return_Var_ makeAdd(Matrix_& matrix_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(matrix_, 0, 0, 0, 0);
			}

			template<typename Matrix_>
			constexpr Return_Var_ draw(Matrix_& matrix_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_));
			}
			template<typename Matrix_, typename Matrix2_>
			constexpr Return_Var_ drawOther(Matrix_& matrix_, Matrix2_& matrix2_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_), ::dtl::utility::makeWrapper<Matrix_Var_>(matrix2_)
					, Matrix_Var_{}, 0, 0, 0, 0);
			}
			template<typename Matrix_Var2_, typename Matrix_, typename Matrix2_>
			constexpr Return_Var_ drawOther(Matrix_& matrix_, Matrix2_& matrix2_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_), ::dtl::utility::makeWrapper<Matrix_Var2_>(matrix2_)
					, Matrix_Var2_{}, 0, 0, 0, 0);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawOperator(Matrix_& matrix_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_), function_);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawFunction(Matrix_& matrix_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_), function_, 0, 0, 0, 0);
			}
			template<typename Matrix_>
			constexpr Return_Var_ drawAdd(Matrix_& matrix_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_), 0, 0, 0, 0);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawAddOperator(Matrix_& matrix_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_), function_, 0, 0, 0);
			}
			template<typename Matrix_>
			constexpr Return_Var_ draw(Matrix_& matrix_, const Index_Size layer_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, layer_));
			}
			template<typename Matrix_, typename Matrix2_>
			constexpr Return_Var_ drawOther(Matrix_& matrix_, Matrix2_& matrix2_, const Index_Size layer_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, layer_), ::dtl::utility::makeWrapper<Matrix_Var_>(matrix2_, layer_)
					, Matrix_Var_{}, 0, 0, 0, 0);
			}
			template<typename Matrix_Var2_, typename Matrix_, typename Matrix2_>
			constexpr Return_Var_ drawOther(Matrix_& matrix_, Matrix2_& matrix2_, const Index_Size layer_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, layer_), ::dtl::utility::makeWrapper<Matrix_Var2_>(matrix2_, layer_)
					, Matrix_Var2_{}, 0, 0, 0, 0);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawOperator(Matrix_& matrix_, const Index_Size layer_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, layer_), function_);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawFunction(Matrix_& matrix_, const Index_Size layer_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, layer_), function_, 0, 0, 0, 0);
			}
			template<typename Matrix_>
			constexpr Return_Var_ drawAdd(Matrix_& matrix_, const Index_Size layer_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, layer_), 0, 0, 0, 0);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawAddOperator(Matrix_& matrix_, const Index_Size layer_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, layer_), function_, 0, 0, 0);
			}
			template<typename Matrix_>
			constexpr Return_Var_ draw(Matrix_& matrix_, const Index_Size max_x_, const Index_Size max_y_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, max_x_, max_y_));
			}
			template<typename Matrix_, typename Matrix2_>
			constexpr Return_Var_ drawOther(Matrix_& matrix_, Matrix2_& matrix2_, const Index_Size max_x_, const Index_Size max_y_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, max_x_, max_y_), ::dtl::utility::makeWrapper<Matrix_Var_>(matrix2_, max_x_, max_y_)
					, Matrix_Var_{}, 0, 0, 0, 0);
			}
			template<typename Matrix_Var2_, typename Matrix_, typename Matrix2_>
			constexpr Return_Var_ drawOther(Matrix_& matrix_, Matrix2_& matrix2_, const Index_Size max_x_, const Index_Size max_y_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, max_x_, max_y_), ::dtl::utility::makeWrapper<Matrix_Var2_>(matrix2_, max_x_, max_y_)
					, Matrix_Var2_{}, 0, 0, 0, 0);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawOperator(Matrix_& matrix_, const Index_Size max_x_, const Index_Size max_y_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, max_x_, max_y_), function_);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawFunction(Matrix_& matrix_, const Index_Size max_x_, const Index_Size max_y_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, max_x_, max_y_), function_, 0, 0, 0, 0);
			}
			template<typename Matrix_>
			constexpr Return_Var_ drawAdd(Matrix_& matrix_, const Index_Size max_x_, const Index_Size max_y_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, max_x_, max_y_), 0, 0, 0, 0);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawAddOperator(Matrix_& matrix_, const Index_Size max_x_, const Index_Size max_y_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, max_x_, max_y_), function_, 0, 0, 0);
			}
			template<typename Matrix_>
			constexpr Return_Var_ draw(Matrix_& matrix_, const Index_Size layer_, const Index_Size max_x_, const Index_Size max_y_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, layer_, max_x_, max_y_));
			}
			template<typename Matrix_, typename Matrix2_>
			constexpr Return_Var_ drawOther(Matrix_& matrix_, Matrix2_& matrix2_, const Index_Size layer_, const Index_Size max_x_, const Index_Size max_y_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, layer_, max_x_, max_y_), ::dtl::utility::makeWrapper<Matrix_Var_>(matrix2_, layer_, max_x_, max_y_)
					, Matrix_Var_{}, 0, 0, 0, 0);
			}
			template<typename Matrix_Var2_, typename Matrix_, typename Matrix2_>
			constexpr Return_Var_ drawOther(Matrix_& matrix_, Matrix2_& matrix2_, const Index_Size layer_, const Index_Size max_x_, const Index_Size max_y_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, layer_, max_x_, max_y_), ::dtl::utility::makeWrapper<Matrix_Var2_>(matrix2_, layer_, max_x_, max_y_)
					, Matrix_Var2_{}, 0, 0, 0, 0);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawOperator(Matrix_& matrix_, const Index_Size layer_, const Index_Size max_x_, const Index_Size max_y_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, layer_, max_x_, max_y_), function_);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawFunction(Matrix_& matrix_, const Index_Size layer_, const Index_Size max_x_, const Index_Size max_y_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, layer_, max_x_, max_y_), function_, 0, 0, 0, 0);
			}
			template<typename Matrix_>
			constexpr Return_Var_ drawAdd(Matrix_& matrix_, const Index_Size layer_, const Index_Size max_x_, const Index_Size max_y_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, layer_, max_x_, max_y_), 0, 0, 0, 0);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawAddOperator(Matrix_& matrix_, const Index_Size layer_, const Index_Size max_x_, const Index_Size max_y_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, layer_, max_x_, max_y_), function_, 0, 0, 0);
			}
			template<typename Matrix_>
			constexpr Return_Var_ drawArray(Matrix_& matrix_, const Index_Size max_x_, const Index_Size max_y_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, max_x_, max_y_));
			}
			template<typename Matrix_, typename Matrix2_>
			constexpr Return_Var_ drawOtherArray(Matrix_& matrix_, Matrix2_& matrix2_, const Index_Size max_x_, const Index_Size max_y_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, max_x_, max_y_), ::dtl::utility::makeWrapper<Matrix_Var_>(matrix2_, max_x_, max_y_)
					, Matrix_Var_{}, 0, 0, 0, 0);
			}
			template<typename Matrix_Var2_, typename Matrix_, typename Matrix2_>
			constexpr Return_Var_ drawOtherArray(Matrix_& matrix_, Matrix2_& matrix2_, const Index_Size max_x_, const Index_Size max_y_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, max_x_, max_y_), ::dtl::utility::makeWrapper<Matrix_Var2_>(matrix2_, max_x_, max_y_)
					, Matrix_Var2_{}, 0, 0, 0, 0);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawOperatorArray(Matrix_& matrix_, const Index_Size max_x_, const Index_Size max_y_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, max_x_, max_y_), function_);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawFunctionArray(Matrix_& matrix_, const Index_Size max_x_, const Index_Size max_y_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, max_x_, max_y_), function_, 0, 0, 0, 0);
			}
			template<typename Matrix_, typename Function_>
			constexpr Return_Var_ drawAddOperatorArray(Matrix_& matrix_, const Index_Size max_x_, const Index_Size max_y_, Function_&& function_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, max_x_, max_y_), function_, 0, 0, 0);
			}
			template<typename Matrix_>
			constexpr Return_Var_ drawAddArray(Matrix_& matrix_, const Index_Size max_x_, const Index_Size max_y_)const noexcept {
				return static_cast<const Derived*>(this)->drawNormal(::dtl::utility::makeWrapper<Matrix_Var_>(matrix_, max_x_, max_y_), 0, 0, 0, 0);
			}

			template<typename Matrix_, typename ...Args_>
			constexpr Return_Var_ operator()(Matrix_& matrix_, Args_&& ... args_)const noexcept {
				return this->draw(matrix_, DTL_TYPE_FORWARD<Args_>(args_)...);
			}

			template<typename Matrix_, typename ...Args_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Matrix_&& create(Matrix_&& matrix_, Args_&& ... args_)const noexcept {
				this->draw(matrix_, DTL_TYPE_FORWARD<Args_>(args_)...);
				return DTL_TYPE_FORWARD<Matrix_>(matrix_);
			}
			template<typename Matrix_, typename ...Args_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Matrix_&& createArray(Matrix_&& matrix_, Args_&& ... args_)const noexcept {
				this->drawArray(matrix_, DTL_TYPE_FORWARD<Args_>(args_)...);
				return DTL_TYPE_FORWARD<Matrix_>(matrix_);
			}
			template<typename Matrix_, typename ...Args_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Matrix_&& createOperator(Matrix_&& matrix_, Args_&& ... args_)const noexcept {
				this->drawOperator(matrix_, DTL_TYPE_FORWARD<Args_>(args_)...);
				return DTL_TYPE_FORWARD<Matrix_>(matrix_);
			}
			template<typename Matrix_, typename ...Args_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				Matrix_&& createOperatorArray(Matrix_&& matrix_, Args_&& ... args_)const noexcept {
				this->drawOperatorArray(matrix_, DTL_TYPE_FORWARD<Args_>(args_)...);
				return DTL_TYPE_FORWARD<Matrix_>(matrix_);
			}
		};
	}
}
#endif 
namespace dtl {
	inline namespace shape {

		template<typename Matrix_Var_>
		struct RogueLikeOutputNumber {
			RogueLikeOutputNumber() = default;

			Matrix_Var_ x{}, y{};

			Matrix_Var_ w{}, h{};
			constexpr RogueLikeOutputNumber(
				const Matrix_Var_ x_,
				const Matrix_Var_ y_,
				const Matrix_Var_ w_,
				const Matrix_Var_ h_)noexcept :x(x_), y(y_), w(w_), h(h_) {}
		};
		template<typename Matrix_Var_>
		class RogueLike : public ::dtl::range::RectBaseRogueLike<RogueLike<Matrix_Var_>, Matrix_Var_>,
			public ::dtl::utility::DrawJagged<RogueLike<Matrix_Var_>, Matrix_Var_> {
		private:

			using Index_Size =::dtl::type::size;
			using ShapeBase_t =::dtl::range::RectBaseRogueLike<RogueLike, Matrix_Var_>;
			using DrawBase_t =::dtl::utility::DrawJagged<RogueLike, Matrix_Var_>;
			using Range_ =RogueLikeOutputNumber< ::dtl::type::int_fast32>;
			using VRange_ =::std::vector<Range_>;
			using VBool_ =::std::vector<bool>;
			friend DrawBase_t;

			enum : ::dtl::type::size {
				direction_north,
				direction_south,
				direction_west,
				direction_east,
				direction_count,
			};
			template<typename Matrix_, typename ...Args_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				bool createNext2(Matrix_& matrix_, const Index_Size size_x, const Index_Size size_y, VRange_& room_rect_, VRange_& branch_point, VBool_& is_way_, Args_&& ... args_)const noexcept {
				for (::dtl::type::size i{}, r{}; i < (::dtl::type::size)0xffff; ++i) {
					if (branch_point.empty())break;

					r = DTL_RANDOM_ENGINE.get<::dtl::type::size>(branch_point.size());
					const ::dtl::type::int_fast32 x{ DTL_RANDOM_ENGINE.get<::dtl::type::int_fast32>(branch_point[r].x,branch_point[r].x + branch_point[r].w - 1) };
					const ::dtl::type::int_fast32 y{ DTL_RANDOM_ENGINE.get<::dtl::type::int_fast32>(branch_point[r].y,branch_point[r].y + branch_point[r].h - 1) };

					for (::dtl::type::size j{}; j < direction_count; ++j) {
						if (!this->createNext(matrix_, size_x, size_y, room_rect_, branch_point, is_way_, is_way_[r], x, y, j, args_...))continue;
						branch_point.erase(branch_point.begin() + r);
						is_way_.erase(is_way_.begin() + r);
						return true;
					}
				}
				return false;
			}
			template<typename Matrix_, typename ...Args_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				bool createNext(Matrix_& matrix_, const Index_Size size_x, const Index_Size size_y, VRange_& room_rect_, VRange_& branch_point, VBool_& is_v_way_, const bool is_way_, const ::dtl::type::int_fast32 x, const ::dtl::type::int_fast32 y, const ::dtl::type::size dir_, Args_&& ... args_)const noexcept {
				::dtl::type::int_fast32 dx{};
				::dtl::type::int_fast32 dy{};
				switch (dir_)
				{
				case direction_north:dy = 1; break;
				case direction_south:dy = -1; break;
				case direction_west:dx = 1; break;
				case direction_east:dx = -1; break;
				}
				
				if (this->start_x + x + dx < 0 || this->start_x + x + dx >= size_x || this->start_y + y + dy < 0 ||
				    this->start_y + y + dy >= size_y) {
					return false;
				}

				if (matrix_.get(this->start_x + x + dx, this->start_y + y + dy) != this->rogueLikeList.room_id && matrix_.get(this->start_x + x + dx, this->start_y + y + dy) != this->rogueLikeList.way_id)return false;
				if (!is_way_) {

					if (!makeWay(matrix_, size_x, size_y, branch_point, is_v_way_, x, y, dir_))return false;
					if (matrix_.get(this->start_x + x + dx, this->start_y + y + dy) == this->rogueLikeList.room_id)matrix_.set(x, y, this->rogueLikeList.entrance_id, args_...);
					else matrix_.set(x, y, this->rogueLikeList.way_id, args_...);
					return true;
				}

				if (DTL_RANDOM_ENGINE.probability()) {

					if (!makeRoom(matrix_, size_x, size_y, room_rect_, branch_point, is_v_way_, x, y, dir_))return false;
					matrix_.set(x, y, this->rogueLikeList.entrance_id, args_...);
					return true;
				}
				else {

					if (!makeWay(matrix_, size_x, size_y, branch_point, is_v_way_, x, y, dir_))return false;
					if (matrix_.get(this->start_x + x + dx, this->start_y + y + dy) == this->rogueLikeList.room_id)matrix_.set(x, y, this->rogueLikeList.entrance_id, args_...);
					else matrix_.set(x, y, this->rogueLikeList.way_id, args_...);
					return true;
				}
				return false;
			}
			template<typename Matrix_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				bool makeRoom(Matrix_& matrix_, const Index_Size size_x, const Index_Size size_y, VRange_& room_rect_, VRange_& branch_point, VBool_& is_way_, const ::dtl::type::int_fast32 x_, const ::dtl::type::int_fast32 y_, const ::dtl::type::size dir_, const bool firstRoom_ = false)const noexcept {
				Range_ room;
				room.w = DTL_RANDOM_ENGINE.get<::dtl::type::int_fast32>(this->roomRange.x, this->roomRange.x + this->roomRange.w - 1);
				room.h = DTL_RANDOM_ENGINE.get<::dtl::type::int_fast32>(this->roomRange.y, this->roomRange.y + this->roomRange.h - 1);
				switch (dir_)
				{
				case direction_north:
					room.x = x_ - room.w / 2;
					room.y = y_ - room.h;
					break;
				case direction_south:
					room.x = x_ - room.w / 2;
					room.y = y_ + 1;
					break;
				case direction_west:
					room.x = x_ - room.w;
					room.y = y_ - room.h / 2;
					break;
				case direction_east:
					room.x = x_ + 1;
					room.y = y_ - room.h / 2;
					break;
				}
				if (this->placeOutputNumber(matrix_, size_x, size_y, room, this->rogueLikeList.room_id)) {
					room_rect_.emplace_back(room);
					if (dir_ != direction_south || firstRoom_) {
						branch_point.emplace_back(Range_{ room.x,room.y - 1,room.w,1 });
						is_way_.push_back(false);
					}
					if (dir_ != direction_north || firstRoom_) {
						branch_point.emplace_back(Range_{ room.x,room.y + room.h,room.w,1 });
						is_way_.push_back(false);
					}
					if (dir_ != direction_east || firstRoom_) {
						branch_point.emplace_back(Range_{ room.x - 1,room.y,1,room.h });
						is_way_.push_back(false);
					}
					if (dir_ != direction_west || firstRoom_) {
						branch_point.emplace_back(Range_{ room.x + room.w,room.y,1,room.h });
						is_way_.push_back(false);
					}
					return true;
				}
				return false;
			}
			template<typename Matrix_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				bool makeWay(Matrix_& matrix_, const Index_Size size_x, const Index_Size size_y, VRange_& branch_point, VBool_& is_way_, const ::dtl::type::int_fast32 x_, const ::dtl::type::int_fast32 y_, const ::dtl::type::size dir_)const noexcept {
				Range_ way{};
				way.x = x_;
				way.y = y_;

				if (DTL_RANDOM_ENGINE.probability()) {
					way.w = DTL_RANDOM_ENGINE.get<::dtl::type::int_fast32>(this->wayRange.x, this->wayRange.x + this->wayRange.w - 1);
					way.h = 1;
					switch (dir_)
					{
					case direction_north:
						way.y = y_ - 1;
						if (DTL_RANDOM_ENGINE.probability())way.x = x_ - way.w + 1;
						break;
					case direction_south:
						way.y = y_ + 1;
						if (DTL_RANDOM_ENGINE.probability())way.x = x_ - way.w + 1;
						break;
					case direction_west:
						way.x = x_ - way.w;
						break;
					case direction_east:
						way.x = x_ + 1;
						break;
					}
				}

				else {
					way.w = 1;
					way.h = DTL_RANDOM_ENGINE.get<::dtl::type::int_fast32>(this->wayRange.y, this->wayRange.y + this->wayRange.h - 1);
					if (dir_ == direction_north)
						way.y = y_ - way.h;
					else if (dir_ == direction_south)
						way.y = y_ + 1;
					else if (dir_ == direction_west) {
						way.x = x_ - 1;
						if (DTL_RANDOM_ENGINE.probability())
							way.y = y_ - way.h + 1;
					}
					else if (dir_ == direction_east) {
						way.x = x_ + 1;
						if (DTL_RANDOM_ENGINE.probability())
							way.y = y_ - way.h + 1;
					}
				}
				if (!this->placeOutputNumber(matrix_, size_x, size_y, way, this->rogueLikeList.way_id))return false;
				if (dir_ != direction_south && way.w != 1) {
					branch_point.emplace_back(way.x, way.y - 1, way.w, 1);
					is_way_.push_back(true);
				}
				if (dir_ != direction_north && way.w != 1) {
					branch_point.emplace_back(way.x, way.y + way.h, way.w, 1);
					is_way_.push_back(true);
				}
				if (dir_ != direction_east && way.h != 1) {
					branch_point.emplace_back(way.x - 1, way.y, 1, way.h);
					is_way_.push_back(true);
				}
				if (dir_ != direction_west && way.h != 1) {
					branch_point.emplace_back(way.x + way.w, way.y, 1, way.h);
					is_way_.push_back(true);
				}
				return true;
			}
			template<typename Matrix_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				bool placeOutputNumber(Matrix_& matrix_, const Index_Size size_x, const Index_Size size_y, const Range_& rect, const Matrix_Var_ tile_)const noexcept {
				if (rect.x < 1 || rect.y < 1 || rect.x + rect.w >(::dtl::type::int_fast32)(size_x) - 1 || rect.y + rect.h >(::dtl::type::int_fast32)(size_y) - 1)
					return false;
				for (::dtl::type::int_fast32 y = rect.y; y < rect.y + rect.h; ++y)
					for (::dtl::type::int_fast32 x = rect.x; x < rect.x + rect.w; ++x)
						if (matrix_.get(this->start_x + x, this->start_y + y) != this->rogueLikeList.outside_wall_id)return false;
				for (::dtl::type::int_fast32 y = rect.y - 1; y < rect.y + rect.h + 1; ++y)
					for (::dtl::type::int_fast32 x = rect.x - 1; x < rect.x + rect.w + 1; ++x) {
						if (x == rect.x - 1 || y == rect.y - 1 || x == rect.x + rect.w || y == rect.y + rect.h)
							matrix_.set(x, y, this->rogueLikeList.inside_wall_id);
						else matrix_.set(x, y, tile_);
					}
				return true;
			}

			template<typename Matrix_, typename ...Args_>
			DTL_VERSIONING_CPP14_CONSTEXPR
				bool drawNormal(Matrix_&& matrix_, Args_&& ... args_)const noexcept {
				if (this->roomRange.w < 1 || this->roomRange.h < 1 || this->wayRange.w < 1 || this->wayRange.h < 1)return false;
				const Index_Size end_x_{ this->calcEndX(matrix_.getX()) };
				const Index_Size end_y_{ this->calcEndY(matrix_.getY()) };
				const Index_Size size_x{ end_x_ - this->start_x };
				const Index_Size size_y{ end_y_ - this->start_y };

				VRange_ room_rect{};

				VRange_ branch_point{};
				VBool_ is_way{};

				if (!this->makeRoom(matrix_, size_x, size_y, room_rect, branch_point, is_way, (::dtl::type::int_fast32)(size_x) / 2, (::dtl::type::int_fast32)(size_y) / 2, DTL_RANDOM_ENGINE.getBit2<::dtl::type::size>()))return false;

				for (::dtl::type::size i{ 1 }; i < this->max_way; ++i)
					if (!this->createNext2(matrix_, size_x, size_y, room_rect, branch_point, is_way, args_...))break;
				return true;
			}
		public:

			using ShapeBase_t::ShapeBase_t;
		};
	}
}
#endif 
