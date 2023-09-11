#include <iostream>

using namespace std;

int firstMissingPositive(int arr[], int n)
{
    int nro = 0;
 
    // Check if 1 is present in array or not
    for (int i = 0; i < n; i++) 
	{
        if (arr[i] == 1) 
		{
            nro = 1;
            break;
        }
    }
 
    // If 1 is not present
    if (nro == 0)
        return 0;
 
    // Changing values to 1
    for (int i = 0; i < n; i++)
        if (arr[i] <= 0 || arr[i] > n)
            arr[i] = 1;
 
    // Updating indices according to values
    for (int i = 0; i < n; i++)
        arr[(arr[i] - 1) % n] += n;
 
    // Finding which index has value less than n
    for (int i = 0; i < n; i++)
        if (arr[i] <= n)
            return i + 1;
 
    // If array has values from 1 to n
    return n + 1;
}

int main(){
	
	int arr[] = {0, 3, 2, 6, 2, 1, 0, 0 };
    int n = 8;
 
    int ans = firstMissingPositive(arr, n);
 
    cout << ans;
 
    return 0;
}
