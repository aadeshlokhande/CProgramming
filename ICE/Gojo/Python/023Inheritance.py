# Inheritance 

# single 
# class parent ----------> class child 

# class Parent:
#     def parentQuality(self):
#         print("paisa kamana")
    
# class Child(Parent):
#     def ChildQuality(self):
#         print("paisa udana")

# raju = Parent()
# raju.parentQuality()

# viju = Child()
# viju.ChildQuality()
# viju.parentQuality()


# ****************** multiple ******************

# class Mom:
#     def MomQuality(self):
#         print("bargaining")

# class Dad:
#     def DadQuality(self):
#         print("maths")

# class Child(Mom, Dad):
#     def ChildQuality(self):
#         print("prepare neet")

# dholu = Child()
# dholu.ChildQuality()
# dholu.MomQuality()
# dholu.DadQuality()



# ****************** multilevel ******************

# class GrandParent:
#     def GrandParentQuality(self):
#         print("khau ke liye paise dena")

# class Parent(GrandParent):
#     def ParentQuality(self):
#         print("paise sambhalke rakhna")

# class Child(Parent):
#     def ChildQuality(self):
#         print("paisa chhine se pahle dukan jana")


# dugu = Child()
# dugu.ChildQuality()
# dugu.ParentQuality()
# dugu.GrandParentQuality()

# ****************** heirarchical ******************

# parent ---> a,b,c,d

# class Parent:
#     def parentQuality(self):
#         print("singing")

# class Child1(Parent):
#     def Child1Quality(self):
#         print("guitar")
    
# class Child2(Parent):
#     def Child2Quality(self):
#         print("Dance")

# dholu = Child1()
# dholu.Child1Quality()

# bhulu = Child2()
# bhulu.Child2Quality()

# ****************** hybrid ******************

# class A:
#     def a(self):
#         print("Class A")
    
# class B(A):
#     def b(self):
#         print("Class B")

# class C(A):
#     def c(self):
#         print("Class C")

# class D(B):
#     def d(self):
#         print("Class D")

# class E(B):
#     def e(self):
#         print("Class E")

# class F(B,C):
#     def f(self):
#         print("Class F")

# obF = F()
# obF.a()
# obF.b()
# obF.c()
# obF.f()

# ************************************