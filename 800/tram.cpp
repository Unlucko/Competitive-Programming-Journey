#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    short int NCount, NIn, NOut;
    int NMax=0, NCurr=0;
    std::cin >> NCount;
    while(NCount--){
    	std::cin >>  NOut >> NIn;
    	NCurr-=NOut;
    	NCurr+=NIn;
    	NMax=(NCurr > NMax)? NCurr:NMax;
    }
    std::cout<<NMax;
}
