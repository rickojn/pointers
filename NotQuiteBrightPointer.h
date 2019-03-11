#pragma once
#pragma once
#include <iostream>
template <class T>
class NotQuiteBrightPointer {

private:
	T * _ptr;
	bool _isACopy;

public: NotQuiteBrightPointer() {
	std::cout << "NQB default constructor called " << this << "\n";
}

		NotQuiteBrightPointer(T * ptr) {
			_ptr = ptr;
			_isACopy = false;
		}

		NotQuiteBrightPointer(NotQuiteBrightPointer& rhs) {
			_ptr = rhs._ptr;
			_isACopy = true;
			std::cout << "NBQ copy constructor called " << this << "\n";
		}

		~NotQuiteBrightPointer() {
			if (!_isACopy) {
				delete _ptr;
			}
		}

		T  operator *() {
			return *_ptr;
		}

		T * operator->() {
			return _ptr;
		}

		NotQuiteBrightPointer& operator= (NotQuiteBrightPointer that) { 
			_ptr = that._ptr;
			_isACopy = that._isACopy;
			return * this; 
		}

		NotQuiteBrightPointer& operator= (T * rawPtr) {
			_ptr = rawPtr;
			return *this;
		}

		T * getRawPointer() {
			return _ptr;
		}

};
