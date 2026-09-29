class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> f;
        // firstly all elements are added in the map 
        for(int i = 0; i< s.size() ; i++){
            f[s[i]]++;      
        }

        for(int i = 0; i<s.size();i++){
            if(f[s[i]]==1){return i;}
        }   
        //if it appears only one time its unique
        return -1;
    }
};