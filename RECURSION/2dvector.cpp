#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v;

    vector<int> v1;
    for(int i=0;i<5;i++)
    {
        v1.push_back(i+1);
    }

    v.push_back(v1);
    v.push_back(v1);

    int rows=v.size();
    int cols=v[0].size();

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cou
    }

}