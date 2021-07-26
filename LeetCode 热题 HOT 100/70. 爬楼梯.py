class Solution:
    def climbStairs(self, n) -> int:
        if n<=2:
            return n
        f1, f2 = 1, 2
        for i in range(3, n+1):
            f1, f2 = f2, f1+f2
        return f2


if __name__ == '__main__':
    n = int(input())
    s = Solution()
    print(s.climbStairs(n))