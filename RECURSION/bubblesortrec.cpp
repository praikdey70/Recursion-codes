#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    if(n==0)
    {
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    bubblesort(arr,n-1);
}
int main()
{
    int arr[]={31,75,28,88,1,56,34,23,9,32,65};
    int n= sizeof(arr)/sizeof(arr[0]);

    bubblesort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}