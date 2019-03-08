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

