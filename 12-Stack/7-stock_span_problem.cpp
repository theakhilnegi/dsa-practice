#include<bits/stdc++.h>
using namespace std;

//Naive method
void funcN(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int j = i; j >= 0; j--)
        {
            if(a[i]>=a[j]){
            count++;
            }else{
                break;
            }
        }
        cout<<count<<"  ";
    }
}

//optimised method
void funcO(int a[], int n){
    stack <int> s;
    s.push(0);
    cout<<1<<"  ";
    for (int i = 0; i < n; i++)
    {
        while(s.empty()==false&&a[s.top()]<=a[i]){
            s.pop();
        }
        int span = s.empty()?i+1:i-s.top();
        cout<<span<<"  ";
        s.push(i);
    }
    
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
    funcO(a,n);
    return 0;
}