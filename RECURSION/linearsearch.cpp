#include<iostream>
using namespace std;

int linear(int arr[],int n,int x)
{
    if(n==0)
    {
        return false;
    }
    if(arr[0]==x)
    {
        return true;
    }
    else{
        bool remainingpart=linear(arr+1,n-1,x);
        return remainingpart;
    }
}

int main(){
    int arr[100],n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    bool ans= linear(arr,n,x);

    if(ans==1)
    {
        cout<<"Element found";
    }
    else{
        cout<<"absent";
    }
    return 0;
}