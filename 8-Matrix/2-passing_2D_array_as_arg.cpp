//there are several methods to push matrix to a function but not like int func(int a[m][n]), it does not work until we make m and n global variable

#include <bits/stdc++.h>
using namespace std;

void print(vector<int> a[], int m){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
}

int main(){
    int m=3,n=2;
    vector<int> a[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i].push_back(i);
        }
    }
    print(a,m);
    return 0;
}