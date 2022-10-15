s = input("Enter a string - ")

st = s.split(' ')

revst = []
for s in st[::-1] :
        revst.append(s)
        
print(" ".join(revst))