#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
	short int Ncount, Nnum=0;
	std::cin >> Ncount;
	short int Aps[Ncount], Aqs[Ncount];
	for(int i=0; i < Ncount; i++) {std::cin >> Aps[i]; std::cin >> Aqs[i];}
	
	while(Ncount--) {Nnum += (std::abs(Aps[Ncount]-Aqs[Ncount])>=2)? 1: 0;}
	std::cout << Nnum;
}

