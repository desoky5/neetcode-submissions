class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        diff = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in diff:
                return [diff[complement], i]  # need i here!
            diff[num] = i                     # storing index, not value
val = Solution().twoSum([5,5],10)
print(val)