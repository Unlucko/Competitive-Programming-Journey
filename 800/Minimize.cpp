#include <iostream>
using namespace std;

int main() {
	int Tc,a,b,min=100;
	cin >> Tc;
	while(Tc--){
		cin>>a>>b;
		for(int c=a;c<=b;c++){
			if(((c-a)+(b-c))<min){
				min = ((c-a)+(b-c));
			}
		}
		cout << min << "\n";
		min = 100;
	}
	return 0;
}
