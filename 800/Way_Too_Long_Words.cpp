#include <bits/stdc++.h> 
using namespace std;

int main() {
	int num;
	cin >> num;
	while (num --){
		string word;
		cin >> word;
		if (word.length() > 10){
			char a = word[0];
			string ret;
			ret += a;
			string s = to_string(word.size()-2);
			ret += s;
			ret += word[word.length()-1];
			cout << ret << "\n";
		}else {
			cout << word << "\n";
		}
	}
}
