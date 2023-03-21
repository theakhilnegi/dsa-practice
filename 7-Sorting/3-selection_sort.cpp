#include <iostream>
using namespace std;

// Naive method
int funcN(int a[], int n){
    int temp[n], flag=0;
    for (int i = 0; i < n; i++)
    {
        int min_ind=0;
        for (int j = 1; j < n; j++)
        {
            if(a[j]<a[min_ind]){
                min_ind=j;
            }
        }
        flag++;
        temp[i]=a[min_ind];
        a[min_ind]=INT16_MAX;
        cout<<flag<<" Pass: ";
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<"  ";
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        a[i]=temp[i];
    }
    return 0;
}

//Optimised method
int funcO(int a[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int min_ind = i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<a[min_ind]){
                min_ind=j;
            }
        }
        swap(a[min_ind],a[i]);
    }
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
    funcO(a,n);
    cout<<"Sorted Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}