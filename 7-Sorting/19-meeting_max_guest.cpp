#include <iostream>
using namespace std;

int partition(pair<int ,int> a[], int l, int h){
    int pivot = a[l].first , i=l-1, j=h+1;
    while(true){
        do{
            i++;
        }while(a[i].first<pivot);
        
        do{
            j--;
        }while(a[j].first>pivot);
        if(i>=j){
            return j;
        }
        swap(a[i],a[j]);
    }
} 

void qsort(pair<int ,int> a[], int l, int h){
    if(l<h){
        int p=partition(a,l,h);
        qsort(a,l,p);
        qsort(a,p+1,h);
    }
}

int func(pair<int ,int> a[], int n){
    qsort(a,0,n-1);
    int maxN,res=1;
    for (int i = 1; i < n; i++)
    {   maxN=1;
        while(a[i-1].first<=a[i].first&&a[i-1].second>=a[i].first&&i<n){
            maxN++;
            i++;
        }
        res=max(maxN,res);
    }
    return res;
}

int main(){
    cout<<"Enter N: ";
    int n;
    cin>>n;
    pair<int ,int> a[n];
    cout<<"Enter "<<n<<" number: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].first;
        cin>>a[i].second;
    }
    cout<<"Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].first<<"  "<<a[i].second<<endl;
    }
    cout<<func(a,n);
    return 0;
}