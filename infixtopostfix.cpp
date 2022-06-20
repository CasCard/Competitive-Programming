// You are given an infix expression S of length N. You need to convert the given expression S to its postfix equivalent using stack.
// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single integer N denoting the length of S.
// The second line contains a string S, the infix expression.

// Output
// For each test case print a single line containing the postfix equivalent for the given infix expression.

// Constraints
// 1≤T≤10
// 1≤N≤102
// S contains only uppercase English letters (A...Z), and these characters - (,),+,−,∗,/,^. S is a valid infix expression.


#include <bits/stdc++.h>
#include <stack>
#include <string>


using namespace std;

int prec(char c ){
    if(c=='^')
        return 3;
    else if(c=='/' || c=='*')
        return 2;
    else if(c=='+' || c=='-')
        return 1;
    else
        return -1;
}

void infixToPostfix(string s){
    stack<char> st;
    string result;

    for(int i=0;i<s.length();i++){
        char c=s[i];

        if((c>='A' && c<='Z') || (c>='0' && c<='9'))
            result+=c;
        else if(c=='(')
            st.push('(');
        else if(c==')'){
            while(st.top() != '('){
                result+=st.top();
                st.pop();
            }
            st.pop();
        }

        else{
            while(!st.empty() && prec(s[i]) <= prec(st.top())){
                result+=st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while(!st.empty()){
        result += st.top();
        st.pop();
    }
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        infixToPostfix(s);
    }
    return 0;
}




