#include <iostream>
using namespace std;

int main() {
	int M,N;
	cin >> M >> N;
	if((M % 2 == 1)&&(N % 2==1)){
		cout << (M*N-1)/2;
	}else{
		cout << (M*N)/2;
	}
	return 0;
}
