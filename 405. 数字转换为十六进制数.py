class Solution:
    def toHex(self, num) -> str:
        if num == 0:
            return '0'
        num = (2**32+num) % 2**32
        tmp = '0123456789abcdef'
        res = ''
        while num:
            res = tmp[num % 16] + res
            num //= 16
        return res


if __name__ == '__main__':
    num = int(input())
    s = Solution()
    res = s.toHex(num)
    print(res)
