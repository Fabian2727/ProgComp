
int main()
{
    string str;
    int n,val;
    cin>>n;
    vector< pair<string,int> >v;
    multiset<int>ans;
    
	while(n--)
    {
        cin>>str;
        if(str=="insert") 
		{
			cin>>val;
			ans.insert(val);
			insert(val);
			v.emplace_back(make_pair(str,val));
		}
        else if(str=="removeMin")
        {
            auto it=ans.begin();
            if(it!=ans.end())
			{
            	ans.erase(it);
            	removeMin();
            }
            else 
			{
            	v.emplace_back(make_pair("insert",0));
            }
            v.emplace_back(make_pair(str,0));
        }
        else if(str=="getMin")
        {
            cin>>val;
            auto it=ans.begin();
            if(val==(*it)&&it!=ans.end())
            {
                v.emplace_back(make_pair(str,val));
                getMin(val);
            }
            else
            {
                while(!ans.empty())
                {
                	it=ans.begin();
                	if(val==(*it)||(val<(*it))) 
					{
						break;
					}
                	v.emplace_back(make_pair("removeMin",0));
                	ans.erase(it);
                	removeMin();
                }
                if(ans.empty())
                {
                    v.emplace_back(make_pair("insert",val));
                    ans.insert(val);
                    insert(val);
                }
                else if((val<(*it)))
                {
                    v.emplace_back(make_pair("insert",val));
                    ans.insert(val);
                    insert(val);
                }
                v.emplace_back(make_pair(str,val));
            }
        }
    }
    int sz = (int)v.size();
    cout<<sz<<endl;
    
	for(int i = 0; i < sz; i++)
    {
        if(v[i].first=="removeMin") 
		{
			cout<<"removeMin"<<endl;
		}
        else 
		{
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}
    }
}

