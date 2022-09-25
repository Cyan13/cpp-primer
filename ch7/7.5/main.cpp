#include <string>

using namespace std;

class Peron{
    string name;
    string address;

public:
    string get_name() const{
        return name;
    }
    string get_addr() const{
        return address;
    }
};
