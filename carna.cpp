#include <bits/stdc++.h>
using namespace std;
double s[10];
void selection_sort()
{
	for(int pos=0;pos<5;pos++)
	{
		double menorAteAgora = 100000000.;
		int indiceMenor;
		for(int i=pos; i<5;i++)
		{
			if(s[i] < menorAteAgora)
			{
				menorAteAgora = s[i];
				indiceMenor = i;
			}	
		}
		s[indiceMenor] = s[pos];
		s[pos] = menorAteAgora;
	}
}
int main()
{
	for(int a = 0; a<5; a++)
	{
		scanf("%lf", &s[a]);
	}
	selection_sort();
	int soma = 0;
	for(int a = 1; a<4; a++)
	{
		soma += s[a];
	}
	cout << soma << endl;
}
