class Solution(object):
    def numberOfEmployeesWhoMetTarget(self, hours, target):
        count = 0
        for hour in hours:
            if hour >= target:
                count += 1
        return count
