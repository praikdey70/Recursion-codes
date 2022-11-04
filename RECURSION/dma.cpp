#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;
    int* aptr=&a;

    int** aptr_ptr=&aptr;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;
    cout<<aptr_ptr<<endl;
    cout<<*aptr_ptr<<endl;

    return 0;

}