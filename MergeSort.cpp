//Sorting Algorithm -> MergeSort

#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for(int i = 0; i < n1; i++)
        L[i] = arr[l + i];
        
    for(int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    
    int i = 0;
    int j = 0;
    int k = l;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[], int l, int r)     // l for left and r for right
{
    if(l >= r)
        return;
    int m = (l+r-1)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Given Array is: ";
    printArray(arr,size);

    mergeSort(arr,0,size-1);
    
    cout<<"Sorted Array is: ";
    printArray(arr,size);
    
    return 0;
}