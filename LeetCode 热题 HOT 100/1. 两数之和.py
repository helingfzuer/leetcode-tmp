class Solution:
    def twoSum(self, nums, target):
        map_dic = {}
        res = [0] * 2
        for i, num in enumerate(nums):
            if target-num in map_dic.keys():
                res[0], res[1] = map_dic[target-num], i
                return res
            else:
                map_dic[num] = i
        return res



if __name__ == '__main__':
    target = int(input())
    nums = [int(num) for num in input().split(' ')]
    s = Solution()
    res = s.twoSum(nums, target)
    print(res)
    
