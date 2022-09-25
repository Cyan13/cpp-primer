#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::pair;

int main(){
    pair<string, int> maxCount;
    int c = 0;
    string str, prestr = "";
    while(cin >> str){
        if (str == prestr)
            c++;
        else
            c = 0;
        if(c > maxCount.second)
            maxCount = {prestr, c};
        prestr = str;
    }

    if(maxCount.first.empty())
        cout << "no duplicated string" << endl;
    else
        cout << maxCount.first << " occurred " << maxCount.second + 1 << " times" << endl;

    return 0;
}
