class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> f;
        f[0] = 1; //to get it started with a null value
        int n = nums.size();
        int sum = 0;
        int result = 0;

        for(int i = 0 ; i<n ; i++){
            sum += nums[i];
            int rest = sum-k;
            result += f[rest];
            f[sum]++;
        }
        return result;
    }
};