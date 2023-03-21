#include <iostream>
using namespace std;

int func(int a[], int n){
    int flag=0;
    bool swapped=false;
    for (int i = n; i > 0; i--)
    {   flag++;
        for (int j = 0; j < i-1; j++)
        {
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped= true; 
            }
        }
        if(swapped==false){
            break;
        }else{
            swapped=false;
        }
        
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