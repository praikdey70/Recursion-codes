#include<iostream>
using namespace std;

int main()
{
    int a=10;

    int* aptr=&a;

    int** aptr_ptr=&aptr;

    cout<<"a"<<" "<<a<<endl;
    cout<<"a"<<&a<<endl;
    cout<<"a"<<aptr<<endl;
    cout<<"a"<<*aptr<<endl;

    return 0;
}