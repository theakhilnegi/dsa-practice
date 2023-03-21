// my code, not working properly
// #include<bits/stdc++.h>
// using namespace std;

// void func(string s){
//     stack <char> st;
//     for (int i = 0; i < s.length(); i++)
//     {
//         char x = s[i];
//         if(x>='a'&&x<='z'){
//             cout<<x;
//         }else if(x=='('){
//             st.push(x);
//         }else if(x==')'){
//             char temp = st.top();
//             while(temp!='('&&st.empty()==false){
//                 cout<<st.top();
//                 st.pop();
//                    if(st.empty()==false){
//                     temp=st.top();
//                     }
//             }
//         }else{
//             if(st.empty()){
//                 st.push(x);
//             }else{
//                 if((x=='*'||x=='/')&&(st.top()=='+'||st.top()=='-')){
//                     st.push(x);
//                 }else if((x=='*'&&st.top()=='/')||(x=='/'&&st.top()=='*')){
//                     char temp = st.top();
//                 while(temp!='-'&&temp!='+'&&st.empty()==false){
//                     cout<<st.top();
//                     st.pop();
//                     if(st.empty()==false){
//                     temp=st.top();
//                     }
//                 }
//                 }if((x=='-'||x=='+')&&(st.top()=='/'||st.top()=='*')){
//                     char temp = st.top();
//                 while(st.empty()==false){
//                     cout<<st.top();
//                     st.pop();
//                        if(st.empty()==false){
//                     temp=st.top();
//                     }
//                 }
//                 }
//             }
//         }
//     }
//     while(st.empty()==false){
//         cout<<st.top();
//         st.pop();
//     }
// }

// int main(){
//     string s;
//     cout<<"Enter string: ";
//     cin>>s;
//     func(s);
//     return 0;
// }

/* C++ implementation to convert
infix expression to postfix*/
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to return precedence of operators
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
 
// The main function to convert infix expression
// to postfix expression
void infixToPostfix(string s)
{
 
    stack<char> st; // For stack operations, we are using
                    // C++ built in stack
    string result;
 
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
 
        // If the scanned character is
        // an operand, add it to output string.
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9'))
            result += c;
 
        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if (c == '(')
            st.push('(');
 
        // If the scanned character is an ‘)’,
        // pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if (c == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
 
        // If an operator is scanned
        else {
            while (!st.empty()
                   && prec(s[i]) <= prec(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
 
    // Pop all the remaining elements from the stack
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
 
    cout << result << endl;
}
 
// Driver's code
int main()
{
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
 
    // Function call
    infixToPostfix(exp);
    return 0;
}