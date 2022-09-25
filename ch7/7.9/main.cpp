#include <string>
#include <iostream>
using std::string;

struct Person{
    string const& getName() const { return name; }
    string const& getAddress() const { return address; }
    string name;
    string address;
};

std::istream &read(std::istream &is, Person &person){
    return is >> person.name >> person.address;
}

std::ostream &print(std::ostream &os, const Person &person){
    return os << person.name << " " << person.address;
}
