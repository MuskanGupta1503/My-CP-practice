#include <iostream>
using namespace std;
// void merge(int arr[],int low,int mid,int high)
// {
//     int b[100];
//     int i=low,j=mid+1,k=low;
//     while(i<=mid && j<=high)
//     {
//         if(arr[i]<arr[j])
//         {
//             b[k]=arr[i];
//             i++;
//         }
//         else
//         {
//             b[k]=arr[j];
//             j++;
//         }
//         k++;
//     }
//     if(i>mid)
//     {
//         while(j<=high)
//         {
//             b[k]=arr[j];
//             k++;
//             j++;
//         }
//     }
//     else
//     {
//         while(i<=mid)
//         {
//             b[k]=arr[i];
//             i++;
//             k++;
//         }
//     }
//     for(int l=low;l<=high;l++)
//     {
//         arr[l]=b[l];
//     }
// }
// void mergeSort(int arr[],int n,int low,int high)
// {
//     if(low<high)
//     {
//         int mid=(low+high)/2;
//         mergeSort(arr,n,low,mid);
//         mergeSort(arr,n,mid+1,high);
//         merge(arr,low,mid,high);
//     }
// }

void InsertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key=arr[i];
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}


int main() 
{
    int arr[]={2,6,1,23,11,81,19,42,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
    return 0;
}