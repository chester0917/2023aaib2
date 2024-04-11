class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T = [0]*101 # 統計數字出現次數,因數字1...100,陣列要開101個
        best=0 #最多的數字,出現幾次呢
        for num in nums: #迴圈,針對每個數字做處理
            T[num] += 1 #這個數字 num 出現次數+1
            if T[num] > best: best = T[num] #最多出現的T統計數字 是多少
        #到這裡, T就有全部的次數出現的次數了, 且 best 就是出現最多的數字
        #把全部最多的都加起來
        total = 0
        for t in T: #針對統計結果T裡面的個數字t
            if t==best: total += t
        return total    