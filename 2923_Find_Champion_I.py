class Solution(object):
    def findChampion(self, grid):
        n = len(grid)
    
        for team in range(n):
            is_champion = True
        
            for opponent in range(n):
                if opponent != team and grid[opponent][team] == 1:
                    is_champion = False
                    break
    
            if is_champion:
                return team
    
        return -1  
