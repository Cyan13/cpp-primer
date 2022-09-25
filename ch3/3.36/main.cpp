#include <iostream>
#include <vector>
#include <iterator>

using std::begin;
using std::end;
using std::cout;
using std::endl;
using std::vector;

// b array begin,e array end
bool compare(int* const b1, int* const e1, int* const b2, int* const e2)
{
    if ((e1 - b1) != (e2 - b2))
        return false;
    else{
        for (int* i = b1, *j = b2; (i != e1) && (j != e2); ++i, ++j)
            if (*i != *j)
                return false;
    }
    return true;
}

int main()
{
    int arr1[3] = { 0, 1, 2 };
    int arr2[3] = { 0, 1, 3 };

    if (compare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
        cout << "equal array" << endl;
    else
        cout << "unequal array" << endl;

    vector<int> vec1 = { 0, 1, 2 };
    vector<int> vec2 = { 0, 1, 5 };

    if (vec1 == vec2)
        cout << "equal vector" << endl;
    else
        cout << "unequal vector" << endl;

    return 0;
}
