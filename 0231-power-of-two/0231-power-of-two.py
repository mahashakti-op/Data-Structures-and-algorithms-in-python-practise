class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        
        if n<=0:
            return False

        x = 0
        while 2**x<=n:
            if 2**x == n:
                return True 
            x+=1
        return False
