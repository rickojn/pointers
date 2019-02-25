#pragma once

class IntPointer {

private:
	int * _ptr;
	bool _isInOriginalFunction;

public: IntPointer() {}

		IntPointer(int * ptr) {
			_ptr = ptr;
			_isInOriginalFunction = true;
		}

		IntPointer(IntPointer& rhs) {
			_ptr = rhs._ptr;
			_isInOriginalFunction = false;
		}

		~IntPointer() {
			if (_isInOriginalFunction) {
				delete _ptr;
			}
		}

		int  operator *() {
			return *_ptr;
		}

};
