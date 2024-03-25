class Solution(object):
    def numberOfPoints(self, nums):
        points = set()
        for start, end in nums:
            for i in range(start, end + 1):
                points.add(i)
        return len(points)

# Example usage:
nums = [[1, 3], [2, 4], [6, 8]]
sol = Solution()
print(sol.numberOfPoints(nums)) 
