#include <iostream>
using namespace std;
int n, i, j, V[1001], aux;
int main()
{
	cin >> n;
	for (i = 1; i <= n; ++i)
		cin >> V[i];
	for (i = 2; i <= n; ++i)
	{
		aux = V[i];
		j = i - 1;
		while (j >= 1 && aux < V[j])
		{
			V[j + 1] = V[j];
			--j;
		}
		V[j + 1] = aux;
	}
	for (i = 1; i <= n; ++i)
		cout << V[i] << " ";
	return 0;
}
