/*
Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.

Input
The only line contains an integer n (1 ≤ n ≤ 1018).

Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.

Output
Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).
*/

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

/*
EZ PEEZY count the number and comapare after
*/
