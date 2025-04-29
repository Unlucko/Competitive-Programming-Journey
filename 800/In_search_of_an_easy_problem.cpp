#include <iostream>
using namespace std;

int main() {
	short int count;
	bool ith_diff;
	std::cin >> count;
	while(count--) {
		std::cin >> ith_diff; 
		if(ith_diff == 1) {std::cout << "HARD"; return 0;}
	}
	std::cout << "EASY"; return 0;
}

