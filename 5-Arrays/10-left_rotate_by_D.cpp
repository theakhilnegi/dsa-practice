#include <iostream>
using namespace std;

// Naive method     TC-> O(n*d)
int funcN(int a[],int n, int d){
    for (int i = 0; i < d; i++)
    {
        int flag=a[0];
        for (int i = 0; i < n; i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=flag;
    }
    return 0;
}

// Optimised    TC-> O(n)   AS->O(n)
int funcO1(int a[],int n,int d){
    int temp[n],count=0;
    for (int i = d; i < n; i++)
    {
        temp[count]=a[i];
        count++;
    }
    for (int i = 0; i < d; i++)
    {
        temp[count]=a[i];
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        a[i]=temp[i];
    }
    return 0;
}

//Optimised     TC->O(n)   AS->O(1)
void reverse(int a[],int low, int high){
    while(low<high){
        swap(a[low],a[high]);
        low++;
        high--;
    }
}
int funcO2(int a[],int n, int d){
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}

int main(){
    cout<<"Enter N: ";
    int n,d;
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" number: ";
    for (int i = 0; i < n; i++) 
    {
        cin>>a[i];
    }
    cout<<"Enter D: ";
    cin>>d;
    cout<<"Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    funcO2(a,n,d);
    cout<<"\nReverse array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}