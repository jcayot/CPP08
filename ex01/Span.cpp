//
// Created by jules on 22/10/2024.
//

#include "Span.hpp"

#include <stdexcept>

Span::Span(unsigned int N) : N(N), data(N) {
}

void Span::addNumber(int n) {
	if (data.size() >= N)
		throw std::overflow_error("N exceded");
	data.push_back(n);
}

int Span::shortestSpan() const {
}

int Span::longestSpan() const {
}
