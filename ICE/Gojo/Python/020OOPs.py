# OOPs

# class
# object 
# Inheritance
#   single
#   multiple
#   multilevel
#   heirarchical
#   hybrid 
# poly-morphism
# abstraction 
# encapsulation

# ****************** Class - Objects ******************

# class Abc:
#     pass 

# Ob1 = Abc()
# # print(type(Ob1))
# Ob1.num = 10 
# Ob1.price = 12000

# print(Ob1.num)
# ----------------------------------------

class Mobile:
    def getData(self,m, b,p):
        self.model = m 
        self.brand = b 
        self.price = p 
    
    def printData(self):
        print(self.model)
        print(self.brand)
        print(self.price)

iphone14 = Mobile()
# print(type(iphone14))
# print(dir(iphone14))
iphone14.getData("Iphone14", "Apple",60000)

note10 = Mobile()
note10.getData("note 10", "Redmi", 25000)

# note10.printData()

print(note10.price + 1000)


# ******************  ******************

