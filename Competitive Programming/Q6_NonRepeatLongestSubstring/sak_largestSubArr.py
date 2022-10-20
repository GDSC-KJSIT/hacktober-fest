

inp = input("Enter string ")

string = ""

for i in inp:
    if i not in string:
        string += i
    else:
        break

print("Longest Substring is {} with lenght {}".format(string,len(string)))




