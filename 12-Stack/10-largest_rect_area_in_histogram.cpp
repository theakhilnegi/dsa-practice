#include<bits/stdc++.h>
using namespace std;

//Naive method
int funcN(int a[], int n){
    int res=0;
    for (int i = 0; i < n; i++)
    {
        int curr=a[i];
        for (int j = i-1; j >= 0; j--)
        {
            if(a[j]>=a[i]){
                curr+=a[i];
            }else{
                break;
            }
        }
        for (int j = i+1; j<n; j++)
        {
            if(a[j]>=a[i]){
                curr+=a[i];
            }else{
                break;
            }
        }
        res=max(res,curr);
    }
    return res;
}

//optimised method      TC->O(3n)    AS->O(3n)
int * prevSmallest(int a[], int n){
    stack <int> s;
    s.push(0);
    int *ans = new int[n];
    ans[0]=-1;
    for (int i = 1; i < n; i++)
    {
        while(s.empty()==false&&a[s.top()]>=a[i]){
            s.pop();
        }
        int span = s.empty()?-1:s.top();
        ans[i]=span;
        s.push(i);
    }
    return ans;
}
int* nextSmallest(int a[], int n){
    stack <int> s;
    s.push(n-1);
    int* ans = new int[n];
    for (int i = n-2; i >= 0; i--)
    {
        while(s.empty()==false&&a[s.top()]>=a[i]){
            s.pop();
        }
        int span = s.empty()?n:s.top();
        s.push(i);
        ans[i]=span;
    }
    ans[n-1]=n;
    return ans;
}
int funcO1(int a[], int n){
    int res = 0;
    int* ps = prevSmallest(a,n);
    int* ns = nextSmallest(a,n);
    for (int i=0;i<n;i++)
    {
        int curr = a[i];
        curr+=(i-ps[i]-1)*a[i];
        curr+=(ns[i]-i-1)*a[i];
        res= max(res,curr);
    }
    return res;
}

// More optimised method    TC->O(n)    AS->O(n)
int funcO2(int a[],int n){
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
    cout<<funcO2(a,n);
    return 0;
}