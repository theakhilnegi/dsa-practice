#include <iostream>
using namespace std;

int max(int a, int b, int c){
    if(a>b&&a>c){
        return a;
    }
    if(b>a&&b>c){
        return b;
    }
    if(c>a&&c>b){
        return c;
    }
}

        //             n=23
        //        1/  -1|     1\    (max)
        //     n=12    n=14      n=11
        // -1/  |  \   / |  \     1/ -1|  \-1                 
        //   1  3   0  3 5  2    0   2   -1
          
int func(int n, int a, int b, int c){           
    if(n<0){
        return -1;
    }
    if(n==0){
        return 1;
    }
    int res = max(func(n-a,a,b,c),func(n-b,a,b,c),func(n-c,a,b,c));
    if(res==-1){
    return -1;
    }
    return res+1;
}

int main(){
    int n,a,b,c;
    cout<<"Enter N, A, B, C: ";
    cin>>n>>a>>b>>c;
    cout<<n<<" "<<a<<" "<<b<<" "<<c<<endl;
    cout<<"ans is: "<<(func(n,a,b,c)-1);
    return 0;
}