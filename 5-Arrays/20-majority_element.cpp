#include <iostream>
using namespace std;

// Naive method
int funcN(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        int sum=1;
        for (int j = i+1; j < n; j++)
        {
            if(a[i]==a[j]){
                sum++;
            }
        }
        if(sum>(n/2)){
            return i;
        } 
    }
    return -1;
}

//Optimised method      moore voting algorithm
int funcO(int a[], int n){
    //First phase -> tell the mejority element
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
    //Second phase -> tell whether an element is majority or not
    count=0;
    for (int i = 0; i < n; i++)
    {
        if(a[res]==a[i]){
            count++;
        }
    }
    if(count>n/2){
        return res;
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
    cout<<funcN(a,n);
    return 0;
}