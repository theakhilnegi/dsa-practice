#include <iostream>
using namespace std;

//----------For max sum of subarray of 3----------
//naive method
int funcN(int a[], int n, int k){
    int sum=0,temp=0;
    for (int i = 0; i < n-k+1; i++)
    {
        temp=0;
        for (int j = i; j < i+k; j++)
        {
            temp=temp+a[j];
        }
        sum=max(sum,temp);
    }
    return sum;
}
//optimised method
int funcO(int a[],int n, int k){
    int sum=0,temp=0;
    for (int i = 0; i < k; i++)
    {
        sum=sum+a[i];
    }
    temp=sum;
    for (int i = k; i < n; i++)
    {
        temp=temp+a[i];
        temp=temp-a[i-k];
        sum=max(sum,temp);
    }
    return sum;
}

//----------For unsorted subarray of non-negative integers with a given sum----------
bool func2(int a[], int n, int sum){
    int res=a[0],flag=0;
    for (int i = 1; i < n; i++)
    {
        if(res==sum){
            return true;
        }
        if(res<sum){
            res=res+a[i];
        }else{
            res=res-a[flag];
            i--;
            flag++;
        }
    }
    return false;
}

//----------N-bonacci Number, in fibo last 2 num but in n last n num sum-----------
void funcF(int n, int m){
    int sum=1,a[m-n],count=0,count2=0;
    for (int i = 0; i < n-1; i++)
    {
        cout<<0<<" ";
    }
    cout<<1<<" ";
    for (int i = n+1; i < m; i++)
    {
        if(i>(2*n)){
        int flag=sum-a[count2];
        count2++;
        cout<<flag<<" ";
        sum=sum+flag;
        }else{
        int flag=sum;
        cout<<flag<<" ";
        a[count]=flag;
        count++;
        sum=sum+flag;
        }
    }
    return;
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
    cout<<"Enter k or sum: ";
    cin>>k;
    cout<<"Sum is: "<<func2(a,n,k);
    // int m;
    // cin>>m;
    // funcF(n,m);
    return 0;
}