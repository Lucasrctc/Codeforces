#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
	int n, l, x, left, right;
	priority_queue<int, vector<int>, greater<int>> a;
	cin >> n >> l;

	for(int i=0; i < n; ++i)
	{
		cin >> x;
		a.push(x);
	}

	left = a.top();

	double prev = 0, maxdist = 0;

	while(!a.empty())
	{
		int elem = a.top();
		a.pop();
		maxdist = max(maxdist, abs(elem - prev));
		prev = elem;
	}
	right = l - prev;

	cout<<fixed<<max(maxdist/2.0, 1.0*max(left, right));

	return 0;
}

