class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)
        result = [0] * n
        left , right = 0 , n-1
        pos_of_square = n-1

        while left <= right:
            if nums[left]**2 > nums[right]**2:
                result[pos_of_square] = nums[left]**2
                left += 1
            else:
                result[pos_of_square] = nums[right]**2
                right -= 1
            pos_of_square -= 1
        return result