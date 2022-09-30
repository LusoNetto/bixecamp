#include <bits/stdc++.h>
using namespace std;
int main()
{
	int v[100005], unicos[100005];
	int n, qt = 0;
	cin >> n;
	for(int i = 0; i < n; i ++)
	{
		int vi;
		cin >> vi;
		bool apareceu = false;
		for(int j = 0; j < qt; j++)
		{
			if(unicos[j] == vi)
			{
				apareceu = true;
				break;
			}
		}
		if(!apareceu)
		{
			unicos[qt] = vi;
			qt = qt + 1;
		}
	}
	cout << qt << endl;
}
