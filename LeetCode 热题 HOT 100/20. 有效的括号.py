class Solution:
    def isValid(self, s):
        if len(s)%2 == 1:
            return False
        pair = {
            ')': '(',
            ']': '[',
            '}': '{'
        }
        stack = list()
        for ch in s:
            if ch in pair.keys():
                if not stack or stack[-1] != pair[ch]:
                    return False
                else:
                    stack.pop()
            else:
                stack.append(ch)
        return not stack


if __name__ == '__main__':
     s = input()
     solu = Solution()
     print(solu.isValid(s))