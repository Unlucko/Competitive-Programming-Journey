/*
When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible. This time the coordinator had chosen some problem and asked n
 people about their opinions. Each person answered whether this problem is easy or hard.

If at least one of these n
 people has answered that the problem is hard, the coordinator decides to change the problem. For the given responses, check if the problem is easy enough.

Input
The first line contains a single integer n
 (1≤n≤100) — the number of people who were asked to give their opinions.

The second line contains n
 integers, each integer is either 0
 or 1
. If i-th integer is 0, then i-th person thinks that the problem is easy; if it is 1, then i-th person thinks that the problem is hard.

Output
Print one word: "EASY" if the problem is easy according to all responses, or "HARD" if there is at least one person who thinks the problem is hard.

You may print every letter in any register: "EASY", "easy", "EaSY" and "eAsY" all will be processed correctly.
*/

#include <iostream>
using namespace std;

int main() {
	short int count;
	bool ith_diff;
	std::cin >> count;
	while(count--) {
		std::cin >> ith_diff; 
		if(ith_diff == 1) {std::cout << "HARD"; return 0;}
	}
	std::cout << "EASY"; return 0;
}


/*
The solution is pretty straight forward, you just to need the first one to say a problem is hard, complexity O(n) but since 
the test cases don't exceed 100 it's almost constant O(1)
*/
