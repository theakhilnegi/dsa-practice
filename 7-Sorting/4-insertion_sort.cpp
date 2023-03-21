#include <iostream>
using namespace std;

int func(int a[], int n){\
    int flag=0;
    for (int i = 1; i < n; i++)
    {
        int key=a[i];
    int temp=i-1;
        while(key<a[temp]&&temp>=0){
            swap(a[temp+1],a[temp]);
            temp--;
        }
        a[temp+1]=key;
        flag++;
        cout<<flag<<" Pass: ";
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<"  ";
        }
        cout<<endl;
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
    cout<<endl;
    func(a,n);
    cout<<"Sorted Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
 
    return 0;
}