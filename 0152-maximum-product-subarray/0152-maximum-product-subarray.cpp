class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int min_best = nums[0];
        int max_best = nums[0];
        int ans = nums[0];

        for(int i = 1; i<nums.size() ; i++){
            int V1 = nums[i];
            int V2 = min_best * nums[i];
            int V3 = max_best * nums[i];

            min_best = min(V1, min(V2,V3));
            max_best = max(V1, max(V2,V3));
            ans = max(ans , max(min_best, max_best));
        }
        return ans;
    }
};