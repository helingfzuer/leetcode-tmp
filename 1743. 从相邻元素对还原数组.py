from collections import defaultdict


class Solution:
    def restoreArray(self, adjacentPairs):
        pairs_dic = defaultdict(list)
        for pair in adjacentPairs:
            pairs_dic[pair[0]].append(pair[1])
            pairs_dic[pair[1]].append(pair[0])
        res = []
        for key, value in pairs_dic.items():
            if len(value) == 1:
                res.append(key)
                res.append(value[0])
                break
        for i in range(2, len(adjacentPairs)+1):
            values = pairs_dic[res[-1]]
            if res[i-2] == values[0]:
                res.append(values[1])
            else:
                res.append(values[0])
        return res



if __name__ == '__main__':
    n = int(input())
    adjacentPairs = []
    for i in range(0, n):
        pairs = [int(num) for num in input().split(' ')]
        adjacentPairs.append(pairs)
    s = Solution()
    res = s.restoreArray(adjacentPairs)
    print(res)