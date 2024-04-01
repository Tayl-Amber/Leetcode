import heapq

class Solution(object):
    def thirdMax(self, nums):
        unique_nums = set(nums)

        if len(unique_nums) < 3:
            return max(unique_nums)
        
        heap = []
        for num in unique_nums:
            heapq.heappush(heap, num)
            if len(heap) > 3:
                heapq.heappop(heap)

        return heapq.heappop(heap)

