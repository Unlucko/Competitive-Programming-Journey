#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int NCount, NNum=0;
	std::string SActMagnet="", SPasMagnet="";
	std::cin >> NCount;
	while(NCount--){std::cin>>SActMagnet; NNum += (SActMagnet==SPasMagnet)? 0:1; SPasMagnet=SActMagnet;}
	std::cout << NNum;
}

