#include <iostream>
using namespace std;
#include <cmath>
#include <time.h>
#include <iterator>
#include <fstream>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <string.h>

void bubbleSort(int SIZE, int arr[])
{
    for (int i = 0; i < SIZE; i++)
    {
        // loop to control number of comparisons per pass
        for (size_t j = 0; j < SIZE - 1; ++j)
        {
            // compare adjacent elements and swap them if first
            // element is greater than second element
            if (arr[j] > arr[j + 1]) // Swap variables
            {
                int hold = arr[j]; // stoi(arr[j])
                arr[j] = arr[j + 1];
                arr[j + 1] = hold;
            }
        }
    }
    cout << endl;
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

void SelectionSort(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int iMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[iMin]) // 8 < 9
                iMin = j;
        }
        int temp = A[i]; // A[0]
        A[i] = A[iMin];  // A[0] = 8
        A[iMin] = temp;  // 8 = temp
    }
    cout << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

// From net
template <typename T>
int count_elements(std::istream &is)
{
    std::istream_iterator<T> start(is), end;
    return std::distance(start, end);
}
// from net

int main(int argc, char *argv[])
{
    clock_t start, middle, finish;
    start = clock();
    double Execution_Time;

    if (argc != 2)
    {
        cout << "Give input like this ---- program name txt file" << endl;
    }
    else
    {
        // time_t t = time(NULL);
        //  ctime_s(date_time, 50, &t);
        // char *date_time = ctime(&t);
        // cout << "[*] Today: " << date_time << endl;

        string st2;
        string st1[100];

        string inputfile = argv[1];
        std::ifstream in(inputfile);

        // iterator part
        std::ifstream is(inputfile);
        std::cout << "Number of numbers " << count_elements<double>(is) << std::endl;

        if (!in)
        {
            cout << "ERROR  --- Finding Files" << endl;
            system("Pause");
            exit(-1);
        }

        

        int Size = count_elements<double>(is);
        int arr[25];
        int count = 0;
        while (!in.eof())
        {
            in >> arr[count];
            count++;
        }
        int num;
        num = count;

        for (count = 0; count < num; count++)
        {
            cout << arr[count] << " ";
        }

        int choice;
        cout << "\n1 for Bubble and 2 for insertion" << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << endl
                 << "The sorted list acc. to bubble sort is as: " << endl;
            bubbleSort(count, arr);
            finish = clock();
            Execution_Time = (double(finish - start)) / CLOCKS_PER_SEC;
            cout << "[*] Time Taken: [" << Execution_Time << "]"
                 << " (seconds) to complete task";

        }

        if (choice == 2)
        {
            cout << endl
                 << "The sorted list acc. to selection sort is as: " << endl;
            SelectionSort(arr, count);
            finish = clock();
            Execution_Time = (double(finish - start)) / CLOCKS_PER_SEC;
            cout << "[*] Time Taken: [" << Execution_Time << "]"
                 << " (seconds) to complete task";
        }
    }
}
