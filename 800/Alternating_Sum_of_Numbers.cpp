#include <iostream>
using namespace std;

int main() {
	short int Tc,l,s=1;
	cin >> Tc;
	int res = 0;
	while(Tc--){
		cin >> l;
		int a;
		for(int i=0;i<l;i++){
			cin >> a;
			res += a*s; 
			s *= -1;
		}
		cout << res << "\n";
		res = 0;
		s =1;
	}
	return 0;
}
