#include <iostream>
using namespace std;
int n, i, j, V[1001];
int main()
{
	cin >> n;
	for (i = 1; i <= n; ++i)
		cin >> V[i];
	for (i = 1; i <= n - 1; ++i)
		for (j = i + 1; j <= n; ++j)
			if (V[i] > V[j])
				swap(V[i], V[j]);
	for (i = 1; i <= n; ++i)
		cout << V[i] << " ";
	return 0;
}
