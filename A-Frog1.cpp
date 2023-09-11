#include <iostream>
using namespace std;

int main(){
	
	int N = 100000;
	
	long long h[N];
	long long dp[N];
	
	int n; cin>>n;
	
	for (long long i = 1; i <= n; i++) 
	{
        cin >> h[i];
    }
 
    dp[1] = 0;
    dp[2] = abs(h[2]-h[1]);
    
	for (long long i = 2; i <= n; i++) 
	{
        long long t1 = abs(h[i]-h[i-2]);
        long long t2 = abs(h[i]-h[i-1]);
        t1 = t1 + dp[i-2];
        t2 = t2 + dp[i-1];
        dp[i] = min(t1, t2);
    }
 
    cout<<dp[n];	

}
