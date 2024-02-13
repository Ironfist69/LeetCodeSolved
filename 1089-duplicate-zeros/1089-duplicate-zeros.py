class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        i=0
        while i<len(arr)-1:
            if arr[i]==0:
                i+=1
                arr.insert(i,0)
                arr.pop()
            i+=1
        