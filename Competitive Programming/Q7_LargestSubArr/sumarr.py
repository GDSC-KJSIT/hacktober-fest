def sumarr(arr,leng):
    max1 = arr[0]
    max2 = 0
    for i in range(0,leng):
        max2 += arr[i]
        if max2 < 0:
            max2 = 0
        elif max1 < max2:
            max1 = max2
    return max1
arr = []
leng = int(input())
for i in range(leng):
    inp = int(input("enter the array elements : "))
    arr.append(inp)
print("max substring value is : ", sumarr(arr,leng))
