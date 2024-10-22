//
// Created by jules on 22/10/2024.
//

#include <iostream>
#include "Span.hpp"

#include <iostream>
#include "Span.hpp"

int main() {
	Span sp(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	try {
		sp.addNumber(19);
	} catch (const std::out_of_range &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

	std::set<int> moreNumbers = {1, 2, 3};
	Span sp2(7);
	sp2.addNumbers(moreNumbers.begin(), moreNumbers.end());

	sp2.addNumber(10);
	sp2.addNumber(20);

	std::cout << "Shortest Span (sp2): " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest Span (sp2): " << sp2.longestSpan() << std::endl;

	return (0);
}
