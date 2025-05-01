#include <bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int nGames, nOutput=0;
    std::string sGames, sOutput;std::cin>>nGames>>sGames;
    while(nGames--){
    	nOutput+=(sGames[nGames]=='A')? 1:-1;
    }
    sOutput=(nOutput>0)? "Anton" : (nOutput<0)? "Danik" : "Friendship";
    std::cout<<sOutput;
}