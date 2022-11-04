#include<iostream>
using namespace std;

void destination(int src,int dest)
{
    cout<< "source  " <<src<< "destination" << dest <<endl;
    if(src==dest)
    {
        cout<<"pahuch gaye"<<endl;
        return;
    }
    src++;
    destination(src,dest);
}

int main()
{
    int src,dest;
    cin>>src>>dest;

    destination(src,dest);

    return 0;
}