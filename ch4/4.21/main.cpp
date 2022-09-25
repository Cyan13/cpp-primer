#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};

	for(auto &i : vec){
		if(i & 0x1)
            cout << (i * 2) << endl;
        else
            cout << i << endl;
	}
	return 0;
}
