#include <iostream>
using namespace std;

int main() {
	int Tc,l,max=0;
	string path;
	cin>>Tc;
	while(Tc--){
		cin>>l>>path;
		for(int i=0;i<l;i++){
			if(path[i]=='@'){
				max += 1;
			}
			if((path[i+1]=='*')&&(path[i+2]=='*')){
				break;
			}
			
		}
		cout << max << "\n";
		max =0;
	}
	return 0;
}
