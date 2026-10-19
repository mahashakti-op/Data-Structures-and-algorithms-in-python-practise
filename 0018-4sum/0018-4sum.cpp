class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;

        for(int i = 0; i<n ; i++){
            for(int j = i+1; j<n ; j++){
                int L = j+1; int R = n-1;
                long long goal = (long long) target - nums[i] - nums[j];
                while(L<R){
                    long long sum = (long long) nums[L] + nums[R];
                    if(sum == goal){
                        ans.push_back({nums[i],nums[j],nums[L],nums[R]});
                        L++; R--;
                        while(L<R && nums[L] == nums[L-1]){
                            L++;
                        }    
                    } else if(sum>goal){
                        R--;
                    }
                    else L++;
                }
                while(j+1<n && nums[j] == nums[j+1])j++;
            }
            while(i+1 < n && nums[i] == nums[i+1]) i++;
        }
        return ans;
    }
};