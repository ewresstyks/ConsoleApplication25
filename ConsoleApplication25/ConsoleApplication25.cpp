#include <iostream>
#include <string>
using namespace std;


class Animal
{
protected:
	string name;
	string spacies;
	double weight;
	string continent;
public:
	Animal() = default;
	Animal(const char* _name, const char* king, const char* cont, double _wei) {
		name = _name;
		spacies = king;
		continent = cont;
		weight = _wei;
	}
	void Input() {
		cout << "Input name - ";
		cin >> name;

		cout << "Input kingdown - ";
		cin >> spacies;

		cout << "Input weight - ";
		cin >> weight;

		cout << "Input continent - ";
		cin >> continent;
	}
	void Print() {
		cout << "Name - " << name << endl << "Spacies - " << spacies << endl << "Weight - " << weight << endl << "Continent - " << continent << endl;
	}
	void Eat() {
		cout << "-";
	}
	void Sound() {
		cout << "-";
	}
};

class Elephant :public Animal {
public:
	Elephant() {}
	Elephant(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "YYYYYYYOOOOOOOO" << endl;
	}
	void Eat() {
		cout << "Elephants are YYYYYYYYYYYYYYYYYYYY" << endl;
	}
};

class Cat :public Animal {
public:
	Cat() {}
	Cat(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "MYAW-MYAW" << endl;
	}
	void Eat() {
		cout << "Cats are MURRRRRRRRR" << endl;
	}
};

class Dog :public Animal {
public:
	Dog() {}
	Dog(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "GAV GAV GAV" << endl;
	}
	void Eat() {
		cout << "Dogs are GAVAGAVGAV" << endl;
	}
};

class Parrot :public Animal {
public:
	Parrot() {}
	Parrot(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "CHIK CHIK CHIK" << endl;
	}
	void Eat() {
		cout << "Parrots are CHARRRRRRR" << endl;
	}
};






int main()
{
	setlocale(0, "ru");
	Elephant obj1("Indian elephant", "Elephant", "Asia", 6700);
	obj1.Print();
	obj1.Eat();
	obj1.Sound();

	Cat obj2("Koshka", "Cats", "Everywhere", 11);
	obj2.Print();
	obj2.Eat();
	obj2.Sound();
	cout << endl << endl;

	Dog obj3;
	obj3.Input();
	obj3.Print();
	obj3.Eat();
	obj3.Sound();
}