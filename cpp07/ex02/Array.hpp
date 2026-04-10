/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 01:58:49 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/10 14:32:26 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T* 				_data;
		unsigned int	_size;
		
	public:
		Array() : _data(NULL), _size(0) {}
		Array(unsigned int n) : _size(n) { _data = new T[_size](); }
		Array(const Array& obj) : _size(obj._size)
		{
			_data = new T[_size];
			for (int i = 0; i < _size; i++)
				_data[i] = obj._data[i];
		}
		Array&	operator=(const Array& obj)
		{
			if (this != &obj)
			{
				delete [] _data;
				_size = obj._size;
				_data = new T[_size];
				for (int i = 0; i < _size; i++)
					_data[i] = obj._data[i];
			}
			return (*this);
		}
		~Array() { delete[] _data; }

		T& operator[](unsigned int index)
		{
			if (index >= _size)
				throw std::exception();
			return (_data[index]);
		}

		const T& operator[](unsigned int index) const
		{
			if (index >= _size)
				throw std::exception();
			return (_data[index]);
		}
		unsigned int	size()
		{
			return (_size);
		}
};

#endif