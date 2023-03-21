#include <iostream>
using namespace std;

int func_delete(int arr[],int n,int x){
    int flag;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==x){
            flag=i;
            break;
        }
        if(i==(n-1)){
            return -1;
        }
    }
    for (int i = flag; i < n; i++)
    {
        arr[i]=arr[i+1];
    }
    return n-1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7,x;
    cout<<"Enter delete item: ";
    cin>>x;
    n=func_delete(arr,n,x);
    if(n==-1){
        cout<<"Item not found";
    }else{
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<"  ";
        }
        
    }
    return 0;
}