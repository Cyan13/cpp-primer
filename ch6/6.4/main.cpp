#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int fact(int i){
    if(i<13 && i != 0)
        return i > 1 ? i * fact(i - 1) : 1;
    return 0;
}

int main(){
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}
