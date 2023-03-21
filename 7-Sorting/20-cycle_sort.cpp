#include <iostream>
using namespace std;

//only if no dublicate item available
void cycleSortDistinct(int a[], int n){
    for (int cs = 0; cs < n-1; cs++)
    {
        int pos=cs,item=a[cs];
        for (int i = cs+1; i < n; i++)
        {
            if (a[i]<item)
            {
                pos++;
            }
        }
        swap(item,a[pos]);
        while(pos!=cs){
            pos=cs;
            for (int i = cs+1; i < n; i++)
            {
                if(a[i]<item){
                    pos++;
                }
            }
            swap(item,a[pos]);
        }
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
    cycleSortDistinct(a,n);
    cout<<"Sorted array is: ";
    for (int i = 0; i < n; i++) 
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}