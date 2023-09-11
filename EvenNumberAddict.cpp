#include <iostream>
#define ll long long
using namespace std;

int main(){
	
	int t; cin>>t;
	
	while (t--)
	{
		long long n;
		cin>> n;
		
		long long dp[n];
		
		for (int i = 0; i<n; i++)
		{
			cin>>dp[i];
		}
		
		ll mov=(n/2);
 
        if(n%2!=0) mov++;
 
        ll now=mov;
 
        ll even=0, odd=0;
 
        for(ll i=0;i<n;i++)
        {
            if(dp[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
 
        ll f=0;
 
        while(1)
        {
            if(now < 0)
            {
                cout<<"Bob";
 
                cout<<endl;
 
                f=1;
            }
 
            if(f==1) break;
 
            ll val1=now+now-1;
 
            ll val2=mov-now+mov-now;
 
            if(even>=val1 && odd>=val2)
            {
                cout<<"Alice";
 
                cout<<endl;
 
                f=1;
            }
 
            if(f==1) break;
 
            val1=now+now;
 
            val2=mov-now+mov-now-1;
 
            if(even>=val1 && odd>=val2)
            {
                cout<<"Alice";
 
                cout<<endl;
 
                f=1;
            }
 
            if(f==1) break;
 
            now=now-2;
		}
	}
	
	
	
}
