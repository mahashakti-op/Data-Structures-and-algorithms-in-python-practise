class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        target = 0
        nums.sort()
        s = set()
        result = []
        for i in range(0,len(nums)):
            j = i+1
            k = len(nums) - 1

            while j<k:
                sum = nums[i] + nums[j] + nums[k]
                if sum == target:
                    s.add((nums[i],nums[j],nums[k]))
                    j+=1
                    k-=1
                elif sum < target:
                    j +=1
                elif sum>target:
                    k -=1
        result = list(s)
        return result