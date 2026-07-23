class Solution(object):
    def fourSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        n = len(nums)
        nums.sort()
        ans = []
        for i in range(0,n-3):
            if i>0 and nums[i] == nums[i-1]:
                continue 
            for j in range(i+1,n-2):
                if j>i+1 and nums[j] == nums[j-1]:
                    continue
                left = j+1
                right = n-1
                while left < right:
                    total = nums[i] + nums[j] + nums[left] + nums[right]
                    if total == target:
                        ans.append([nums[i],nums[j],nums[left],nums[right]])
                        left+=1
                        right-=1
                        # Skip duplicate left
                        while left < right and nums[left] == nums[left - 1]:
                            left += 1

                        # Skip duplicate right
                        while left < right and nums[right] == nums[right + 1]:
                            right -= 1

                    elif total < target:
                        left+=1
                    elif total > target:
                        right -=1
        return ans    