class Solution(object):
    def kthFactor(self, n, k):
        Factors_list = []
        for i in range(1,n+1):
            if n % i == 0:
                Factors_list.append(i)
        if k<= len(Factors_list):
            return Factors_list[k-1]    #CUZ normal index starts from 0 BUT here                      we need the same number k as the index THINK!
        return -1