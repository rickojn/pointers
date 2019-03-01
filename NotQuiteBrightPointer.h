#pragma once
#pragma once
template <class T>
class NotQuiteBrightPointer {

private:
	T * _ptr;
	bool _isACopy;

public: NotQuiteBrightPointer() {}

		NotQuiteBrightPointer(T * ptr) {
			_ptr = ptr;
			_isACopy = false;
		}

		NotQuiteBrightPointer(NotQuiteBrightPointer& rhs) {
			_ptr = rhs._ptr;
			_isACopy = true;
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

};
