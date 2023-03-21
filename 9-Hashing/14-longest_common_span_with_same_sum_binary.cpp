#include<bits/stdc++.h>
using namespace std;

// for this solution m and n should be equal
int func(int arr[], int n, int b[], int m){
    unordered_map<int, int> hM;
    for (int i = 0; i < n; i++)
    {
        arr[i]=arr[i]-b[i];
    }
    
    int sum = 0;
    int max_len = 0; 
    int ending_index = -1;
 
    for (int i = 0; i < n; i++)
        arr[i] = (arr[i] == 0) ? -1 : 1;
 
    for (int i = 0; i < n; i++) { 
        sum += arr[i];
        if (sum == 0) {
            max_len = i + 1;
            ending_index = i;
        }
 
        if (hM.find(sum) != hM.end()) {
            if (max_len < i - hM[sum]) {
                max_len = i - hM[sum];
                ending_index = i;
            }
        }
        else
            hM[sum] = i;
    }
    for (int i = 0; i < n; i++)
        arr[i] = (arr[i] == -1) ? 0 : 1;
 
    printf("%d to %d\n",
           ending_index - max_len + 1, ending_index);
 
    return max_len;
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
    cout<<"Enter m: ";
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
    cout<<func(a,n,b,m);
    return 0;
}