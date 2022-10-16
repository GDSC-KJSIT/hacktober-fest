def merge_sorted(arr1: list, arr2: list) -> tuple:
    """Takes two sorted arrays and returns a sorted array of their elements."""
    new: list = sorted(arr1 + arr2)
    return new[:len(arr1)], new[len(arr2):]


l1: list = list(map(int, input().split()))
l2: list = list(map(int, input().split()))
print(merge_sorted(l1, l2))
