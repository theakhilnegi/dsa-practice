#include <iostream>
using namespace std;

//Iterative method
int funcI(int a[], int n, int item){
    int l=0,h=n-1;
    while(l<=h){
    int mid=(l+h)/2;
        if(a[mid]==item){
            return mid;
        }
        if(a[mid]>item){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    return -1; 
}

//recursive method
int funcR(int a[],int l, int h, int item){
    if(l>h){
        return -1;
    }
    int mid=(l+h)/2;
    if(a[mid]==item){
        return mid;
    }
    if(a[mid]>item){
        return funcR(a,l,mid-1,item);
    }else{
        return funcR(a,mid+1,h,item);
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
    int item;
    cout<<"Enter search item: ";
    cin>>item;
    // cout<<funcI(a,n,item);
    cout<<funcR(a,0,n,item);
    return 0;
}