#include<iostream>
using namespace std;

bool issafe(int** arr,int x,int y,int n)
{
    if(x<n && y<n && arr[x][y]==1 )
    {
        return true;
    }
    return false;
}

bool ratinmaze(int** arr,int x ,int y,int n,int** solarr)
{
    if(x==n-1 && y==n-1)
    {
        solarr[x][y]=1;
        return true;
    }
    if(issafe(arr,x,y,n))
    {
        solarr[x][y]=1;
        if(ratinmaze(arr,x+1,y,n,solarr))
        {
            return true;
        }
        if(ratinmaze(arr,x,y+1,n,solarr))
        {
            return true;
        }
        solarr=0;
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;

    int ** arr=new int*[n];
    for(int i=0;i<n;i++)
    {in for)
        arr[i]=new int[n];
    }

    for(int i=0;i<n;i++)
    {
        cout<<endl;
    }
    return 0;
}