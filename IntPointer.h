//#pragma once
//
//class NotQuiteBrightPointer {
//
//private:
//	int * _ptr;
//	bool _isInOriginalFunction;
//
//public: NotQuiteBrightPointer() {}
//
//		NotQuiteBrightPointer(int * ptr) {
//			_ptr = ptr;
//			_isInOriginalFunction = true;
//		}
//
//		NotQuiteBrightPointer(NotQuiteBrightPointer& rhs) {
//			_ptr = rhs._ptr;
//			_isInOriginalFunction = false;
//		}
//
//		~NotQuiteBrightPointer() {
//			if (_isInOriginalFunction) {
//				delete _ptr;
//			}
//		}
//
//		int  operator *() {
//			return *_ptr;
//		}
//
//};
