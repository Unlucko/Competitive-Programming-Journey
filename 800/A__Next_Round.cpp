#include <bits/stdc++.h> 
using namespace std;

int main() {
	int numP, kP, tot=0;
	cin >> numP >> kP;
	int scores[numP];
	for(int i=0;i<numP;i++){
		cin >> scores[i];
	}
	for (int i=0; i<numP; i++){
		if ((scores[i] >= scores[kP-1])&&(scores[i]>0)){
			tot++;
		}
	}
	
	cout << tot;
	return 0;
}
