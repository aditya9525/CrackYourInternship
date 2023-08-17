class Solution {
public:
    void generate(vector<string>& ans, string s, int n, int op, int cp){
        if(cp==n){
            ans.push_back(s);
            return;
        }
        if(op<n) generate(ans, s+'(', n, op+1, cp);
        if(cp<op) generate(ans, s+')', n, op, cp+1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(ans, "", n, 0, 0);
        return ans;
    }
};
