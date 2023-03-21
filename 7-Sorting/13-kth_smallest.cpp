#include <iostream>
using namespace std;

int partition(int a[], int l, int h){
    int pivot=a[h], i=l-1;
    for (int j = l; j <= h-1; j++)
    {
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}

int func(int a[], int l,int h, int k){
    if(l<=h){
        int temp=partition(a,l,h);
        if(temp==k-1){
            return a[temp];
        }
        if(temp>k-1){
            func(a,l,temp-1,k);
        }else{
            func(a,temp+1,h,k);
        }
    }
}

int main(){
    cout<<"Enter N: ";
    int n,k;
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
    cout<<"Enter k: ";
    cin>>k;
    cout<<"-->"<<func(a,0,n-1,k);
    return 0;
}