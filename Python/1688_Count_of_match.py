# // class Solution(object):
# //     def numberOfMatches(self, n):
# //         """
# //         :type n: int
# //         :rtype: int
# //         """
# //         return n-1
# def problems_solved(t, testcases):
#     for _ in range(t):
#         n = testcases[_][0]
#         contest_log = testcases[_][1]

#         solved_problems = 0
#         total_time = 0

#         for i in range(n):
#             problem_time = ord(contest_log[i]) - ord('A') + 1
#             total_time += problem_time

#             if total_time >= i + 1:
#                 solved_problems += 1

#         print(solved_problems)


# t = 3
# testcases = [
#     (6, 'ACBCBC'),
#     (7, 'AAAAFPC'),
#     (22, 'FEADBBDFFEDFFFDHHHADCC')
# ]

# problems_solved(t, testcases)
def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        a.sort()
        b.sort()
        ans = 0
        i = 0
        j = 0
        while i < n and j < k:
            if a[i] <= b[j]:
                ans += a[i]
                i += 1
            else:
                ans += b[j]
                j += 1
        while i < n:
            ans += a[i]
            i += 1
        print(ans)


if __name__ == '__main__':
    main()