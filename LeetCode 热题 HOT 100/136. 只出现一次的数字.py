class Solution:
    def singleNumber(self, nums) -> int:
        for i in range(1, len(nums)):
            nums[0] = nums[0] ^ nums[i]
        return nums[0]


if __name__ == '__main__':
    nums = [int(num) for num in input().split(' ')]
    s = Solution()
    print(s.singleNumber(nums))