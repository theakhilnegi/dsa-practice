#include <iostream>
using namespace std;

int partition(int a[], int l, int h){
    int pivot = a[l], i=l-1, j=h+1;
    while(true){
        do{
            i++;
        }while(a[i]<pivot);
        
        do{
            j--;
        }while(a[j]>pivot);
        if(i>=j){
            return j;
        }
        swap(a[i],a[j]);
    }
} 

void qsort(int a[], int l, int h){
    if(l<h){
        int p=partition(a,l,h);
        qsort(a,l,p);
        qsort(a,p+1,h);
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
    qsort(a,0,n-1);
    cout<<"Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}