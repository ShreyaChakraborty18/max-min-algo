#include <iostream>
using namespace std;
 
void findMinAndMax(int arr[], int low, int high, int &min, int &max)
{
    
 
    if (low == high)                    
    {
        if (max < arr[low]) 
		{           
            max = arr[low];
        }
 
        if (min > arr[high]) 
		{          
            min = arr[high];
        }
 
        return;
    }
 

 
    if (high - low == 1)                
    {
        if (arr[low] < arr[high])       
        {
            if (min > arr[low]) 
			{       
                min = arr[low];
            }
 
            if (max < arr[high]) 
			{      
                max = arr[high];
            }
        }
        else {
            if (min > arr[high]) 
			{      
                min = arr[high];
            }
 
            if (max < arr[low]) 
			{      
                max = arr[low];
            }
        }
        return;
    }
 

    int mid = (low + high) / 2;
 

    findMinAndMax(arr, low, mid, min, max);
 

    findMinAndMax(arr, mid + 1, high, min, max);
}
 
int main()
{   int n, i;
	cout<<"Enter the number of data element in the array: ";
	cin>>n;
 
    int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
    int max = arr[0], min = arr[0];
 
    findMinAndMax(arr, 0, n - 1, min, max);
 
    cout << "The minimum array element is " << min << endl;
    cout << "The maximum array element is " << max;
 
    return 0;
}
