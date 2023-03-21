#include <iostream>
using namespace std;

//Dutch national flag algorithm
//sort array of 0, 1, 2
void func1(int a[], int n){
    int l=0,mid=0,h=n-1;
    while(mid<=h){
        if(a[mid]==0){
            swap(a[mid],a[l]);
            l++;
            mid++;
        }
        else{
            if(a[mid]==1){
                mid++;
            }
            else{
                swap(a[mid],a[h]);
                h--;
            }
        }
    }
}

//three way partitioning
void func2(int a[], int n, int k){
    int l=0,mid=0,h=n-1;
    while(mid<=h){
        if(a[mid]<k){
            swap(a[mid],a[l]);
            l++;
            mid++;
        }
        else{
            if(a[mid]==k){
                mid++;
            }
            else{
                swap(a[mid],a[h]);
                h--;
            }
        }
    }
}

//partition around range
void func3(int a[], int n, int x, int y){
    int l=0,mid=0,h=n-1;
    while(mid<=h){
        if(a[mid]<x){
            swap(a[mid],a[l]);
            l++;
            mid++;
        }
        else{
            if(a[mid]>=x&&a[mid]<=y){
                mid++;
            }
            else{
                swap(a[mid],a[h]);
                h--;
            }
        }
    }
}
//10  5  6  3  20  9  40 
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
    func3(a,n,5,10);
    cout<<"Updated array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
        return 0;
}