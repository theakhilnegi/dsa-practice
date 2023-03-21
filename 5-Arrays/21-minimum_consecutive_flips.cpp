#include <iostream>
using namespace std;

//By me
void funcM(int a[], int n){
    int count0=0, count1=0;
    if(a[0]==0){
        count0++;
    }else{
        count1++;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]!=a[i+1]){
            if(a[i+1]==0){
                count0++;
            }else{
                count1++;
            }
        }
    }
    if(count1>count0){
        for (int i = 0; i < n; i++)
        {
            if(a[i]==0){
                cout<<"From "<<i;
                while(a[i]==0&&i<n){
                    i++;
                }
                cout<<" to "<<i-1<<endl;
            }
        }
    }else{
        for (int i = 0; i < n; i++)
        {
            if(a[i]==1){
                cout<<"From "<<i;
                while(a[i]==1&&i<n){
                    i++;
                }
                cout<<" to "<<i-1<<endl;
            }
        }
    }
    return;
}

// by gfg
void funcG(int a[], int n){
    for (int i = 1; i < n; i++)
    {
        if(a[i]!=a[i-1]){
            if(a[i]!=a[0]){
                cout<<"From "<<i<<" to ";
            }
            else{
                cout<<(i-1)<<endl;
            }
        }
    }
    if(a[n-1]!=a[0]){
        cout<<(n-1)<<endl;
    }
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
    funcG(a,n);
    return 0;
}