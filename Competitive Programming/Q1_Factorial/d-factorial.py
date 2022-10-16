def factorial(num: int):
    """Takes a number and returns the factorial of that number using recursion."""
    if type(num) != int or num < 0:  # Check if the input is an integer and is positive
        return "Not defined"
    if num <= 1:  # Base case
        return 1
    else:  # Recursive case
        return num * factorial(num-1)


num = int(input("Enter a number: "))
print(f"Factorial of {num} is {factorial(num)}")
