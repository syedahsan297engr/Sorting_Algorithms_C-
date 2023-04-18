#include <iostream>
using namespace std;
#include <cmath>
#include <time.h>

void bubbleSort(int SIZE, int arr1[])
{
	for (int i = 0; i < SIZE; i++) 
	{
       
		// loop to control number of comparisons per pass
		for (size_t j = 0; j < SIZE - 1; ++j) 
		{
			// compare adjacent elements and swap them if first
			// element is greater than second element
			if (arr1[j] > arr1[j + 1])  // Swap variables
			{
				int hold = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = hold;
                
			}
		}
        
	}
    cout<<endl;
    for (size_t i = 0; i < SIZE; i++)
    {
        cout<<"a["<<i<<"]= "<<arr1[i]<<endl;
    }
    
    return;
}


int main()
{
    int SIZE;
    cout<<"Enter the size of array you want"<<endl;
    cin>>SIZE;
    int arr[SIZE];
    for (size_t i = 0; i < SIZE; i++)
    {
        cout<<"arr ["<<i<<"]= ";
        cin>>arr[i];
    }
    
    cout<<endl<<"The sorted array is as:"<<endl;
    bubbleSort(SIZE, arr);
    return 0;

}

