#include <iostream>
using namespace std;
int n, i, j, V[1001];
bool swapd;
int main()
{
	cin >> n;
	for (i = 1; i <= n; ++i)
		cin >> V[i];
	for (i = 1; i <= n - 1; ++i)
	{
		swapd = false;
		for (j = 1; j <= n - 1; ++j)
			if (V[j] > V[j + 1])
			{
				swap(V[j], V[j + 1]);
				swapd = true;
			}
		if (swapd == false)
			break;
	}
	for (i = 1; i <= n; ++i)
		cout << V[i] << " ";
	return 0;
}
