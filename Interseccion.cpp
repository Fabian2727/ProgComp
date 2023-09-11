#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	int r1, r2, a1, a2, aux1, aux2, tam, cont;
	
	cin>>r1>>r2>>a1>>a2;
	
	aux1 = max(r1,r2);
	aux2 = max(a1,a2);
	tam = max(aux1,aux2);
	cont = 0;
	
	vector<int> vec(tam);
	
	for (int i = 0; i < tam; i++)
	{
		vec[i] = 0;
	}
	
	for (int i = r1; i < r2; i++)
	{
		vec[i] = 1;
	}
	for (int i = a1; i < a2; i++)
	{
		if (vec[i] != 1)
		{
			vec[i] = 2;
		}
		else
		{
			vec[i] = 3;
		}
	}
	
	for (int i = 0; i<tam; i++)
	{
		if (vec[i] == 3)
		{
			cont++;
		}
	}
		
	cout<<cont;
	
}
