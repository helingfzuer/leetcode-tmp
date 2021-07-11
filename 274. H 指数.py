class Solution:
    def hIndex(self, citations) -> int:
        citations.sort(reverse=True)
        h, n = 0, len(citations)
        cnt = [0] * (n+1)
        for citation in citations:
            if citation>n:
                cnt[n] += 1
            else:
                cnt[citation] += 1
        for index in range(n, -1, -1):
            h += cnt[index]
            if h >= index:
                return index
        return h



if __name__ == '__main__':
    n = int(input())
    citations = [int(num) for num in input().split(' ')]
    s = Solution()
    res = s.hIndex(citations)
    print(res)
