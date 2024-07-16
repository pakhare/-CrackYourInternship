class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Create a sorted copy of the nums array
        dic = {}
        for i in range(len(nums)):
            diff = target - nums[i]
            if diff in dic:
                j = dic[diff]
                break
            dic[nums[i]] = i
        return [i, j]
