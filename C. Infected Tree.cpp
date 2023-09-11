#include <iostream>
#include <vector>
//https://www.youtube.com/watch?v=4UDkhWx05-0
using namespace std;

vector <long long> adj;
vector <long long> save;
vector <long long> sub;

void dfs(long long p, long long v)
{
	save[v] = 1;
	sub[v] = 0;
	if (adj.size() == 1 && p != 0)
	{
		return;
	}
	
	long long saves = 0, temp = - mod;
}

int main()
{
	long long n; cin>>n;
}
