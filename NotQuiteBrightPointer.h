#pragma once
#pragma once
template <class T>
class NotQuiteBrightPointer {

private:
	T * _ptr;
	bool _isInOriginalFunction;

public: NotQuiteBrightPointer() {}

		NotQuiteBrightPointer(T * ptr) {
			_ptr = ptr;
			_isInOriginalFunction = true;
		}

		NotQuiteBrightPointer(NotQuiteBrightPointer& rhs) {
			_ptr = rhs._ptr;
			_isInOriginalFunction = false;
		}

		~NotQuiteBrightPointer() {
			if (_isInOriginalFunction) {
				delete _ptr;
			}
		}

		int  operator *() {
			return *_ptr;
		}

};
