class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0 ; i<s.size(); i++){
            char ch = s[i];
            if(ch== '{' or ch== '[' or ch== '('){
                st.push(ch);
            }
            //closing bracket ke liye:
            else{
                if(st.empty()) return false;
                if((ch == '}' && st.top() != '{') ||
                (ch == ']' && st.top() != '[') ||
                (ch == ')' && st.top() != '(')){
                    return false;
                }
                st.pop();    //brackets matched
            }
        }
        return st.empty();  /*empty means everyone
                                found their pair */
    }
};