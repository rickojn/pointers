#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person {
	string _firstName;
	string _lastName;
	// int age;

public:

	Person() {

	}

	Person(string firstName, string lastName) {
		_firstName = firstName;
		_lastName = lastName;
	}

	string getName() {
		return _firstName + " " + _lastName;
	}

	void setFirstName(string firstName) {
		_firstName = firstName;
	}

	void setLastName(string lastName) {
		_lastName = lastName;
	}

	void speak(string message);
};



