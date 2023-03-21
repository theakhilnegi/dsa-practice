#include <bits/stdc++.h>
using namespace std;

void func(vector<int> a[], int m){
    if(m==1){
        for (int i = 0; i < a[0].size(); i++)
        {
            cout<<a[0][i]<<" ";
        }
        return;
    }
    if(a[0].size()==1){
        for (int i = 0; i < m; i++)
        {
            cout<<a[i][0]<<" ";
        }
        return;
    }
    int i=0;
    for (int j = 0; j < a[i].size(); j++)
    {
        cout<<a[i][j]<<" ";
    }
    for (i = 1; i < m; i++)
    {
        cout<<a[i][(a[i].size()-1)]<<" ";
    }
    i=m-1;
    for (int j = (a[i].size()-2); j >= 0; j--)
    {
        cout<<a[i][j]<<" ";
    }
    for (int i = m-2; i > 0; i--)
    {
        cout<<a[i][0]<<" ";
    }
}

int main(){
    int m=4,n=1;
    vector<int> a[m];
    int count=1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i].push_back(count);
            count++;
        }
    }
    func(a,m);
    return 0;
}