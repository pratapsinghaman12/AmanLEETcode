class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        curr_maj = nums[0]
        count = 0
        for i in nums:
            if i == curr_maj:
                count+=1
            else:
                count-=1
            
            if count == 0:
                curr_maj = i
                count = 1
        return curr_maj