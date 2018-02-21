#include <iostream>
#include <string>

using namespace std;

class Poop {
public:
	int log;
	string shiz;
	Poop() {
		log = 10;
		shiz = "slop";
	}

};

int main() {
	/*Poop* pointer;
	pointer = new Poop();
	cout << pointer->log << endl;
	Poop crap;
	cout << crap.log << endl;
	cout << crap.shiz << endl;*/

	int poop = 7;
	int* ptr = &poop;
	cout << ptr << " " << *ptr << endl;
	*ptr = 8;
	cout << ptr << " " << *ptr << endl;
	
	return 0;
}