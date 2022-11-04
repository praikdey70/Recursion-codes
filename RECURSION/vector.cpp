#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    for(int i=1;i<5;i++)
    {
        v.push_back(i);

        cout<<" size "<<v.size()<<" capacity "<<v.capacity()<<endl;
    }

    vector<int> v1(5);

    for(int i=0;i<5;i++)
    {
        v1[i]=i+5;
    }
    for(int i=0;i<5;i++)
    {
        cout<<v1[i]<<" ";
    }
    return 0;
}