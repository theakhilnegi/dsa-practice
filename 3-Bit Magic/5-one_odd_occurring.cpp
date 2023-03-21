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
            return a[i];
        }
    }
    return 0;
}

// yet to make it perfect
// int func(int a[], int n){
//     int ans=0;
//     for (int i = 0; i < n-1; i++)
//     {   if(a[i]!=-1){
//         for (int j = i+1; j < n; j++)
//         {
//             if(a[i]==a[j]){
//                 a[j]=-1;
//                 break;
//             }
//             if(j==n-1){
//                 return a[i];
//             }
//         }
//     }
//     }
//     return ans;
// }

// Optimised method
int funcO(int a[], int n){
    int flag=a[0]^a[1];         //XOR of same num cancelout each other
    for (int i = 2; i < n; i++)
    {
        flag=flag^a[i];
    }
    return flag;
}

int main(){
    int a[]={4,4,4,4,5,7,5};        //the input array should have only one odd
    int n=sizeof(a)/sizeof(a[0]);
    cout<<funcO(a,n);
    return 0;
}


//--------------------------------------------------------
// Another ques
// #include <iostream>
// using namespace std;

// // Non-bitwise
// int funcN(int a[],int n){
//     int array_sum=0;
//     int sum=((n+1)*((n+1)+1))/2;
//     for (int i = 0; i < n; i++)
//     {
//         array_sum=array_sum+a[i];
//     }
//     return sum-array_sum;
// }

// // Bitwise
// int funcB(int a[],int n){
//     int array_sum=a[0]^a[1];
//     int sum=(1^2)^3;
//     for (int i = 2; i < n; i++)
//     {
//         array_sum=array_sum^a[i];
//         sum=sum^(i+2);
//     }
//     return sum^array_sum;
// }

// int main(){
//     int a[]={1,4,3};
//     int n = sizeof(a)/sizeof(a[0]);
//     cout<<funcB(a,n);
//     return 0;
// }