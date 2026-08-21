class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best = nums[0];
        int ans = nums[0];

        for (int i = 1; i<nums.size(); i++){
            int V1 = best + nums[i];
            int V2 = nums[i];
            best = max(V1,V2);
            ans = max(ans,best);
        }
        return ans;
    }
};