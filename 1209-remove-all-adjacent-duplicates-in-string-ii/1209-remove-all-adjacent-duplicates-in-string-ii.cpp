class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
        stack<pair<char,int>> st;
        for(int i = 0; i<n ; i++){
            char c = s[i];
            if(st.empty()){
                st.push({c,1});   //first element added
                continue;   //continue ke bina baaki if condn. 
                            // bhi chal jayegi which we dont want...
            }
            if(st.top().first != c){
                st.push({c,1});    //for another element
                continue;
            }
            //k ho jayega toh pop kar dena hai isliye usse kam
            // waale valid rahenge
            if(st.top().second < (k-1)){
                pair<char,int> p = st.top();
                st.pop();   //phele exisitng waala bahar nikala
                // and then uske no. ka count badha diya see below
                st.push({p.first, p.second+1});
                continue;
            }
            //(k-1) times hit ho chuka hai so we remove the exisitng 
            //  ones and also don't push the current element
            st.pop();
        }
        string res = "";
        while(!st.empty()){
            pair<char,int> p =st.top();
            st.pop();   //bahar nikal diya result mei store karne ke liye
            while(p.second--){
                res.push_back(p.first);  //added to res for it's no. of counts
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};