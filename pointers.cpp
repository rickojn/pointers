// pluralsight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// #include "pch.h"
#include <iostream>
#include <stdio.h>
#include "person.h"
#include "NotQuiteBrightPointer.h"
#include <memory>

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include "Rectangle.h"

using namespace std;

void anotherFunction(NotQuiteBrightPointer <int> myPtr) {
	cout << "in another function my pointer is pointing to: " << *myPtr << "\n";
}

void tryMyPointer() {
	//int * p = new int(4);
	//NotQuiteBrightPointer <int> myPrt(new int(5));
	//NotQuiteBrightPointer <int> myPrt2 = myPrt;
	//cout << "my pointer is pointing to: " << *myPrt << "\n";
	//anotherFunction(myPrt);

	//Person * p2;
	//p2 = new Person("John", "Smith");
	//Person * p3 = p2;
	//cout << p2->getName() << "\n";

	//NotQuiteBrightPointer <Person> personPtr(new Person("Jack", "Smart"));
	//cout << personPtr->getName() << "\n";
	//delete p2;

	NotQuiteBrightPointer <Rectangle> pRect = new Rectangle(20, 3);

	/*Rectangle * pRect = new Rectangle(20, 30);*/
	cout << "rect len: " << pRect->getLength() << "\n";
}



int main()
{
	//int x = 4;
	//int * pInt = new int(4);
	//delete(pInt);
	// Person p1("Patrick", "O'Callaghan");
	//// p1.setFirstName("Richard");
	//// p1.setLastName("O'Callaghan");


	//unique_ptr<Person> p3(new Person("Jack", "Smart"));
	//unique_ptr<Person> p4(new Person("Joe", "Smart"));
	//cout << p1.getName();
	//p1.speak("hello");
	//cout << p2->getName();
	//cout << p3->getName();
	//delete p2;
	tryMyPointer();
	_CrtDumpMemoryLeaks();
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
