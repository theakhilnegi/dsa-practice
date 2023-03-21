#include <iostream>
using namespace std;

//Naive method
void funcN(int a[], int n, int x){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if((a[j]+a[i])==x){
                cout<<a[i]<<" "<<a[j];
                return;
            }
        }
    }
    cout<<"Not found";
    return;
}

//optimised method
void funcO(int a[], int n, int x){
    int left=0,right=n-1;
    while(left<right){
        if((a[left]+a[right])==x){
            cout<<a[left]<<" "<<a[right];
            return;
        }
        if((a[left]+a[right])>x){
            right--;
        }else{
            left++;
        } 
    }
    cout<<"Not found";
    return;
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
    cout<<"Enter X: ";
    cin>>x;
    funcO(a,n,x);
    return 0;
}