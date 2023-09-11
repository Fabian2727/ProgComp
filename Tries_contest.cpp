int main()
{
  int n, k;
  string winner;
  cin>>n>>k;
  while (n--)
  {
    string p; cin>>p;
    string temp = p;
    temp.erase(temp.end());
    struct Node * root = newNode();
    for (int i = 0; i < n; i++)
    {
      if(search(root,temp) && temp !="")
      {
        insert(root,p);
        winner = "First";
      }
      else if(search(root,temp) &&temp != "")
      {
        insert(root,p);
        winner = "Second";
      }
    }
  }
  cout << winner;
 
  return 0;
}
