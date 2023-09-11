#include <iostream>
using namespace std;
 
int main()
{
	long long n,k;
	cin>> n >> k;
 
 	long long a[n+1];
 	bool dp[k+1];
 	for (int i = 0; i<k+1; i++)
 	{
 		dp[i] = false;
	}
 
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	
	for(int i = 1; i <= k+1; i++) // Recorre los valores de 0 a k
	{
		for(int j = 1; j <= n; j++) // Recorre los valores del array A
		{
			if (i-a[j]<0) // Si la extracción de rocas da negativo
			{
				break;
			}
			if (dp[i-a[j]] == false) // Marcar los casos de victoria
			{
				dp[i] = true;
				break;
			}	
		}
	}
 
 	//Verifica el último valor del DP
	if (dp[k])
	{
		cout << "First";
	}
	else
	{
		cout << "Second";
	}
}
