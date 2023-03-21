#include <iostream>
using namespace std;

int partition(int a[], int l, int h){
    int pivot = a[l], i=l-1, j=h+1;
    while(true){
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

void qsort(int a[], int l, int h){
    if(l<h){
        int p=partition(a,l,h);
        qsort(a,l,p);
        qsort(a,p+1,h);
    }
}

int func(int a[], int n, int m){
    qsort(a,0,n-1);
    int minNum=a[n-1]+1;
    for (int i = 0; i <= n-m; i++)
    {
        minNum=min(a[i+m-1]-a[i],minNum);
    }
    return minNum;
}

int main(){
    cout<<"Enter N: ";
    int n,m;
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
    cout<<"Enter m: ";
    cin>>m;
    cout<<func(a,n,m);
    
    return 0;
}