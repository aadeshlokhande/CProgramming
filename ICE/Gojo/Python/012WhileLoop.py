# While Loop 
# while(condition):
#     code 

# a = 1
# while(a<=10):
#     print("hello",a)
#     a += 1 

# ************************************

# con = "yes"

# while(con=="yes"):
#     a  = int(input("enter a number = "))
#     b  = int(input("enter a number = "))
#     c = a + b 
#     print(f"{a} + {b} = {c}")
#     con = input("bhai fhir se continue krna hai kya = ")

# ******************  ******************

# a = "rohit"
# b = 8
# c = f"mera nam {a} hai and mere pass {b} Rs hai"

# print(c)
# ******************  ******************


# enter a number = 32
# enter a number = 54
# enter a number = 43
# enter a number = 76
# enter a number = 45
# enter a number = 23
# enter a number = 0

# odd = []
# even = [6,8]

# num = 4

# while(num!=0):
#     num = int(input("enter a number = "))
#     if(num%2==0):
#         even.append(num)
#     else:
#         odd.append(num)

# print(even)  
# print(odd)
# =======================================

# pass 
# continue
# break 

# for i in range(10):
#     if(i==5):
#         # break
#         continue 
#     print(i)

# =====================================
# 5th, A, sonu 
# 5th, A, Monu 
# 5th, A, Sweety
# 5th, B, anushka
# .
# .
# .

a = ["==5th==","++A++","sonu","monu","sweety","++B++","anushka","rohit","dhiraj","==6th==", "++A++", "ina","mina","dika","++B++","Pranjali","Siddhi","++C++","Vanshika","vaishnavi"]

std = ""
sec = ""

for i in a:
    if(i[:2]=="=="):
        std= i
        continue
    if(i[:2]=="++"):
        sec = i
        continue

    print(std,sec,i)
