class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        n= len(height)
        
        left = 0
        right = n-1
        most_water = float('-inf')

        while left < right:
            area = min(height[left] , height[right]) * (right-left)     #right index always > left
            if area > most_water:
                most_water = area
            if height[left] < height[right]:    # means left height is bottleneck
                left+=1
            else:                   #right height is bottlenecking
                right -=1
        return most_water
