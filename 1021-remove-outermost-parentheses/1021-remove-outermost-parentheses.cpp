class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int n = s.size();
        int balance = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '('){
                if(balance > 0){
                    res += s[i];
                }
                balance++;
            }
            else if(s[i] == ')'){
                balance--;
                if(balance > 0){
                    res += s[i];
                }
            }
        }
        return res;
    }
};