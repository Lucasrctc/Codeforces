#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long int n;
	cin >> n;
	int s[5] = {0, 0, 0, 0, 0};
	for(int i=0; i<n; ++i){
		cin >> s[0];
		s[s[0]] += 1;//4 seaters dealt with
	}

	s[0] = s[3] < s[1]?s[3]:s[1];
	s[3] -= s[0];
	s[1] -= s[0];
	s[4] += s[0];//all 3 and 1 pairs done
	s[4] += s[3];//remaining 3 seaters have to go with a vacant seat

	s[4] += s[2]/2;//pair up pairs
	s[0] = s[2]%2;
	s[4] += s[0];//If pair is left over, they get a car

	s[1] -= s[1]>0?2*s[0]:0;//If 2 loners are left over, they go together with the pair
	if (s[1] > 0)
	{
		s[4] += s[1]>=4?s[1]/4:0; //Groups of 4 loners
		s[4] += s[1]%4?1:0; // Car with the rest
	}
	cout<<s[4];
	return 0;
}

