#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while (t--)
	{
		int n;
		cin>>n;
		
		vector<int> pts (3,0); // Creacion vector tamaño 3, valores iniciales 0
		string word;
		vector <vector <string>> table (3);
		map<string, int> m; // Creacion map, contenido valores string e integer
		
		for (int i = 0; i<3; i++)
		{
			for (int j = 0; j<n; j++)
			{
				cin>>word;
				table[i].push_back(word);
				m[word]++;
			}
		}
		
		for (int i = 0; i<3; i++)
		{
			for (string x:table[i])
			{
				if (m[x] == 1)
				{
					pts[i] += 3;
				}
				else if (m[x] == 2)
				{
					pts[i] += 1;
				}
				
			}
		}
		cout << pts[0] << " " << pts[1] << " " << pts[2] << endl;
	}
	
/*	
	
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<n; j++)
		{
			cout << table [i][j] << "	";
		}
		cout << endl;
	}
*/	
}
