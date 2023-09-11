#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){

	int n;
	cin>> n;
	
	multiset<int> vec;
  int value;
	
	for (int i = 0; i<n; i++)
	{
    cin >> value;
    vec.insert(value); //Inserta y ordena el arreglo
	}
	
	int cont = 0;
	
	while (vec.size() > 1)
	{
		auto index = vec.begin();
		int j = (*index);
		index = vec.end();
		index--;
		int i = (*index);
		vec.erase(index); //Eliminando el máximo valor
		
		i = i % j;
		if (i != 0)
		{
			vec.insert(i);
		}
/*
    for (auto i : vec)
    {
      cout << i << "  ";    
    }
    cout << endl;
*/
		cont++;
	}
	
	cout << cont << endl;
	
	
}

