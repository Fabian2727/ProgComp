#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;


int main(){
	
	int n, t, a;
	cin>>n;
	
	vector<int> num (2*n+1);
	
	for(int i = 0; i<2*n+1; i++)
	{
		num[i] = i+1;
	}
	
	vector<int> vt;
	vector<int> va;
	
	for (int i = 0; i<2*n+2; i++)
	{
		int index = 0;
		if (num.size()>0)
		{
			index = rand()%num.size();
			vt.push_back(num[index]);
			
			int val = num[index];
			
			cout << val <<endl;
			
			num.erase(remove(num.begin(), num.end(), val), num.end());

			cin>>val;
			
			if(find(num.begin(), num.end(), val) != num.end())
			{
				va.push_back(num[index]);
				num.erase(remove(num.begin(), num.end(), val), num.end());
			}
		}
	}
	
}
