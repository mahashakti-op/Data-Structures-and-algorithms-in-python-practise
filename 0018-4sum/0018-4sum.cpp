class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i<n ; i++){
            for(int j = i+1; j<n; j++){
                int L = j+1 ; int R = n-1;
                long long goal = (long long)target - nums[i] - nums[j];
                while(L<R){
                    long long sum = (long long)nums[L] + nums[R];
                    if(sum == goal){
                        result.push_back({nums[i],nums[j],nums[L],nums[R]});
                        L++;
                        R--;
                        while(L<R && nums[L-1] == nums[L]){
                            L++;}
                    }
                    else if(sum < goal){
                        L++;}
                    else{R--;}
                }
                while(j+1<n && nums[j] == nums[j+1]) j++;
            }
        while(i+1<n && nums[i] == nums[i+1]) i++;
        }
        return result;
    }
};