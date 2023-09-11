#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

int main(){
	
	int t; cin>>t;
	
	while (t--)
	{
		int n,m; cin>>n>>m;
        
		ll ans=1e18;
        vector<ll>a(n);
        
		for(int i=0;i<n;i++) 
		{
			cin>>a[i];
		}
        
		vector<int> adj[n];
        
		for(int i=0;i<m;i++)
		{
            int u,v;
            cin>>u>>v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
            ans = min(ans, a[u] + a[v]);
        }
        if(m%2==0)
		{
            cout<<0<<endl;
            return 0;
        }
        for(int i = 0; i < n; i++)
		{
        	if(adj[i].size() % 2 == 1)
			{
            	ans = min(ans, a[i]);
            }
        }
        cout<<ans<<endl;
	}
}
