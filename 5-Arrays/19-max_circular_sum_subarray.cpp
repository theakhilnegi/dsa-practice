#include <iostream>
using namespace std;

//does not work on 2 aor 3 positive integers and gfg course
int nrmlMaxSum(int a[], int n){
    int res=a[0], maxEnding=a[0];
    for (int i = 0; i < n; i++)
    {
        maxEnding=max(a[i],maxEnding+a[i]);
        res = max(res,maxEnding);
    }
    return res;
}
int func(int a[], int n){
    int max_normal = nrmlMaxSum(a,n);
    if(max_normal<0){
        return max_normal;
    }
    int arr_sum=0;
    for (int i = 0; i < n; i++)
    {
        arr_sum=arr_sum+a[i];
        a[i] = -a[i];
    }
    int max_circular = arr_sum+nrmlMaxSum(a,n);
    return max(max_normal,max_circular);
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
    cout<<"Max sum is: "<<func(a,n);
    return 0;
}