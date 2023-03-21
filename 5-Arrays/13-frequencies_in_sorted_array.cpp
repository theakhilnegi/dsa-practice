#include <iostream>
using namespace std;

//For sorted array
void funcS(int a[], int n){
    int res=0;
    for (int i = 0; i < n; i++)
    {   res=0;
        while(a[i]==a[i+1]){
            res++;
            i++;
        }
        cout<<a[i]<<" -> "<<res+1<<endl;
    }
}

//For unsorted array
void funcU(int a[],int n){
        int temp[n],count=0;
        bool flag=true;
        for (int i = 0; i < n; i++)
        {   int res=0;
            for (int j = i; j < n; j++)
            {
                if(a[i]==a[j]){
                    res++;
                }
            }
            for (int k = 0; k < count; k++)
            {
                if(a[i]==temp[k]){
                    flag=false;
                    break;
                }
            }
            temp[count]=a[i];
            count++;
            if(flag==true){
            cout<<a[i]<<" -> "<<res<<endl;
            }
            flag=true;
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
    funcU(a,n);
    return 0;
}