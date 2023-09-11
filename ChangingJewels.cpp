#include <iostream>
using namespace std;

// Changing Jewels

int main(){
	
	int n, x, y;
	
	cin>>n>>x>>y;
	
	long long red = 1, blue = 0;
	
	while(--n)
	{
		blue += red * x;
		red += blue, blue *= y;
	}
	cout << blue << endl;
}
