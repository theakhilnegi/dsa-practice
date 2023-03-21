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

void func(vector<int> a[], int m){
    int left=0,right=a[0].size()-1,up=0,down=m-1;
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
    
    while(left<=right&&up<=down){
        int i=up;
        for (int j = left; j <= right; j++)
        {
            cout<<a[i][j]<<" ";
        }
        for (i = up+1; i <= down; i++)
        {
            cout<<a[i][right]<<" ";
        }
        i=down;
        for (int j = (right-1); j >= left; j--)
        {
            cout<<a[i][j]<<" ";
        }
        for (int i = down-1; i > up; i--)
        {
            cout<<a[i][left]<<" ";
        }
        left++;
        right--;
        up++;
        down--;
    }
}

int main(){
    int m=3,n=5;
    vector<int> a[m];
    // int count=1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int count;
            cin>>count;
            a[i].push_back(count);
            count++;
        }
    }
    print(a,m);
    cout<<endl;
    func(a,m);
    return 0;
}