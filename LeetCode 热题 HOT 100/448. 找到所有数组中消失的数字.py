class Solution:
    def findDisappearedNumbers(self, nums):
        n = len(nums)
        for num in nums:
            x = (num-1) % n
            nums[x] += n
        res = [i+1 for i, num in enumerate(nums) if num <= n]
        return res


if __name__ == '__main__':
    nums = [int(x) for x in input().split(' ')]
    s = Solution()
    res = s.findDisappearedNumbers(nums)
    print(res)