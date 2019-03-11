#pragma once
#include "NotQuiteBrightPointer.h"
#include <iostream>
class Rectangle
{

private:
	//int * _length;
	NotQuiteBrightPointer <int> _length;
	int _breadth;
public:
	Rectangle() {};
	Rectangle(int length, int breadth) {
		_length = new int(length); // overload = operator in nqb pointer to get this to work?
		_breadth = breadth;
		std::cout << "Rectangle int int " << this << "  ";
		std::cout << "_length " << &(this->_length) << "  ";
		std::cout << " _length raw pointer " << (this->_length.getRawPointer()) << "  ";

		std::cout << "\n";

	}

	Rectangle(NotQuiteBrightPointer <int> length, int breadth) {
		this->_length = length;
		_breadth = breadth;
		std::cout << "Rectangle NBQ <int> int " << this << "  ";
		std::cout << "_length " << &(this->_length);
		std::cout << "_length raw pointer " << (this->_length.getRawPointer()) << "  ";
		std::cout << "\n";

	}


	int getLength() {
		return *_length;
	}

	int getBreadth() {
		return _breadth;
	}

	~Rectangle() {
		std::cout << "im being destroyed!";
	};
};

