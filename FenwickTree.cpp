# include <iostream>
# include <bits/stdc++.h>
using namespace std ;


int fenwick [100];
int getSum ( int index )
{
	int sum = 0;
	while (index >0) 
	{
		sum += fenwick [ index ];
		index -= index & ( - index );
	}
	return sum;
}

void updateBIT ( int n, int index , int val )
{
	index = index + 1;
	while ( index <= n)
	{
		fenwick [ index ] += val ;
		index += index & ( - index );
	}
}
bool constructBITree (int arr [] , int n)
{
	for (int i =1; i <=n; i ++)
		fenwick [i] = 0;
	for (int i =0; i<n; i++)
		updateBIT (n, i, arr [i]) ;
	for (int i =1; i <=n; i ++)
		cout << fenwick [i] << " " ;
	cout << endl ;
	return true ;
}
int main ()
{
	int arr [] = {1 ,2 ,3 ,4 ,5 ,6 ,7};
	int n = sizeof ( arr )/ sizeof ( arr [0]) ;
	cout << " Arbol de sumas: ";
	constructBITree (arr , n) ;
	cout << " Suma de los elementos del 1 al 5 " << getSum (5) <<endl ;
	arr [3] += 10;
	updateBIT (n, 3, 10) ; // Update BIT for above change in arr []
	cout << " Suma de los elementos del 1 al 6 " << getSum (6) <<endl ;
	return 0;
}

