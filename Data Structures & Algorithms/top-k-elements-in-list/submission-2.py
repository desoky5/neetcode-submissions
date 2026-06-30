class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        freq = {}
        List = []
        for i in nums:
            if i not in freq:
                freq[i] = 1 
            else:
                freq[i] +=1
        sorted_keys = sorted(freq,key=lambda x:freq[x],reverse=True)
        return sorted(sorted_keys[:k])

res = Solution().topKFrequent([1,1,1,2,2,3],2)
print(res)