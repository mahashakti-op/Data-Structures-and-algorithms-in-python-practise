class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int zero = 0;
        int one = 0;
        unordered_map<int,int> f;
        int res = 0;
        for(int i = 0; i<n ; i++){
            if(nums[i]==0) zero++;
            else one++;
            int diff = zero - one;
            if(diff == 0){
                res = max(res,i+1);  //since length is 1 + index
                continue;
            }
            if(f.find(diff) == f.end()){    //means hashmap mei nahi hai
            f[diff]=i;      //nahi hai toh store kar diya
            }
            else{
                int len = i-f[diff];    //current length of till i and index f[diff]
                res = max(res , len);   //dont update index again now if u want longest
            }
        }
        return res;
    }
};