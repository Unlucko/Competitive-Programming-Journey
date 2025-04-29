/*
George has recently entered the BSUCP (Berland State University for Cool Programmers). George has a friend Alex who has also entered the university. Now they are moving into a dormitory.

George and Alex want to live in the same room. The dormitory has n rooms in total. At the moment the i-th room has pi people living in it and the room can accommodate qi people in total (pi ≤ qi). Your task is to count how many rooms has free place for both George and Alex.

Input
The first line contains a single integer n (1 ≤ n ≤ 100) — the number of rooms.

The i-th of the next n lines contains two integers pi and qi (0 ≤ pi ≤ qi ≤ 100) — the number of people who already live in the i-th room and the room's capacity.

Output
Print a single integer — the number of rooms where George and Alex can move in.
*/

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

/*
Just check for each element of both arrays at the same time if their difference is greater than 2 and sum one to a counter
*/
