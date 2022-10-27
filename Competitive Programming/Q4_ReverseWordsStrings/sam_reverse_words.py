# -*- coding: utf-8 -*-
"""
Created on Wed Oct 19 19:04:20 2022

@author: samyak
"""

string = "The quick brown fox jumps over the lazy dog"

print(f"Original string: {string}\nAfter reversal: {' '.join(string.split(' ')[::-1])}")
