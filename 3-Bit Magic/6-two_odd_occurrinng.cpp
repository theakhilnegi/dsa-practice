#include <iostream>
using namespace std;

// Naive method
int funcN(int a[], int n){
    for (int i = 0; i < n; i++){
        int ans=0;
        for (int j = 0; j < n; j++)
        {
            if(a[i]==a[j]){
                ans++;
            }
        }
        if(ans%2!=0){
            cout<<a[i]<<"   ";
        }
    }
    return 0;
}

// Optimised method
// add appearing method
void funcO(int a[], int n){
    int XOR = 0, res1= 0,res2=0;
    for (int i = 0; i < n; i++)
    {
        XOR = XOR^a[i];
    }
    int sn = (XOR&(~(XOR-1)));      //this is done to get last set digit place
    for (int i = 0; i < n; i++)
    {
        if((a[i]&sn)!=0){
            res1=res1^a[i];
        }else{
            res2 = res2^a[i];
        }
    }
    cout<<res1<<"   "<<res2;
}

int main(){
    int a[]={3,4,3,4,5,4,4,6,7,7};
    int n=sizeof(a)/sizeof(a[0]);
    funcO(a,n);
    return 0;
}