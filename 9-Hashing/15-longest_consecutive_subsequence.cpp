#include<bits/stdc++.h>
using namespace std;

//using array
int funcA(int a[], int n){
    sort(a,a+n);
    int res=1, curr=1;
    for (int i = 1; i < n; i++)
    {
        while(a[i]==a[i-1]){
            i++;
        }
        if(a[i]==a[i-1]+1){
            curr++;
        }else{
            res=max(res,curr);
            curr=1;
        }
    }
    res=max(res,curr);
    return res;
}

//using unorded list
int funcU(int a[], int n){
    unordered_set<int> s(a,a+n);
    int res=1, curr=1;
    for (int i = 0; i < n; i++)
    {
        while(s.find(a[i]+curr)!=s.end()){
            curr++;
        }
        res=max(res,curr);
        curr=1;
    }
    return res;
}

int main(){
    cout<<"Enter N: ";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" number: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    cout<<funcU(a,n);
    return 0;
}