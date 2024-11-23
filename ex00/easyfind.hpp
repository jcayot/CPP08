//
// Created by jules on 22/10/2024.
//

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <list>
# include <vector>

template <typename T>
typename T::iterator	easyfind(T& container, int number) {
	typename T::iterator	value = std::find(container.begin(), container.end(), number);

	if (value == container.end())
		throw std::runtime_error("Number not found in the container");

	return (value);
}

#endif
