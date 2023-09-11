#include <iostream>
#include <vector>
using namespace std;

//https://www.acwing.com/solution/content/127558/
//https://www.youtube.com/watch?v=2hedIDQDdP8

int main(){

	int n,m;
	cin>>n>>m;
	
	vector<int> x (n);
	vector<int> c (m);
	vector<int> y (m);
	
	for (int i = 0; i<n; i++)
	{
		cin>>x[i];
	}
	
	for (int i = 0; i<m; i++)
	{
		cin>>c[i];
		cin>>y[i];
	}
	
	bool cara = true;
	int cont = 0;
	int money = 0;
	int max = 0;
	
	while(n--)
	{
		if (cara)
		{
			cont++;
		}
		else
		{
			if (cont > max) { max = cont; }
			cont = 0;
			
		}
		
		for (int i = 0; i<m; i++)
		{
			if (cont == c[i])
			{
				money = money + y[i];
				cout<<money<<endl;
			}
		}
	}
	
	//cout<<money<<endl;
}

