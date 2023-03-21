#include <iostream>
using namespace std;

// this is a non tail recusive function of 1 to n converted to tail recursive

// int func(int n){              // non tail recursive
//     if(n<1){
//         return 0;
//     }
//     func(n-1);
//     cout<<n<<"  ";
//     return 0;
// }
int func(int n,int k){          // tail recursive
    if(n<1){
        return k;
    }
    cout<<k<<"  ";
    func(n-1,k+1); 
}

//---------------------------------------------------------------

// int fact(int n){            //Non tail recursive
//     if(n<1){
//         return 1;
//     }
//     return n*fact(n-1);
// }

int fact(int n, int k){     // tail recursive
    if(n<1){
        return k;
    }
    return fact(n-1,k*n);
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    // func(n,1);
    cout<<fact(n,1);
    return 0;
}


// tail recursion is recursion in which there is nothing after recursive function so that after callback by parent funciton nothing have to do which decrease time

// void func(int n){
//     if(n<1){         Start:           tail call elemation
//         return ;
//     }
//     cout<<n<<"  ";
//     func(n-1);       this recursive function turns to n=n-1; goto start;
// }

// this is n to 1 function which takes less time and ausilary space of O(1) because modern compilers write start and turn recursive into goto start and they do to every tail recuresive