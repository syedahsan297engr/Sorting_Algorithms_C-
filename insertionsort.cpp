#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
void insertion_sort(int A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        while (A[i - 1] > A[i] && i > 0)
        {
            int x = A[i - 1];
            A[i - 1] = A[i];
            A[i] = x;
            i--;
        }
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
    insertion_sort(arr, SIZE);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    // Print the elapsed time in seconds
    cout << endl << "Elapsed time: " << duration.count() << " microseconds" << endl;
    return 0;
}