#include<bits/stdc++.h>
using namespace std;

//this tell how many element in intersection
int func(int a[], int n,int b[], int m){
    unordered_set <int > x(a,a+n);
    unordered_set <int > y(b,b+m);
    unordered_set <int > z;
    int x1=x.size();
    int y1=y.size();
    for (auto i: x)
    {
        z.insert(i);
    }
    for (auto i: y)
    {
        z.insert(i);
    }
    return (x1+y1)-z.size();
}


//this tell what are the elements in intersection
void func1(int a[], int n,int b[], int m){
    unordered_set <int > x(a,a+n);
    unordered_set <int > y(b,b+m);
    unordered_set <int > z;
    int x1=x.size();
    int y1=y.size();
    for (auto i:x)
    {
        if(y.find(i)!=y.end()){
            z.insert(i);
        } 
    }
    for (auto i: z)
    {
        cout<<i<<" ";
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
    cout<<"Enter M: ";
    int m;
    cin>>m;
    int b[m];
    cout<<"Enter "<<m<<" number: ";
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    cout<<"Array is: ";
    for (int i = 0; i < m; i++)
    {
        cout<<b[i]<<"  ";
    }
    cout<<endl;
    func1(a,n,b,m);
    return 0;
}