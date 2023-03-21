#include <iostream>
using namespace std;

int func(int a[], int n){
    int res=0, count=1;
    for (int i = 0; i < n; i++)
    {
        if(a[res]==a[i]){
            count++;
        }else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }
    count=0;
    for (int i = 0; i < n; i++)
    {
        if(a[res]==a[i]){
            count++;
        } 
    }
    if(count>n/2){
        return a[res];
    }
    return -1;
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
    cout<<func(a,n);
    return 0;
}