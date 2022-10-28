def strrev(string):
    string = string.split()
    return " ".join(string[::-1])
string = input()
print(strrev(string))