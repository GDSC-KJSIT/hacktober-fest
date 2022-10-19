l = input()
longest_substring = ""
for c in l:
    if c not in longest_substring:
        longest_substring += c
    else:
        break
print(longest_substring)
print(longest_substring.__len__())