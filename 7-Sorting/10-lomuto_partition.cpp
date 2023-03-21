#include <iostream>
using namespace std;

//Lomuto partion algorithm
//we assume pivot is always last
int func(int a[], int l, int h){
    int pivot =a[h];
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
    cout<<"Pivot is: "<<func(a,0,n-1);
    cout<<"\nFinal Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    return 0;
}