size = int(input())
l = [int(item) for item in input().split()]

def kadane(MyList):
    msum = 0
    csum = 0
    for i in MyList: 
        csum = csum + i
        if csum < 0:
            csum = 0
        if msum < csum:
            msum = csum
    return msum
print(kadane(l))