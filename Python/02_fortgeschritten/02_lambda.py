m = lambda x: x*2
f = lambda x: x%2 == 0

liste = [1,2,3,4,5,6]

liste2 = list(map(m,liste))
print("Pre-calculation " + str(liste))
print("After-calculation " + str(liste2))
liste2 = list(filter(f,liste))
print("After-filter " + str(liste2))