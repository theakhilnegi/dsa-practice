#include <iostream>
using namespace std;

int func(int a[], int l,int m, int h){
    int res[h+1],count=0;
    int x=0,y=m+1;
    while(x<=m && y<=h)
    {
        if(a[x]<=a[y]){
            res[count]=a[x];
            x++;
            count++;
        }else{
            res[count]=a[y];
            y++;
            count++;
        }
    }
    while(x<=m){
        res[count]=a[x];
        x++;
        count++;
    }
    while(y<=h){
        res[count]=a[y];
        y++;
        count++;
    }
    for (int i = 0; i < h; i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
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
    cout<<"Enter mid: ";
    cin>>m;
    func(a,0,m,n);
    return 0;
}