class Solution(object):
    def isPalindrome(self, x):
        num = x
        total = 0
        while num>0:
            last_digit = num %10
            total = total * 10 + last_digit
            num = num // 10
        return total == x
        