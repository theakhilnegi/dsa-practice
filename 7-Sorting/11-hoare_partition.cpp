#include <iostream>
using namespace std;

int func(int a[], int l, int h){
    int pivot= a[l];
    int i=l-1,j=h+1;
    while (true)
    {
        do{
            i++;
        }while(a[i]<pivot);
        
        do{
            j--;
        }while(a[j]>pivot);
        if(i>=j){
            return j;
        }
        swap(a[i],a[j]);
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
    func(a,0,n-1);
    cout<<"Final array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}