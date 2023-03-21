#include <bits/stdc++.h>
using namespace std;

//given n range, find the maximum appearing element int the range
//the range should be within 1000
//not working properly
int func(int l[], int r[], int n){
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        arr[l[i]]++;
        arr[r[i]+1]--;
    }
    int maxm = arr[0], res=0;
    for (int i = 1; i < 1000; i++)
    {
        arr[i]+=arr[i-1];
        if(maxm<arr[i]){ 
            maxm=arr[i];
            res=i;
        }
    }
    return res;
}

int main(){ 
    cout<<"Enter N: ";
    int n;
    cin>>n;
    int l[n],r[n];
    cout<<"Enter l array "<<n<<" number: ";
    for (int i = 0; i < n; i++)  
    {
        cin>>l[i];
    }
    cout<<"L Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<l[i]<<"  ";
    }
    cout<<endl;
    cout<<"Enter r array "<<n<<" number: ";
    for (int i = 0; i < n; i++)  
    {
        cin>>r[i];
    }
    cout<<"R Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<r[i]<<"  ";
    }
    cout<<endl;
    cout<<"Most occuring element is: "<<func(l,r,n);
    return 0;
}