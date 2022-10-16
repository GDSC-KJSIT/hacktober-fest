def r_factorial(n):
   if n == 1:
       return n
   else:
       return n*r_factorial(n-1)

num = int(input("Enter your number:"))
if num < 0:
   print("Invalid input!!!")
elif num == 0:
   print("Factorial of 0 is 1")
else:
   print("Factorial of", num, "is", r_factorial(num))