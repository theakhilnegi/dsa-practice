#include<bits/stdc++.h>
using namespace std;
const int m=4,n=4;
//TC->O(cXr)
int histogram(int a[],int n){
    stack <int> s;
    int res=0;
    for (int i = 0; i < n; i++)
    {
        while(s.empty()==false&&a[s.top()]>=a[i]){
            int tp = s.top();
            s.pop();
            int curr = a[tp]*(s.empty()?i:(i-s.top()-1));
            res=max(res,curr);
        }
        s.push(i);
    }
    while(s.empty()==false){
        int tp = s.top();
        s.pop();
        int curr = a[tp]*(s.empty()?n:(n-s.top()-1));
        res=max(res,curr);
    }
    return res;
}

int func(int a[][n]){
    int res=histogram(a[0],n);
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i][j]==1){
                a[i][j]=a[i][j]+a[i-1][j];
            }
        }
        res=max(res,histogram(a[i],n));
    }
    return res;
}

int main(){
    int a[m][n]= {{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    cout<<"Array is: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<func(a);
    return 0;
}