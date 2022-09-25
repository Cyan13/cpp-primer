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
        res = g < 60 ? scores[0] : scores[(g - 50) / 10];
        res += (g == 100 || g < 60) ? "" : (g % 10 > 7) ? "+" : (g % 10 < 3) ? "-" : "";
        cout << res << endl;
    }

    return 0;
}
