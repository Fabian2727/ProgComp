#include <iostream>
#include <vector>
using namespace std;

int main(){
  
  vector<string> mat(15);
  int r,c;
  
  cin>>r>>c;
  
  mat[0] = "bbbbbbbbbbbbbbb";
  mat[1] = "bwwwwwwwwwwwwwb";
  mat[2] = "bwbbbbbbbbbbbwb";
  mat[3] = "bwbwwwwwwwwwbwb";
  mat[4] = "bwbwbbbbbbbwbwb";
  mat[5] = "bwbwbwwwwwbwbwb";
  mat[6] = "bwbwbwbbbwbwbwb";
  mat[7] = "bwbwbwbwbwbwbwb";
  mat[8] = "bwbwbwbbbwbwbwb";
  mat[9] = "bwbwbwwwwwbwbwb";
  mat[10] ="bwbwbbbbbbbwbwb";
  mat[11] ="bwbwwwwwwwwwbwb";
  mat[12] ="bwbbbbbbbbbbbwb";
  mat[13] ="bwwwwwwwwwwwwwb";
  mat[14] ="bbbbbbbbbbbbbbb";
  
  if (mat[r-1][c-1] == 'b')
  {
  	cout<<"black"<<endl;
  }
  else
  {
  	cout<<"white"<<endl;
  }
}
