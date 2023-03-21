#include <iostream>
using namespace std;

// Naive method
void funcN(int a[],int n){
    bool flag;
    for (int i = 0; i < n; i++)
    {   flag=true;
        for (int j = i+1; j < n; j++)
        {
            if(a[i]<=a[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<a[i]<<"  ";
        }
    }
    
    return;
}

//Optimised method
void funcO(int a[], int n){
    cout<<a[n-1]<<"  ";
    int ldr=a[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        if(a[i]>ldr){
            cout<<a[i]<<"  ";
            ldr=a[i];
        }       
    }
    return;
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