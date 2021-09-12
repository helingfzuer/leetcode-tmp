class Solution:
    def checkValidString(self, s: str):
        if len(s) == 0:
            return True
        stack1, stack2 = [], []
        for index, char in enumerate(s):
            if char == '(':
                stack1.append(index)
            elif char == '*':
                stack2.append(index)
            else:
                if len(stack1) > 0:
                    stack1.pop()
                elif len(stack2) > 0:
                    stack2.pop()
                else:
                    return False
        if len(stack1) > len(stack2):
            return False
        while len(stack1) > 0 and len(stack2) > 0:
            if stack1[-1] > stack2[-1]:
                return False
            stack1.pop()
            stack2.pop()
        return True


if __name__ == '__main__':
    s = input()
    solu = Solution()
    res = solu.checkValidString(s)
    print(res)