#include<bits/stdc++.h>
using namespace std;

//Naive method
void funcN(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = i-1; j >= 0; j--)
        {
            if(a[j]>a[i]){
                cout<<a[j]<<" ";
                break;
            }
        }
        if(j==-1){
            cout<<-1<<"  ";
        }
    }
}

//optimised method
void funcO(int a[], int n){
    stack <int> s;
    s.push(a[0]);
    cout<<-1<<"  ";
    for (int i = 1; i < n; i++)
    {
        while(s.empty()==false&&s.top()<a[i]){
            s.pop();
        }
        int span = s.empty()?-1:s.top();
        cout<<span<<"  ";
        s.push(a[i]);
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