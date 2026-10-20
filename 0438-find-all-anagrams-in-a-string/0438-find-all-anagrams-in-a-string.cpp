class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size();
        int m = p.size();
        if(m>n) return {};

        vector<int> need(26,0);
        vector<int> have(26,0);
    
        for (int i = 0; i < m; i++){
        need[p[i] - 'a']++;  // -a cuz index is 0 to 25
        have[s[i] - 'a']++;
        }
        if(need == have) ans.push_back(0);

        for(int i = m; i< n ; i++){
            have[s[i-m]- 'a']--;
            have[s[i]- 'a']++;
            
            if(need == have) ans.push_back(i-m+1);
        }
        return ans;
    }
};