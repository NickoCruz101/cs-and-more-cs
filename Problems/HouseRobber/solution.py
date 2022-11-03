

class Solution:
    # Bottom-up
    def rob(self, nums: list[int]) -> int:
        
        # if length of the numbers is 1, then there is only one possible house to rob.
        if(len(nums) == 1):
            return nums[0]
        
        # the memory
        dp = [0] * len(nums)
        
        # Base Cases
        dp[0] = nums[0] # 
        dp[1] = max(nums[1],nums[0])
        
        for i in range(2,len(nums)):
            dp[i] = max(dp(i-1),dp(i-2) + nums[i])
            
        return dp[-1]
            
            
            
                
        

