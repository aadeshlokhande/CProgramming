# dictionary ----> {} -----> {key:value} ----> mutable


# a = {"a":"Apple", "b":"Bada apple", "c":"Chota apple"}

# print(a)
# print(len(a))
# print(a["a"])
# a["b"] = "ball"
# a["e"] = "earphone"
# print(a)
# print(type(a))


# key = a.keys()
# print(key)

# value = a.values()
# print(value)

# a,b,c = a.items()
# print(a)
# print(b)
# print(c)

# a.update({"f":"Float"})
# print(a)


# a.pop("b")
# print(a)

# cpy = a.copy()
# cpy = a
# a.pop("b")
# print(id(a))
# print(id(cpy))



# a.clear()
# print(a)




# ******************  ******************

# dic = {"asd":"asdjh"}

# =================================================
# ****************** set ******************
# =================================================

# set ----> {} 

# a = {10,20,30,40,50,30,40,50}

# print(len(a))
# print(a)
# print(dir(a))


a = [12,234,23,12,34,54,234,2,12,234,354,654,243,231]

a = list(set(a))
a.sort()
print(a)

