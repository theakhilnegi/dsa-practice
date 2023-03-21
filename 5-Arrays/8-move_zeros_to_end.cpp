#include <iostream>
using namespace std;

// Not properly working
// int func(int a[],int n){
//     int temp=n-1,flag;
//     for (int i = 0; i < n-1; i++)
//     {   
//         if(temp<i){
//             return 0;
//         }
//         if(a[i]==0){

//             flag=a[i];
//             a[i]=a[temp];
//             a[temp]=flag;
//             temp--;
//         }
//     }
//     return 0;
// }

// Naive method
int funcN(int a[], int n){
    int temp[n],count=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=0){
            temp[count]=a[i];
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(i<count){
            a[i]=temp[i];
        }else{
            a[i]=0;
        }
    }
    return 0;
}


//Optimised method
int funcO(int a[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=0){
            swap(a[i],a[count]);
            count++;
        }
    }
    return 0;
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
    funcO(a,n);
    cout<<"\nReverse array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}