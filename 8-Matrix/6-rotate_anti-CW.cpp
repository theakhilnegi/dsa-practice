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


void transpose(vector<int> a[], int m){
    for (int i = 0; i < m; i++)
    {
        for (int j = i+1; j < a[0].size(); j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
}

void func(vector<int> a[], int m){
    transpose(a,m);
    for (int i = 0; i < m/2; i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
            swap(a[i][j],a[a[0].size()-i-1][j]);
        }
    }
}

int main(){
    int m=3,n=3;
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
    print(a,m);
    return 0;
}