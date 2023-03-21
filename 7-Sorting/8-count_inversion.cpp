#include <iostream>
using namespace std;

int merge(int a[], int l, int m, int r){
    int n1=m-l+1, n2=r-m,res=0, i=0, j=0, k=l;
    int lArr[n1],rArr[n2];
    for (int i = 0; i < n1; i++)
    {
        lArr[i]=a[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        rArr[i]=a[m+1+i];
    }
    while(i<n1&&j<n2){
        if(lArr[i]<=rArr[j]){
            a[k]=lArr[i];
            k++;
            i++;
        }else{
            a[k]=rArr[j];
            res=res+(n1-i);
            k++;
            j++;
        }
    }
    while(i<n1){
        a[k]=lArr[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=rArr[j];
        k++;
        j++;
    }
    return res;
}

int func(int a[], int l,int r){ 
    int res=0;
    if(r>l){
    int m=l+((r-l)/2);
    res += func(a,l,m);
    res += func(a,m+1,r);
    res += merge(a,l,m,r);
    }
    return res;
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
    cout<<func(a,0,n);
    return 0;
}