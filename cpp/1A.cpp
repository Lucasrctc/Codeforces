#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double n, m, a;
	long long int ans = 0;
	cin >> n >> m >> a;
	ans = ceil(n/a) * ceil(m/a);
	cout<<ans;
	return 0;
}

