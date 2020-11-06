#include <iostream>
using namespace std;
int n, i, j, V[1001], poz;
int main()
{
	cin >> n;
	for (i = 1; i <= n; ++i)
		cin >> V[i];
	for (i = 1; i <= n - 1; ++i)
	{
		poz = i;
		for (j = i + 1; j <= n; ++j)
			if (V[poz] > V[j])
				poz = j;
		if (poz != i)
			swap(V[i], V[poz]);
	}
	for (i = 1; i <= n; ++i)
		cout << V[i] << " ";
	return 0;
}
