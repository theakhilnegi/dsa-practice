#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    cout<<q.front()<<endl;
    q.push(30);
    q.push(40); 
    q.pop(); 
    q.pop(); 
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;
    q.pop(); 
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    return 0;
}