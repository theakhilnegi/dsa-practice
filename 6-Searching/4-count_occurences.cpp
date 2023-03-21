#include <iostream>
using namespace std;

int funcH(int a[],int l,int h,int n,int x){
    if(l>h){
        return -1;
    }
    int mid=(l+h)/2;
    if(a[mid]==x){
        if(a[mid]==a[mid+1]&&mid!=(n-1)){
            return funcH(a,mid+1,h,n,x);
        }else{
            return mid;
        }
    }
    if(a[mid]>x){
        return funcH(a,l,mid-1,n,x);
    }else{
        return funcH(a,mid+1,h,n,x); 
    }
}

int funcL(int a[],int l,int h,int x){
    if(l>h){
        return -1;
    }
    int mid=(l+h)/2;
    if(a[mid]==x){
        if(a[mid]==a[mid-1]&&mid!=0){
            return funcL(a,l,mid-1,x);
        }else{
            return mid;
        }
    }
    if(a[mid]>x){
        return funcL(a,l,mid-1,x);
    }else{
        return funcL(a,mid+1,h,x);
    }
}

int func(int a[], int n, int item){
    int l=funcL(a,0,n,item);
    int h=funcH(a,0,n,n,item);
    if(h<0){
        return 0;
    }
    return h-l+1;
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
    int item;
    cout<<"Enter item: ";
    cin>>item;
    cout<<func(a,n,item);
    return 0;
}