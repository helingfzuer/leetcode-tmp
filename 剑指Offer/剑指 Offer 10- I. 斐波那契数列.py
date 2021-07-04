class Solution:
    def fib(self, n: int):
        if n <= 1: return n
        f0, f1 = 0, 1
        for i in range(2, n+1):
            f0, f1 = f1, f0 + f1
        return f1 % 1000000007


if __name__ == '__main__':
    n = int(input())
    s = Solution()
    res = s.fib(n)
    print(res)