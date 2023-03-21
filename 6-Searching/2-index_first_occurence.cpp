#include <iostream>
using namespace std;

//recursive
int funcR(int a[],int l,int h,int x){
    if(l>h){
        return -1;
    }
    int mid=(l+h)/2;
    if(a[mid]==x){
        if(a[mid]==a[mid-1]&&mid!=0){
            return funcR(a,l,mid-1,x);
        }else{
            return mid;
        }
    }
    if(a[mid]>x){
        return funcR(a,l,mid-1,x);
    }else{
        return funcR(a,mid+1,h,x);
    }
}

//iterative
int funcI(int a[], int n, int item){
    int l=0,h=n-1;
    while(l<=h){
    int mid=(l+h)/2; 
        if(a[mid]==item){
        if(a[mid]==a[mid-1]&&mid!=0){
            h=mid-1;
            continue;
        }else{
            return mid;
        }
        }
        if(a[mid]>item){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    return -1; 
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
    int x;
    cout<<"Enter search element: ";
    cin>>x;
    // cout<<funcR(a,0,n,x);
    cout<<funcI(a,n,x);
    return 0;
}