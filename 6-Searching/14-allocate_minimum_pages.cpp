#include <iostream>
using namespace std;

// Naive method
int a_sum(int a[], int i, int j){
    int sum=0;
    for (int k = i; k <= j; k++)
    {
        sum=sum+a[k];
    }
    return sum;
}
int funcN(int a[], int n, int k){
    if(k==1){ 
        return a_sum(a,0,n-1);
    }
    if(n==1){
        return a[0];
    }
    int res=INT32_MAX;
    for (int i = 1; i < n; i++)
    {
        res=min(res,max(funcN(a,i,k-1),a_sum(a,i,n-1)));
    }
    return res;
}

//Optimised method      TC->O(n*log(sum-mx))
bool isFeasible(int a[],int n, int k, int ans){
    int req=1, sum=0;
    for (int i = 0; i < n; i++)
    {
        if(sum+a[i]>ans){
            req++;
            sum=a[i];
        }else{
            sum=sum+a[i];
        }
    }
    return (req<=k);
}
int funcO(int a[], int n, int k){ 
    int sum=0, mx=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
        mx=max(mx,a[i]);
    }
    int low=mx, high=sum, res=0;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(isFeasible(a,n,k,mid)){
            res=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return res;
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
    int k;
    cout<<"Enter K: ";
    cin>>k;
    cout<<funcO(a,n,k);
    return 0;
}