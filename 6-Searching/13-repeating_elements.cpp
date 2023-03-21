#include <iostream>
using namespace std;

//by me
int func(int a[], int n){
    int res=a[0],sum=a[0];
    for (int i = 1; i < n; i++)
    {
        res=max(a[i],res);
        sum=sum+a[i];
    }
    int expected_sum=(res*(res+1)/2);
    cout<<sum<<" "<<expected_sum<<endl;
    int ans=(sum-expected_sum)/(n-res);
    return ans;
}

//by gfg
int findRepeating(int a[], int n){
    int slow=a[0], fast=a[0];
    do{
        slow=a[slow];
        fast=a[a[fast]];
    }while (slow!=fast);
    slow=a[0];
    while(slow!=fast){
        slow=a[slow];
        fast=a[fast];
    }
    return slow;
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
    cout<<func(a,n);
    return 0;
}