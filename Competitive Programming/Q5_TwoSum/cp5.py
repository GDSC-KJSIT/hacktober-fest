def pcount(arr, n, sum):
    list = {}
    count = 0
    for i in range(n):
        if sum - arr[i] in list:
            count += list[sum - arr[i]]
        if arr[i] in list:
            list[arr[i]] += 1
        else:
            list[arr[i]] = 1
    return count

a=list(map(int, input("elements of array:").strip().split()))
n = len(a)
sum =int(input("enter sum: "))
print('Number of pairs: ', pcount(a, n, sum))