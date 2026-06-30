class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False 
        anagramt = dict()
        anagrams = dict()
        for let in s :
            if let in anagrams:
                anagrams[let] += 1
            else:
                anagrams[let] = 1
        for let in t :
            if let in anagramt:
                anagramt[let] += 1
            else:
                anagramt[let] = 1
        if anagramt == anagrams:
            return True 
        return False 
res = Solution().isAnagram("jar","jam")
print(res)



