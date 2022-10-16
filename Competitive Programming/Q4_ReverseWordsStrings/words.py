def rev_str(string):
    stri = string.split()
    return " ".join(stri[::-1])
stri = input()
print(rev_str(stri))
