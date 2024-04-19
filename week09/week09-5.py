class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        M, N = len(grid), len(grid[0])

        def travel(i, j):
            if i<0 or j<0 or i>=M or j>=N: return
            if grid[i][j]=='0' : return

            grid[i][j] = '0'
            travel(i+1, j)
            travel(i-1, j)
            travel(i, j+1)
            travel(i, j-1)
        ans = 0
        for i in range(M):
            for j in range(N):
                if grid[i][j]=='1':
                    ans += 1
                    travel(i,j)
        return ans
