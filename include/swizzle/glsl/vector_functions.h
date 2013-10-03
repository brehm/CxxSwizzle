//  CxxSwizzle
//  Copyright (c) 2013, Piotr Gwiazdowski <gwiazdorrr.os@gmail.com>

#define SWIZZLE_FORWARD_FUNC_1(name) \
template <class T> inline auto name(T&& t) -> \
decltype(::swizzle::detail::decay(::swizzle::detail::get_vector_type<T>::type::name(t)) ) \
{ return ::swizzle::detail::get_vector_type<T>::type::name(std::forward<T>(t)); }      

#define SWIZZLE_FORWARD_FUNC_2(name) \
template <class T, class U> inline auto name(T&& t, U&& u) -> \
decltype(::swizzle::detail::decay(::swizzle::detail::get_vector_type<T, U>::type::name(t, u)) ) \
{ return ::swizzle::detail::get_vector_type<T, U>::type::name(std::forward<T>(t), std::forward<U>(u)); }                      

#define SWIZZLE_FORWARD_FUNC_3(name) \
template <class T, class U, class V> inline  auto name(T&& t, U&& u, V&& v) -> \
decltype(::swizzle::detail::decay(::swizzle::detail::get_vector_type<T, U, V>::type::name(t, u, v)) )\
{ return ::swizzle::detail::get_vector_type<T, U, V>::type::name(std::forward<T>(t), std::forward<U>(u), std::forward<V>(v)); }

SWIZZLE_FORWARD_FUNC_1(radians)
SWIZZLE_FORWARD_FUNC_1(degrees)
SWIZZLE_FORWARD_FUNC_1(sin)
SWIZZLE_FORWARD_FUNC_1(cos)
SWIZZLE_FORWARD_FUNC_1(tan)
SWIZZLE_FORWARD_FUNC_1(asin)
SWIZZLE_FORWARD_FUNC_1(acos)
SWIZZLE_FORWARD_FUNC_1(atan)
SWIZZLE_FORWARD_FUNC_2(atan)
SWIZZLE_FORWARD_FUNC_2(pow)
SWIZZLE_FORWARD_FUNC_1(exp)
SWIZZLE_FORWARD_FUNC_1(log)
SWIZZLE_FORWARD_FUNC_1(exp2)
SWIZZLE_FORWARD_FUNC_1(log2)
SWIZZLE_FORWARD_FUNC_1(sqrt)
SWIZZLE_FORWARD_FUNC_1(inversesqrt)
SWIZZLE_FORWARD_FUNC_1(abs)
SWIZZLE_FORWARD_FUNC_1(sign)
SWIZZLE_FORWARD_FUNC_1(floor)
SWIZZLE_FORWARD_FUNC_1(ceil)
SWIZZLE_FORWARD_FUNC_1(fract)
SWIZZLE_FORWARD_FUNC_2(mod)
SWIZZLE_FORWARD_FUNC_2(min)
SWIZZLE_FORWARD_FUNC_2(max)
SWIZZLE_FORWARD_FUNC_3(clamp)
SWIZZLE_FORWARD_FUNC_3(mix)
SWIZZLE_FORWARD_FUNC_2(step)
SWIZZLE_FORWARD_FUNC_3(smoothstep)
SWIZZLE_FORWARD_FUNC_2(reflect)
SWIZZLE_FORWARD_FUNC_1(length)
SWIZZLE_FORWARD_FUNC_2(distance)
SWIZZLE_FORWARD_FUNC_2(dot)
SWIZZLE_FORWARD_FUNC_1(normalize)
SWIZZLE_FORWARD_FUNC_3(faceforward)
SWIZZLE_FORWARD_FUNC_2(cross)

SWIZZLE_FORWARD_FUNC_2(lessThan)
SWIZZLE_FORWARD_FUNC_2(lessThanEqual)
SWIZZLE_FORWARD_FUNC_2(greaterThan)
SWIZZLE_FORWARD_FUNC_2(greaterThanEqual)
SWIZZLE_FORWARD_FUNC_2(equal)
SWIZZLE_FORWARD_FUNC_2(notEqual)
SWIZZLE_FORWARD_FUNC_1(any)
SWIZZLE_FORWARD_FUNC_1(all)
SWIZZLE_FORWARD_FUNC_1(not)

#undef SWIZZLE_FORWARD_FUNC_1
#undef SWIZZLE_FORWARD_FUNC_2
#undef SWIZZLE_FORWARD_FUNC_3