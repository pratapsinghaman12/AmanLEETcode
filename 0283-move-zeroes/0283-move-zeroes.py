class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
            zero_index = 0
            for i in range(len(nums)):
                if nums[i]!=0:
                    nums[i],nums[zero_index] = nums[zero_index], nums[i]
                    zero_index +=1