class Solution(object):
    def numRescueBoats(self, people, limit):
        """
        :type people: List[int]
        :type limit: int
        :rtype: int
        """
        
        people.sort()
        low = 0
        high = len(people)-1
        boats = 0

        while low<=high:
            sum = people[low] + people[high]
            if sum <= limit:
                low+=1
                high-=1

            else:                    
                high -=1         #easier than 2sum lol
            
            boats +=1       
            '''cuz har ek case mei boat dispatch hogi , (single
                    person is also counted as 1)'''
        return boats