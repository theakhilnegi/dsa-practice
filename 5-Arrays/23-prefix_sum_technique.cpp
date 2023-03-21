#include <iostream>
using namespace std;
 
// gettinh sum between two index in O(1)
void func(int a[],int prefix_sum[],int n){
    int sum=a[0];
    prefix_sum[0]=sum;
    for (int i = 1; i < n; i++)
    {
        sum=sum+a[i];
        prefix_sum[i]=sum;
    }
    return;
}
 

//getting equilibrium point
bool funcQ(int a[], int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    int lsum=0;
    for (int i = 0; i < n; i++)
    {
        if(lsum==sum-a[i]){
            return true;
        }
        lsum=lsum+a[i];
        sum-=a[i];
    }
        return false;
}

int main(){ 
    cout<<"Enter N: ";
    int n;
    cin>>n;
    int a[n],prefix_sum[n];
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
    // func(a,prefix_sum,n);
    cout<<funcQ(a,n);
    // int x,y;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"Enter a,b: ";
    //     cin>>x>>y;
    //     cout<<"Ans is: "<<(prefix_sum[y]-prefix_sum[x]+a[x])<<endl;
    // }
    return 0;
} 