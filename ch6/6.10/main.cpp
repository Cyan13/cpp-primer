#include <iostream>
#include <string>

void swap(int* n1, int* n2){
	int tmp;
	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

int main(){
	for (int n1, n2; std::cin >> n1 >> n2;){
		swap(&n1, &n2);
		std::cout << n1 << " " << n2 << std::endl;
	}

	return 0;
}
