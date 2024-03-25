class Solution(object):
    def countPairs(self, nums, target):
        nums.sort()  # Sorting the array to use two-pointer approach
        n = len(nums)
        count = 0
        left = 0
        right = n - 1

        while left < right:
            if nums[left] + nums[right] < target:
                count += right - left
                left += 1
            else:
                right -= 1  # If the sum is greater or equal to target, decrement right pointer

        return count
