#include <iostream>
using namespace std;

//method 1
int funcM1(int a[], int n){
    int res=0,temp=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==1){
            while(a[i]==1){
                temp++;
                if(i>=n){
                    break;
                }
                i++;
            }
        }
        res=max(res,temp);
        temp=0;
    }
    return res;
}

//method 2
int funcM2(int a[],int n){
    int res=0,curr=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0){
            curr=0;
        }else{
            curr++;
            res=max(res,curr);
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
    cout<<"No of 1s are: "<<funcM2(a,n);
    return 0;
}