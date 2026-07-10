class Solution(object):
    def reverse(self, x):
        sign = 1

        if x < 0:
            sign = -1
            x = -x

        total = 0

        while x > 0:
            last_digit = x % 10
            total = total * 10 + last_digit
            x = x // 10

        total = total * sign

        if total < -2**31 or total > 2**31 - 1:
            return 0

        return total