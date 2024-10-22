//
// Created by jules on 22/10/2024.
//

#include <iostream>
#include <list>
#include "easyfind.hpp"

int main() {
	std::vector<int> vec = {1, 2, 3, 4, 5};
	std::list<int> lst = {6, 7, 8, 9, 10};

	try {
		auto value = easyfind(vec, 3);
		std::cout << "Number found in vector at position: " << std::distance(vec.begin(), value) << std::endl;

		value = easyfind(vec, 6);
	} catch (const ValueNotFoundException& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		auto value = easyfind(lst, 9);
		std::cout << "Number found in list at position: " << std::distance(lst.begin(), value) << std::endl;

		value = easyfind(lst, 1);
	} catch (const ValueNotFoundException& e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}