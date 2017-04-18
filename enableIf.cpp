// variant.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include <typeinfo>
#include <iostream>
#include <type_traits>

template<typename T>
void function1(typename std::enable_if<std::is_floating_point<T>::value, T>::type &t)
{
	std::cout << typeid(t).name() << std::endl;
}
template<typename T>
void function1(typename std::enable_if<std::is_integral<T>::value, T>::type &t)
{
	std::cout << typeid(t).name() << std::endl;
}
int main()
{
	float k = 0.8;
	int a = 10;
	function1<float>(k);
	function1<int>(a);
	system("pause");
	return 0;
}