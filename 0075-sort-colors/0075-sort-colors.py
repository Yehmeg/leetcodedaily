class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        mid=0
        high=len(nums)-1
        low=0

        while(mid<=high):
            if (nums[mid]==2):
                temp=nums[mid]
                nums[mid]=nums[high]
                nums[high]=temp
                high=high-1
            
            elif(nums[mid]==0):
                temp=nums[mid]
                nums[mid]=nums[low]
                nums[low]=temp
                low=low+1
                mid =mid+1
            
            else:
                mid=mid+1

        return  nums


        
