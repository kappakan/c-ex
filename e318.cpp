﻿#include "pch.h"
#include <iostream>
#include <exception>

// 3: function that compares two C-style strings lexicographically,
// returns -1 if s1 < s2, 0 if s1 == s2, 1 if s1 > s2. Not stdlib functions,
// no subscripting

int cstring_compare(const char* s1, const char* s2) {
	if (s1 == 0 || s2 == 0) std::cerr << "Nullptr" << std::endl;
	for (int i = 0; *(s1 + i); ++i) {
		if (*(s1 + i) == 0 && *(s2 + i) || *(s1 + i) < *(s2 + i)) return -1;

		if (*(s2 + i) == 0 && *(s1 + i) || *(s1 + i) > *(s2 + i)) return 1;
	}

	return 0;
}
int main()
{
 try{
	char cstr_x[6];
	char cstr_y[6];
	while (std::cin >> cstr_x >> cstr_y) 
	{
		int cmp = cstring_compare(cstr_x, cstr_y);
		if (cmp == -1)
			std::cout << cstr_x << " < " << cstr_y << std::endl;
		if (cmp == 0)
			std::cout << cstr_x << " == " << cstr_y << std::endl;
		if (cmp == 1)
			std::cout << cstr_x << " > " << cstr_y << std::endl;
		}
	}
catch (std::exception& e) {
	std::cerr << "exception: " << e.what() << std::endl;
}
catch (...) {
	std::cerr << "exception\n";
}
}

