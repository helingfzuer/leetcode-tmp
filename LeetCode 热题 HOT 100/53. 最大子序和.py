class Solution:
    def maxSubArray(self, nums):
        res, tmp = nums[0], nums[0]
        for i in range(1, len(nums)):
            tmp = max(tmp+nums[i], nums[i])
            res = max(tmp, res)
        return res



if __name__ == '__main__':
    nums = [int(num) for num in input().split(' ')]
    s = Solution()
    print(s.maxSubArray(nums))