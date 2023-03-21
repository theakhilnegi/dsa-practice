#include <iostream>
using namespace std;

//using lomuto partition
int partition(int a[],int l, int h){
    int pivot = a[h], i=l-1;
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

void quick_sort(int a[], int l, int h){
    if(h>l){
        int p = partition(a,l,h);
        quick_sort(a,l,p-1);
        quick_sort(a,p+1,h);
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
    quick_sort(a,0,n-1);
    cout<<"Sorted Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}