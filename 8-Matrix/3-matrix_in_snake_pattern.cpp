#include <bits/stdc++.h>
using namespace std;

void func(vector<int> a[], int m){
    for (int i = 0; i < m; i++)
    {
        if(i%2==0){
            for (int j = 0; j < a[i].size(); j++)
            {
                cout<<a[i][j]<<" ";
            }
        }else{
            for (int j = (a[i].size()-1); j >= 0; j--)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
}

int main(){
    int m=3,n=4;
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