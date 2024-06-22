#include<bits/stdc++.h>
#include <stack>
using namespace std;



//doubt 2
class Solution {
public:

    void solve(vector<int>& candidates, int target, int a, vector<int>& hint,
               vector<vector<int>>& ans) {
        if (a == candidates.size()) {
            if (target == 0) {
                ans.push_back(hint);
            }
            return;
        }
        if (candidates[a] <= target) {
            hint.push_back(candidates[a]);
            solve(candidates, target - candidates[a], a, hint, ans);
            hint.pop_back();
        }
            solve(candidates, target, a + 1, hint, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> hint(0);
        solve(candidates, target, 0, hint, ans);
        return ans;
    }
};







//doubt 1
// int prec(char ch)
// {
//     if (ch == '^')
//     {
//         return 3;
//     }
//     if (ch == '*' || ch == '/')
//     {
//         return 2;
//     }
//     if (ch == '+' || ch == '-')
//     {
//         return 1;
//     }
//     else{
//         return -1;
//     }
// }

// string infop(string s)
// {
//     stack<char> st;
//     string res;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
//         {
//             res += s[i];
//         }
//         else if (s[i] == '(')
//         {
//             st.push(s[i]);
//         }
//         else if (s[i] == ')')
//         {
//             while (!st.empty() && st.top() != '(')
//             {
//                 res += st.top();
//                 st.pop();
//             }
//             if (!st.empty())
//             {
//                 st.pop();
//             }
//         }
//         else
//         {
//             while (!st.empty() && prec(s[i]) < prec(st.top()))
//             {
//                 res += st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//     }
//     while(!st.empty()){
//         res += st.top();
//         st.pop();
//     }
//     return res;
// }
// int main(){
//     cout<<infop("(a-b/c)*(a/k-l)      ")<<endl;
// }