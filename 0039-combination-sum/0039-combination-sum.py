class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []
        def dfs(i,current,value):
            if value==target:
                res.append(current.copy())
                return
            if i>=len(candidates) or value>target:
                return
            current.append(candidates[i])
            dfs(i,current,value+candidates[i])
            current.pop()
            dfs(i+1,current,value)
            
        dfs(0,[],0)
        return res