class Solution(object):
    def shortestPathBinaryMatrix(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        if not grid:
            return -1
        
        rows, cols = len(grid), len(grid[0])
        if grid[0][0] or grid[rows-1][cols-1]:
            return -1
        
        queue = [[0, 0, 1]]
        for row, col, dist in queue:
            if row == rows-1 and col == cols-1:
                return dist
            for di, dj in [(-1, -1), (0, -1), (-1, 1), (-1, 0), (1, 0), (1, -1), (0, 1), (1, 1)]:
                n_row, n_col = row + di, col + dj
                if 0 <= n_row < rows and 0 <= n_col < cols and not grid[n_row][n_col]:
                    grid[n_row][n_col] = 1
                    queue.append([n_row, n_col, dist + 1])
                    
        return -1