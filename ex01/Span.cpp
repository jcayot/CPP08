//
// Created by jules on 22/10/2024.
//

#include "Span.hpp"

Span::Span(unsigned int N) : N(N) {}

Span::~Span() {}

void Span::addNumber(int n) {
	if (data.size() >= N)
		throw std::out_of_range("N exceeded");
	data.insert(n);
}

void Span::addNumbers(std::set<int>::iterator begin, std::set<int>::iterator end) {
	for (std::set<int>::iterator it = begin; it != end; ++it) {
		addNumber(*it);
	}
}

int Span::shortestSpan() const {
	if (data.size() < 2)
		throw std::out_of_range("Data must contain at least two values");

	std::set<int>::iterator value = data.begin();
	int	previousValue = *value;
	int	smallestSpan = INT_MAX;

	for (++value; value != data.end(); ++value) {
		if (*value - previousValue < smallestSpan)
			smallestSpan = *value - previousValue;
		previousValue = *value;
	}
	return (smallestSpan);
}

int Span::longestSpan() const {
	if (data.size() < 2)
		throw std::out_of_range("Data must contain at least two values");

	return (*std::prev(data.end()) - *data.begin());
}
