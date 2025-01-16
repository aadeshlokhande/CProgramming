# Python Program to Convert Two Lists Into a Dictionary
# keys = [1,2,3,4]
# values = [10,20,30,40]

# dict = {}
# dict["aadesh"] = "lokhande"


# if(len(keys)==len(values)):
#     for i in range(len(keys)):
#         dict[keys[i]] = values[i]
# else:
#     print("len of key and values are not same")

# print(dict)

# ============================================

# *args,  

# def sum(*lol):
#     a = 0
#     for i in lol:
#         a = a + i 
#     return a

# ans = sum(10,20,30,40)
# print(ans)


# def calc(op,*lol):
#     a = 1
#     for i in lol:
#         if(op=="+"):
#             a = a + i 
#         if(op=="*"):
#             a = a * i 

#     return a

# ans = calc("*",10,20,30,40)
# print(ans)



# ****************** (**kwargs ) ******************

# def lol(**pop):
#     print(pop)



# lol(name="aadesh",surname = "Lokhande" )
# =====================================================

# "62) Python Program to Print Colored Text to the Terminal"
# from colorama import Fore, Back, Style
# print(Fore.RED + 'some red text')
# print(Back.GREEN + 'and with a green background')
# print(Style.DIM + 'and in dim text')
# print(Style.RESET_ALL)
# print('back to normal now')



# import colorama

# print(colorama.Fore.GREEN, "Hello rohit")
# from colorama import Fore, Back, Style
# print(Fore.RED + 'some red text')
# print(Back.GREEN + 'and with a green background')
# print(Style.DIM + 'and in dim text')
# print(colorama.Style.RESET_ALL)
# print(",ajhsbdksahd")
# print('back to normal now')
# =====================================================



# a = 'A'
# num = ord(a)

# bi = bin(num)
# print(bi)
# ******************  ******************

# import random 

# sl = "abcdefghijklmnopqrstuvwxyz"
# cl = sl.upper()
# num = "0123456789"
# sc = "!@#$%^&*()_-=+[]|"

# len = int(input("enter a len = "))
# password = ""


# fl = sl + cl + num + sc 
# print(fl)

# for i in range(len):
#     a = random.choice(fl)
#     password = password+a

# print(password)


# ******************  ******************
# a = "hello bhai kaisa hai"

# b = a.replace("bhai", "dev")
# print(b)

