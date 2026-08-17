class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0; int maxLength = 0; int zeros = 0;
        for (int high = 0; high < nums.size(); high++){
            if (nums[high] == 0){
                zeros++;
            }
            while(zeros > k){  //424 ques. mei diff dekhte the
                if (nums[low] == 0){
                    zeros--;
                }
                low++;
            }
            maxLength = max(maxLength , high - low + 1);
        }
        return maxLength;
    }
};