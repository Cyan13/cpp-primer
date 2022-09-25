#include <iostream>
#include <vector>

using std::cout;
using std::vector;

bool isPrefix(vector<int> const& v1, vector<int> const& v2){
    if(v1.size() > v2.size())
        return isPrefix(v1, v2);
    for(int i = 0; i != v1.size(); ++i)
        if(v1[i] != v2[i])
            return false;
    return true;
}

int main(){
    vector<int> v1{ 0, 1, 1, 2 };
    vector<int> v2{ 0, 1, 1, 2, 3, 5, 8 };
    cout << (isPrefix(v1, v2) ? "yes" : "no");

    return 0;
}
