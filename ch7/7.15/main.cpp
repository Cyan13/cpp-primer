#include <string>
#include <iostream>

struct Person;
std::istream &read(std::istream&, Person&);

using std::string;

struct Person{
	Person() = default;
	Person(const string& sname, const std::string& saddr) :name(sname), address(saddr) {}
	Person(std::istream &is) { read(is, *this); }

	string getName() const { return name; }
	string getAddress() const { return address; }
	string name;
	string address;
};

std::istream &read(std::istream &is, Person &person){
	is >> person.name >> person.address;
	return is;
}

std::ostream &print(std::ostream &os, const Person &person){
	os << person.name << " " << person.address;
	return os;
}
