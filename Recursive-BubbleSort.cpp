// Sorting Algorithm - Recursive BubbleSort

#include<iostream>
using namespace std;

void recursiveBubbleSort(int arr[], int n)
{
    if(n == 1)
        return;

    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
            swap(arr[i],arr[i+1]);
    }

    recursiveBubbleSort(arr,n-1);
}
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    recursiveBubbleSort(arr,n);
    cout<<"Sorted Recursive BubbleSort Array is: ";
    printArray(arr,n);
    return 0;
}