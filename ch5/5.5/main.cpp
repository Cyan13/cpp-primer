#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    vector<string> scores = { "F", "D", "C", "B", "A", "A+" };
    int g = 0;
    string res = "";
    while(cin >> g){
        if(g < 60){
            res = scores[0];
        }
        else{
            res = scores[(g - 50) / 10];
            if(g != 100){
                if(g % 10 > 7)
                    res += "+";
                else if(g % 10 < 3)
                    res += "-";
            }
        }
        cout << res << endl;
    }

    return 0;
}
