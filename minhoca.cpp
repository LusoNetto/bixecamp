#include <bits/stdc++.h>
using namespace std;
const int N = 102;
const int M = 102;
int c[N][M];
int main()
{
	int m, n;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> c[i][j];
		}
	}
	int maior = 0;
	for(int i = 0; i < n; i++)
	{
		int soma = 0;
		for(int j = 0; j < m; j++)
		{
			soma += c[i][j];
		}
		if(soma > maior)
		{
			maior = soma;
		}
	}
	for(int j = 0; j < m; j++)
	{
		int soma = 0;
		for(int i = 0; i < n; i++)
		{
			soma += c[i][j];
		}
		if(soma > maior)
		{
			maior = soma;
		}
	}
	cout << maior << endl;
}
