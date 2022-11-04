#include<iostream>
using namespace std;

int findpower(int x,int n )
{
    if(n==1){
        return 1;
    }
    int tempans= x * findpower(x,n-1);

    return tempans;
}
int main()
{
    int x=5,n=3;

    int ans=findpower(x,n);
    cout<<"ANS :"<<ans<<endl;
    return 0;
}