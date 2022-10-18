# -*- coding: utf-8 -*-
"""
Created on Tue Oct 18 12:10:23 2022

@author: samyak
"""

def factorial(num):
    if num < 0:
        return "Number cannot be negative"
    if num == 0 or num == 1:
        return 1
    else:    
        return num * factorial(num - 1)
x = int(input("Enter number: "))
print(f"Factorial of {x} is: {factorial(x)}")

