import sys
input = sys.stdin.readline

def solve():
    n, a, b = map(int, input().split())

    ans = min(
        n * a, (n // 3) * b + (n % 3) * a, ((n + 2) // 3) * b
    )

    print(ans)

t = int(input())

for _ in range(t):
    solve()