def largest_sub_array1(arr: list) -> int:
    """This function finds the largest subarray in a list of numbers"""
    size = len(arr)
    max_sum_ending = arr[0]
    max_so_far = arr[0]  # To keep track of the maximum sum of the subarray
    for i in range(1, size):
        # If max_sum_ending is negative, then we reset it to arr[i]
        # Else, we add arr[i] to max_sum_ending
        # Hence, max_sum_ending is the maximum of max_sum_ending + arr[i] and arr[i]
        max_sum_ending = max(max_sum_ending + arr[i], arr[i])
        if max_so_far < max_sum_ending:
            max_so_far = max_sum_ending
    return max_so_far


arr = [int(x) for x in input("Enter the array: ").split()]
print(largest_sub_array1(arr))
