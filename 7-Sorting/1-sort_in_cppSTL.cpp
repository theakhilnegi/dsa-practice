#include <bits/stdc++.h>
using namespace std;

struct Point{
    int x,y;
};
bool myCmp(Point p1, Point p2){
    return (p1.x<p2.x);
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
    // sort(array address, address of after last element)
    sort(a,a+n);
    cout<<"Sorted array is: ";
    for (int x:a)
    {
        cout<<x<<"  ";
    }
    // OR
    sort(a,a+n, greater <int>());
    cout<<endl;
    for (int x:a)
    {
        cout<<x<<"  ";
    }
    cout<<endl;
//--------------------------------
    vector<int> v={5,7,20,12,2};
    sort(v.begin(),v.end(), greater<int>());
    for(int x:v){
        cout<<x<<" ";  
    }
    cout<<endl;
//--------------------------------
    Point sa[]={{3,20},{2,8},{5,4}};
    sort(sa,sa+3,myCmp);
    for(auto i:sa){
        cout<<i.x<<" "<<i.y<<endl;
    }
    return 0;
}