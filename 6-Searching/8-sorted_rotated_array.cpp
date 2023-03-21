#include <iostream>
using namespace std;

// my code-> dont work for simple sorted array
// int func(int a[], int n, int item){
//     int l=0,h=n-1;
//     int start=l,end=h,flag=-1;
//     while(true){
//     int mid=(l+h)/2;
//         if(a[mid]>a[start]){
//             l=mid+1;
//         }else{
//             if(a[mid]>a[mid-1]){
//             h=mid;
//             }else{
//                 flag=mid;
//                 break;
//             }
//         }
//     }
//     if(item>a[end]){
//         l=0;
//         h=flag-1;
//     }else{
//         l=flag;
//         h=end;
//     }
//     while(l<=h){
//     int mid=(l+h)/2;
//         if(a[mid]==item){
//             return mid;
//         }
//         if(a[mid]>item){
//             h=mid-1;
//         }else{
//             l=mid+1;
//         }
//     }
//     return -1; 
// }

int func(int a[], int n, int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]==x){
            return mid;
        }
        if(a[low]<a[mid]){
            if(x>=a[low]&&x<a[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        else{
            if(x>a[mid]&&x<=a[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }
    return -1;
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
    int item;
    cout<<"Enter the item: ";
    cin>>item;
    cout<<func(a,n,item);
    return 0;
}