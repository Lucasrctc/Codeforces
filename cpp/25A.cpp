#include <iostream>

using namespace std;

int main(){
	int n, x;
	cin >> n;

	int evendiff = 0;
	int index = 0, evenindex[] = {0, 0};

	for(int i=0; i < n; ++i)
	{
		cin >> x;
		if (x % 2 == 1)
			evendiff -= 1;
		else
			evendiff += 1;
		if (evendiff > 0 and x%2 == 1)
		{
			index = i + 1;
			break;
		}
		if (evendiff < 0 and x%2 == 0)
		{
			index = i + 1;
			break;
		}
		if (evenindex[x%2] == 0)
			evenindex[x%2] = i + 1;
	}
	if(evenindex[0]*evenindex[1] != 0)
		index = evenindex[evendiff>0?1:0];

	cout<<index;

	return 0;
}

