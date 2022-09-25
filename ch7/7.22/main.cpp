#include <string>
#include <iostream>

using std::string;

class Person {
    friend std::istream &read(std::istream &is, Person &person);
    friend std::ostream &print(std::ostream &os, const Person &person);

public:
    Person() = default;
    Person(const string sname, const string saddr):name(sname), address(saddr){ }
    Person(std::istream &is){ read(is, *this); }

    string getName() const { return name; }
    string getAddress() const { return address; }
private:
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
