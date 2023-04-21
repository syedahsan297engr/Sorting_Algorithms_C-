#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void SelectionSort(int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        int iMin=i;
        for(int j=i+1 ;j<n;j++)
        {
            if(A[j] < A[iMin])   // 8 < 9
                iMin=j;     
        }
        int temp = A[i];    //A[0]
        A[i]=A[iMin];       // A[0] = 8
        A[iMin]=temp;      // 8 = temp
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
int main()
{
    int SIZE;
    cout << "Enter the size of array you want" << endl;
    cin >> SIZE;
    int arr[SIZE];
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << "arr [" << i << "]= ";
        cin >> arr[i];
    }

    cout << endl
         << "The sorted array is as:" << endl;
    auto start = high_resolution_clock::now();
    SelectionSort(arr, SIZE);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    // Print the elapsed time in seconds
    cout << endl << "Elapsed time: " << duration.count() << " microseconds" << endl;
    return 0;
}