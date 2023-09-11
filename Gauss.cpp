#include <iostream>
using namespace std;

const int N = 3;

void gauss(double mat[N][N+1])
{
	
	cout<<"MATRIZ INICIAL: "<<endl;
	for (int i = 0; i<N; i++)
	{
		for (int j = 0; j<N+1; j++)
		{
			cout<<mat[i][j]<<"	";
		}
		cout<<endl;
	}
	
	for(int i = 0; i <= N-1; i++)
	 {	  
		  for(int j = i + 1; j <= N; j++)
		  {
			   double ratio = mat[j][i] / mat[i][i];

			   for(int k = 0; k <= N + 1; k++)
			   {
			  		mat[j][k] = mat[j][k] - ratio * mat[i][k];
			   }
		  }
	 }
	
	cout<<"ELIMINACION GAUSSIANA: "<<endl;
	for (int i = 0; i<N; i++)
	{
		for (int j = 0; j<N+1; j++)
		{
			cout<<mat[i][j]<<"	";
		}
		cout<<endl;
	}

}

int main(){
	
	double mat[N][N+1] = {	{1,1,1,9},
							{2,-3,4,13},
							{3,4,5,40}
						};
	gauss(mat);
	
}
