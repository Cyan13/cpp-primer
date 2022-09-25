#include <forward_list>
#include <iostream>

using namespace std;

int main(){
    forward_list<int> fl = {1, 2, 3, 4, 5, 6, 7, 8};

    auto pre = fl.before_begin();
    auto cur = fl.begin();

    while (cur != fl.end())
        if (*cur & 1)
            cur = fl.erase_after(pre);
        else pre = cur ++ ;

    for (cur = fl.begin(); cur != fl.end(); cur ++ )
        cout << *cur << " ";

    return 0;
}
