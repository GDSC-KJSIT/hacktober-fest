# -*- coding: utf-8 -*-
"""
Created on Wed Oct 19 19:38:38 2022

@author: samyak
"""

def longest_substr(string):
    dum = ""
    count = 0
    max_length = 0
    for index, char in enumerate(string):
        if char not in dum:
            dum += char
            count += 1
        else:
            rep_char_index =  dum.index(char)
            max_length = max(max_length, count)
            count = len(dum) - rep_char_index
            dum = dum[rep_char_index + 1:] + char
    max_length = max(max_length, count)
    return max_length
        
        
        
sample_str = "sarveshkulkarni"
print(f"Longest substring for {sample_str}: {longest_substr(sample_str)}")