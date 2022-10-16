# Taaha Multani @ https://github.com/taaaahahaha

ii = lambda: int(input())
imi = lambda: [int(i) for i in input().split()]

def fact_hacktober(n):
    if n==2:return n
    return n*fact_hacktober(n-1)

n = ii()
print(fact_hacktober(n))