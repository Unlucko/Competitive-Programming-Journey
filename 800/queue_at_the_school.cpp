#include <bits/stdc++.h>
using namespace std;

void swap(std::string &SQueue, int NIndex){
	char temp=SQueue[NIndex];
	SQueue[NIndex]=SQueue[NIndex+1];
	SQueue[NIndex+1]=temp;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    std::string SQueue;
    short int NCount, NTime;
    std::cin >> NCount >> NTime;
    std::cin >> SQueue;
    for(int i=0; i < NTime; i++){
    	for(int j=0; j < NCount-1; j++){if((SQueue[j]=='B')&&(SQueue[j+1]=='G')){swap(SQueue,j);j+=1;}}
    }
    std::cout << SQueue;
    return 0;
}