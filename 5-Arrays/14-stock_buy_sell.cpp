#include <iostream>
using namespace std;

// Naive method
int funcN(int price[],int start, int end){
    if(end<=start){
        return 0;
    }
    int profit=0;
    for (int i = start; i < end; i++)
    {
        for (int j = i+1; j <= end; j++)
        {
            if(price[j]>price[i]){
                int curr_profit = (price[j]-price[i])+funcN(price,start,i-1)+funcN(price,j+1,end);
                profit=max(profit,curr_profit);
            }
        }
    }
    return profit;
}

// Optimised method
int funcO(int price[], int n){
    int profit=0;
    for (int i = 1; i < n; i++)
    {
        if(price[i-1]<price[i]){
            profit=profit+(price[i]-price[i-1]);
        }
    }
    return profit;
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
    // cout<<"Profit is: "<<funcN(a,0,n);
    cout<<"Profit is: "<<funcO(a,n);
    return 0;
}