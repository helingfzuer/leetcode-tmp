class Solution:
    def tribonacci(self, n) -> int:
        if n == 0:
            return 0
        if n == 1 or n == 2:
            return 1
        t0, t1, t2 = 0, 1, 1
        for i in range(3, n+1):
            t0, t1, t2 = t1, t2, t0+t1+t2
        return t2


if __name__ == '__main__':
    n = int(input())
    s = Solution()
    print(s.tribonacci(n))