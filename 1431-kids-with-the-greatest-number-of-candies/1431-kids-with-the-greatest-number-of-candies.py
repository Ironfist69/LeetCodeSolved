class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        result = []
        max_can=max(candies)
        for i in range(len(candies)):
            if candies[i]+extraCandies>=max_can:
                result.append(True)
            else:
                result.append(False)
        return result