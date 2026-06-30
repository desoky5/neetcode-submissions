class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        diff = []
        for i,k in enumerate(nums):
            complement = target-nums[i]
            diff.append(complement) 
            if complement in nums:
                j = nums.index(complement)
                if i != j:
                    return sorted([i, j])

res = Solution().twoSum([3,4,5,6],7)
print(res)
