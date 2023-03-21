#include <iostream>
#include <cstdlib>
using namespace std;

long long int binary(long long int a[],long long int l,long long int h,long long int item){
    if(l>h){
        return -1;
    }
    int mid=(l+h)/2;
    if(a[mid]==item){
        return mid;
    }
    if(a[mid]>item){
        return binary(a,l,mid-1,item);
    }else{
        return binary(a,mid+1,h,item);
    }
}

long long int func(long long int a[], long long int n, long long int x){
    long long int low=0,high=2;
    while(true){
        if(x>=low&&x<=high){
            break;
        }else{
            low=high;
            high=(high*2);
        }
    }
    cout<<high<<" "<<low<<endl;
    return binary(a,low,high,x);
}


int main(){
    cout<<"Enter N: ";
    long long int n;
    cin>>n;
    long long int a[n];
    a[0]=1;
    cout<<"Enter "<<n<<" number: ";
    for (long long int i = 1; i < n; i++)
    {
        a[i]=a[i-1]+(rand()%10+1);
    }
    cout<<"Array is: ";
    for (long long int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    cout<<"Enter the number: ";
    long long int item;
    cin>>item;
    cout<<func(a,n,item);
    return 0;
}