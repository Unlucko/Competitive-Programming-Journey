#include <bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    short int nCount=0;
    std::string sNumb;std::cin>>sNumb;
    for(char c: sNumb){
    	if((c=='4')||(c=='7')){
    		nCount+=1;
    	}
    }
    if((nCount==4)||(nCount==7)){std::cout<<"YES";return 0;}
    std::cout<<"NO";
    return 0;
}