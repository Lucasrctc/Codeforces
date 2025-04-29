#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
	int n, t;
	cin >> n >> t;

	int a[n], b[n], best, aux;

	best = b[0] = 0;
	for(int i=0; i < n; ++i)
	{
		cin >> a[i];
		if (b[0] + a[i] < t and i == best)
		{
			b[0] += a[i];
			best += 1;
		}
	}

	aux = best;
	for(int i=1; i < n; ++i)
	{
		if (b[i-1] > 0)
		{
			b[i] = b[i-1] - a[i-1];
			aux -= 1;
		}
		else
			aux = 0;
		for(int j = i + aux - 1; j < n; ++j)
		{
			if (b[i] + a[j] < t and j >= i)
			{
				b[i] += a[j];
				aux += 1;
			}
		}
		best = max(aux, best);
		cout <<i <<" "<<aux<<" "<<best<<endl;
	}

	cout<<best;

	return 0;
}

