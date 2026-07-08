import sys
input = sys.stdin.readline

def solve():
    s = input().strip()
    n = len(s)

    # suffix[i] = count of 1/3 from i to end
    suffix = [0] * (n + 1)

    for i in range(n - 1, -1, -1):
        suffix[i] = suffix[i + 1]

        if s[i] in "13":
            suffix[i] += 1

    best = suffix[0]

    twos = 0

    for i in range(n):

        if s[i] == '2':
            twos += 1

        cur = twos + suffix[i + 1]

        best = max(best, cur)

    print(n - best)

t = int(input())

for _ in range(t):
    solve()