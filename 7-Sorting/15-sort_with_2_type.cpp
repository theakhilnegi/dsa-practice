#include <iostream>
using namespace std;
 
//Segregate positive and negative
int func1(int a[], int n){
    int l=0,h=n-1;
    int pivot =0;
    int i=l-1;
    for (int j = l; j <= h-1; j++)
    {
        if(a[j]<pivot){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}

//Segregate even and odd
int func2(int a[], int n){
    int l=0,h=n-1;
    int i=l-1;
    for (int j = l; j <= h-1; j++)
    {
        if(a[j]%2==0){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}

//Segregate zero and one
int func3(int a[], int n){
    int l=0,h=n-1;
    int i=l-1;
    for (int j = l; j <= h-1; j++)
    {
        if(a[j]==0){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
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
    func3(a,n);
    cout<<endl;
    cout<<"Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}