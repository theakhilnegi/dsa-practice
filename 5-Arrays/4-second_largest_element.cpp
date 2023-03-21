#include <iostream>
using namespace std;

//Naive method
int funcN(int a[],int n){
    int index=0;
    for (int i = 1; i < n; i++)
    {
        if(a[index]<a[i]){
            index=i;
        }
    } 
    int flag=index,temp=0;
    for (int i = 0; i < n; i++) 
    {
        if(a[flag]==a[i]){
            continue;
        }
        if(temp==0){
            index=i;
            temp=1;
        }
        if(a[index]<a[i]){
            index=i; 
        }
    }
    if(index==flag){
        return -1;
    }
    return index;
}

//Optimised method
int funcO(int a[],int n){
    int res=-1,largest=0;
    for (int i = 1; i < n; i++)
    {
        if(a[i]>a[largest]){
            res=largest;
            largest=i;
        }
        else if(a[i] != a[largest]){
            if(res==-1 || a[i]>a[res]){
                res=i;
            }
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
    cout<<"Second largest element is: "<<a[funcO(a,n)]<<" and index is: "<<funcO(a,n);
    return 0;
}