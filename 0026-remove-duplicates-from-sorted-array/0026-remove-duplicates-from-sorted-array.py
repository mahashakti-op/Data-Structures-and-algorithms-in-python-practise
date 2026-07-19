class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

 # Note we don't have to create a new array , we are changing the current array

        slow = 0      #Pointer to locate unique elements
        fast = 1      #Pointer used for iterating and discovery
        
        while fast in range(len(nums)):
            if nums[slow] == nums[fast]:    #If same move onto next
                fast +=1
            else:
                nums[slow+1] = nums[fast]    #nums[next index] = new unique number
                fast +=1
                slow +=1
                
        return slow + 1         #since index starts from 0