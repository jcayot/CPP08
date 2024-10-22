//
// Created by jules on 22/10/2024.
//

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

class ValueNotFoundException : public std::exception {
	public:
		const char* what() const noexcept override {
			return ("Number not found in the container");
		}
};

template <typename T>
typename T::iterator	easyfind(T& container, int number) {
	typename T::iterator	value = std::find(container.begin(), container.end(), number);

	if (value == container.end())
		throw ValueNotFoundException();

	return (value);
}

#endif
