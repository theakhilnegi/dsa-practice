#include <iostream>
using namespace std;

int func(int a[],int l,int h,int n){
    if(l>h){
        return 0;
    }
    int mid=(l+h)/2; 
    if(a[mid]==1){
        if(a[mid]==a[mid-1]&&mid!=0){
            return func(a,l,mid-1,n);
        }else{
            return n-mid;
        }
    }
    return func(a,mid+1,h,n);
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
    cout<<func(a,0,n,n);
    return 0;
}