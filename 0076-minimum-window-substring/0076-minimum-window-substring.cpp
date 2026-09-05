class Solution {
public:
    bool func(vector<int> &have , vector<int> &need)
    {
        for(int i = 0; i<256; i++){
            if(have[i]<need[i]) //Frequency of a current element
            return false;
        }
        return true;
    }
        string minWindow(string s, string t) {
            vector<int> have(256,0);
            vector<int> need(256,0);
            if(s.size()<t.size()){return "";};

            for(int i = 0 ; i < t.size(); i++){
                need[t[i]]++;
            }
            int low = 0; int res = INT_MAX; int start = -1;
            for(int high = 0; high < s.size() ; high++ ){
                have[s[high]]++;
                while(func(have,need)){
                    int len = high - low + 1;   //kam hote jayegi len
                    if(res>len){
                        res = len;
                        start = low;
                    }
                    have[s[low]]--;
                    low++;       
                }
            } 
            if(res == INT_MAX)
            return "";
            return s.substr(start,res);
            }
};