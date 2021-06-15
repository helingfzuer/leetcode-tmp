class Solution:
    def peakIndexInMountainArray(self, arr) -> int:
        left, right, res = 0, len(arr)-2, 0
        while left <= right:
            mid = (left+right) // 2
            if arr[mid] > arr[mid+1]:
                res = mid
                right = mid - 1
            else:
                left = mid + 1
        return res


if __name__ == '__main__':
    arr = input()
    nums = [int(n) for n in arr.split()]
    s = Solution()
    res = s.peakIndexInMountainArray(nums)
    print(res)