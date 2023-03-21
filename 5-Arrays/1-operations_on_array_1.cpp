#include <bits/stdc++.h>
using namespace std;

int func_find(vector<int> arr,int num){
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}

int func_insert(int arr[],int capacity, int size, int item, int pos){
    if(capacity==size){
        return -1;
    }
    for (int i = size-1; i >= pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=item;
    return size+1;
}

int main(){
    vector<int> arr;
    int arr2[]={1,2,3,4,5,6};
    int n,size=6;
    int temp,item,pos;
    // cout<<"Enter array of 5 elements: ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>temp;
    //     arr.push_back(temp);
    // }
    // cout<<"Enter search item: ";
    // cin>>n;
    cout<<"Enter inserted item: ";
    cin>>item;
    cout<<"Enter position: ";
    cin>>pos;
    size=func_insert(arr2,10,size,item,pos);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<"  ";
    // }
    for (int i = 0; i < size; i++)
    {
        cout<<arr2[i]<<"  ";
    }
    
    return 0;
}