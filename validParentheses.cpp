#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            char top = st.top();
            if (c == ')' && top != '(')
            {
                return false;
            }
            if (c == ']' && top != '[')
            {
                return false;
            }
            if (c == '}' && top != '{')
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    string s = "([{])";
    bool valid = isValid(s);
    cout << valid;
}