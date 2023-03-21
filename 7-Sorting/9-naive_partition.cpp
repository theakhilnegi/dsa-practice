#include <iostream>
using namespace std;

//Naive method
int funcN(int a[], int n, int p){
    int flag=a[p];
    int temp[n],count=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<=flag){
            temp[count]=a[i];
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>flag){
            temp[count]=a[i];
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i]=temp[i];
    }
    return 0;
}

int main(){
    cout<<"Enter N: ";
    int n,p;
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
    cout<<"Enter p: ";
    cin>>p;
    funcN(a,n,p);
    cout<<"\nPartition array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}