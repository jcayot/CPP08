//
// Created by jules on 22/10/2024.
//

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <set>
#include <stdexcept>
#include <climits>

class Span {
	private:
		const unsigned int		N;
		std::multiset<int>		data;

	public:
		Span(unsigned int N);
		~Span();

		void	addNumber(int n);
		void	addNumbers(std::set<int>::iterator begin, std::set<int>::iterator end);
		int		shortestSpan() const;
		int		longestSpan() const;

	private:
		Span();
		Span(const Span &);

		Span &operator=(const Span &);
};



#endif //SPAN_HPP
