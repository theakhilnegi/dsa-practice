#include <iostream>
using namespace std;

// my method but TC-> O(N3)
int func(int a[], int n){
    int sum=a[0];
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp=0;
            for (int k = j; k < i+j; k++)
            {
                if(k>=n){
                    break;
                }
                temp=temp+a[k];
            }
            sum=max(sum,temp);
        }
    }
    return sum;
}

// GFG solution but not working right
// int func(int a[], int n){
//     int res=a[0],curr;
//     for (int i = 0; i < n; i++)
//     {
//         curr=0;
//         for (int j = i; j < n; j++)
//         {
//             curr=curr+a[i];
//         res=max(res,curr);
//         }
//     }
//     return res;
// }

// Optimised method     Standard kadane algorithm
int funcO(int a[], int n){
    int maxEnding=a[0],res=a[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding=max((maxEnding+a[i]),a[i]);
        res=max(res,maxEnding);
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
    cout<<"Max sum is: "<<funcO(a,n);
    return 0;
}