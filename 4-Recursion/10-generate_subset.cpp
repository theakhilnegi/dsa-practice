#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

// using iteration
// void func(string str){
//     int n = str.length();
//     int count = pow(2,n);
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if((i&(1<<j))!=0){
//                 cout<<str[j];
//             }
//         }
//         cout<<endl;
//     }
// }

// using recursion
void func(string str, string current, int index){
    if(index==str.length()){
        cout<<current<<"  ";
        return;
    }
    string temp = current;
    current+=str[index];
    index++;
    func(str,current,index);
    func(str,temp,index);
}

int main(){
    string n;
    cout<<"Enter N: ";
    cin>>n;
    func(n,"",0);
    return 0;
}