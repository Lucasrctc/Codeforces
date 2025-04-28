#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	char prev = s[0];
	int count = 1;
	string ans = "NO";
	for (int i = 1; i < s.length(); ++i){
		count = prev==s[i]?count + 1:1;
		ans = count==7?"YES":ans;
		prev = s[i];
	}
	cout<<ans;
	return 0;
}

