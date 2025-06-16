# Last updated: 6/16/2025, 11:49:03 AM
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        newStr = sorted(strs)
        n = len(newStr[0])
        for i in newStr:
            if n > len(i):
                n = len(i)
        res = ""
        
        for i in range(n):
            if(newStr[0][i] == newStr[len(strs)-1][i]):
                res += newStr[0][i]
            else:
                break
        return res
        
        