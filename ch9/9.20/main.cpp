#include <iostream>
#include <list>
#include <deque>
#include <vector>

using namespace std;

int main(){
    list<int> ilist = {1, 2, 3, 4, 5, 6, 7, 8};
    deque<int> odd, even;

    for (auto iter = ilist.cbegin(); iter != ilist.cend(); iter++ )
        if (*iter & 1)
            odd.push_back(*iter);
        else
            even.push_back(*iter);

    cout << "odd" << endl;
    for (auto iter = odd.cbegin(); iter != odd.cend(); iter++ )
        cout << *iter << ' ';
    cout << endl;

    cout << "even" << endl;
    for (auto iter = even.cbegin(); iter != even.cend(); iter++ )
        cout << *iter << " ";
    cout << endl;

    return 0;
}
