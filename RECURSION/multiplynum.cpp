#include<iostream>
using namespace std;

int multinum(int num1, int num2)
{
    int multiply=num1*num2;
    return multiply;
}

int main()
{
    int num1=5,num2=8;
    int ans=multinum(num1,num2);
    cout<<"ANS :"<<ans<<endl;
    return 0;
}