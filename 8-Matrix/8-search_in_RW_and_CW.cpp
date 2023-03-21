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

void func(vector<int> a[], int m, int k){
    int row=m-1;
    for (int i = 0; i < m; i++)
    {
        if(k<=a[i][0]){
            row=i-1;
            break;
        }
    }
    for (int i = 0; i < a[row].size(); i++)
    {
        if(a[row][i]==k){
            cout<<"Found at "<<row<<","<<i;
            return;
        }
    }
    cout<<"Item not found";
}

int main(){
    int m=4,n=4,k;
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
    print(a,m);
    cout<<endl;
    cout<<"Enter item: ";
    cin>>k;
    func(a,m,k);
    return 0;
}