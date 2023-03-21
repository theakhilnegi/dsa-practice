#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bsort(pair<int, int> a[], int n){
    bool swapped=false;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i-1; j++)
        {
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped= true; 
            }
        }
        if(swapped==false){
            break;
        }else{
            swapped=false;
        }
    } 
    return 0;
}

//my solution
int funcM(pair<int, int> a[], int n){
    bsort(a,n);
    cout<<"Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].first<<"  "<<a[i].second<<endl;
    }
    cout<<endl;
    int minN,maxN;
    for (int i = 0; i < n; i++)
    {   minN=a[i].first;
        maxN=a[i].second;
        while(a[i].first<=a[i+1].first&&a[i].second>=a[i+1].first)
        {
            minN=min(minN,a[i+1].first);
            maxN=max(a[i].second,a[i+1].second);
            i++;
        }
        cout<<"{"<<minN<<","<<maxN<<"}, ";
    }
    return 0;
}

//GFG solution
int funcG(pair<int, int> a[], int n){
    bsort(a,n);
    int res=0;
    for (int i = 0; i < n; i++)
    {
        if(a[res].second>=a[i].first){
            a[res].second=max(a[res].second,a[i].second);
            a[res].first=min(a[res].first,a[i].first);
        }else{
            res++;
            a[res]=a[i];
        }
    }
    for(int i=0; i<=res; i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    return 0;
}

int main(){
    cout<<"Enter N: ";
    int n;
    cin>>n;
    pair<int, int> a[n];
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
    cout<<endl;
    funcM(a,n);
    return 0;
}