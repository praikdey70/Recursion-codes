#include<iostream>
using namespace std;

bool issorted(int arr[100],int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    
    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        int remainingpart= issorted(arr + 1 ,size-1);
        return remainingpart;
    }
}

int main()
{
    int arr[100],size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    bool ans=issorted(arr,size);

    if(ans)
    {
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
}