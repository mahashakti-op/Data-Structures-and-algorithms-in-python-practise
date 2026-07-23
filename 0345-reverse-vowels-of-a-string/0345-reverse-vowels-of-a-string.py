class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        i= 0 
        j = len(s)-1
        word = list(s)      # REMEMBER a string is immutable
        vowels = "aeiouAEIOU"

        while i < j:
            if word[i] not in vowels:
                i+=1
            elif word[j] not in vowels:
                j-=1
            else:
                word[i], word[j], = word[j], word[i]
                i+=1
                j-=1
        return "".join(word)    
                                 