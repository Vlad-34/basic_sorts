#include <iostream>
using namespace std;
int n, i, j, nr, V[1001], V2[1001], V3[1001];
int main()
{
	cin >> n;
	for (i = 1; i <= n; ++i)
		cin >> V[i];
	for (i = 1; i <= n; ++i)
	{
		nr = 0;
		for (j = 1; j <= n; ++j)
			if (V[i] > V[j])
				++nr;
		V2[i] = nr;
	}
	for (i = 1; i <= n; ++i)
		V3[V2[i] + 1] = V[i];
	for (i = 1; i <= n; ++i)
		cout << V3[i] << " ";
	return 0;
}
