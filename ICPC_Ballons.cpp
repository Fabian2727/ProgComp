#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
	
	int t; cin>>t;
	
	while (t--)
	{
		int n; cin>>n;
		map<char, bool> m; // Creacion map, contenido valores char e integer
		int ballons = 0;
		
		string s; cin>>s;
		if (s.size() != n)
		{
			return 0;
		}
		else
		{
			for (int i = 0; i<n; i++) 
			{
				if (m[s[i]])
				{
					ballons ++;
				}
				else
				{
					ballons = ballons +2;
					m[s[i]] = true;
				}
			}
			cout << ballons << endl;
		}
	}
}
