#include <iostream>
using namespace std;
int n, m, i, j, k, V[1001], V2[1001], V3[1001];
int main()
{
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
		cin >> V[i];
	for (i = 1; i <= m; ++i)
		cin >> V2[i];
	i = j = k = 1;
	while (i <= n && j <= m)
	{

		if (V[i] < V2[j])
		{
			V3[k] = V[i];
			++i;
			++k;
		}
		else
		{
			V3[k] = V2[j];
			++j;
			++k;
		}
	}
	while (i <= n)
	{
		V3[k] = V[i];
		++i;
		++k;
	}
	while (j <= m)
	{
		V3[k] = V2[j];
		++j;
		++k;
	}
	for (i = 1; i <= n + m; ++i)
		cout << V3[i] << " ";
	return 0;
}