#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r){
    int n1=(m-l)+1,n2=r-m,i=0,j=0;
    int count=l,lArr[n1];
    int rArr[n2];
    for (int i = 0; i < n1; i++)
    {
        lArr[i]=a[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        rArr[i]=a[m+1+i];
    } 
    
    while(i<n1&&j<n2)
    {
        if(lArr[i]<=rArr[j]){
            a[count]=lArr[i];
            i++;
            count++;
        }else{  
            a[count]=rArr[j];
            j++;
            count++;
        }
    }
    while(i<n1){
        a[count]=lArr[i];
        i++;
        count++;
    }
    while(j<n2){
        a[count]=rArr[j];
        j++;
        count++;
    }
}

void mergeSort(int a[], int l, int r){
    if(r>l){
        int m = l+((r-l)/2);
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
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
    mergeSort(a,0,n);
    cout<<"After merge: ";

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}