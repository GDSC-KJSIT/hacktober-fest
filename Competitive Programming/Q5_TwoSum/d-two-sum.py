def two_sum(arr: list, req_sum: int) -> int:
    """Takes an array and a sum and returns a list of all pairs of numbers in the array that add up to the sum."""
    diff: list = [req_sum - elem for elem in arr]  # List of differences between each element and the required sum.
    pairs: set = set()  # Use a set to remove duplicate pairs

    for i in range(len(arr)):
        if arr[i] in diff:
            pair: tuple = tuple(sorted([arr[i], diff[i]]))  # Sort the pair to avoid duplicate pairs like (1, 2) and (2, 1)
            pairs.add(pair)
    return len((pairs))  # Return the number of pairs


arr: list = list(map(int, input().split(",")))
req_sum: int = int(input())

print(two_sum(arr, req_sum))
