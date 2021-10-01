class Solution:
    def destCity(self, paths) -> str:
        path_dic = {}
        for path in paths:
            path_dic[path[0]] = path[1]
        start_point = paths[0][0]
        while start_point in path_dic.keys():
            start_point = path_dic[start_point]
        return start_point


if __name__ == '__main__':
    paths = []
    n = int(input())
    for i in range(n):
        path = input().split(' ')
        paths.append(path)
    s = Solution()
    res = s.destCity(paths)
    print(res)