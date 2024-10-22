//
// Created by jules on 22/10/2024.
//

#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>


class Span {
	private:
		const unsigned int		N;
		std::vector<int>		data;

	public:
		Span(unsigned int N);
		~Span();

		void	addNumber(int n);
		int		shortestSpan() const;
		int		longestSpan() const;

	private:
		Span();
		Span(const Span &);

		Span &operator=(const Span &);
};



#endif //SPAN_HPP
