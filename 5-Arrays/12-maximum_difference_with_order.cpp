#include <iostream>
using namespace std;

// Naive method
int funcN(int a[],int n){
    int diff=(a[1]-a[0]),temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            temp=a[j]-a[i];
            if(temp>diff){
                diff=temp;
            }
        } 
    }
    return diff;
}

//Optimised method
int funcO(int a[], int n){
    int res=a[1]-a[0], minval=a[0];
    for (int j = 0; j < n; j++)
    {
        res=max(res,a[j]-minval);
        minval=min(minval,a[j]);
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
    cout<<funcO(a,n);
    return 0;
}