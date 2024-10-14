# vector indexing
# a <- c(11,22,33,44,55)
# a <- c(22,11,55,44,33)
# 2, 1, 5, 4, 3 
# print(a[2])
# print(a[c(5,2,4)])

# print(a[a>35])
# print(a[a%%2==0])

# =========================================================
# factor
# gender <- factor(c("male","female","male","female","male","female"))
# print(gender)
# print(levels(gender) )

# ===================================================

# data managements with string

# str1 <- "data managements with string"
# str2 <- "by Aadesh lokhande"
# print(nchar(str1))
# print(substr(str1,1,4))


# print(paste(str1, str2, sep="")) # concatination

# print(str1)


# name <- "Aadesh"
# lname <- "lokhande"
# username <- paste(name, lname, sep = "")
# print(username)

# ====================================================


# display and formatting


# ********* Format function **********
# pi <- 35443.145974
# print(pi)
# print(format(pi, digits = 4))



# *************** Format spcifier ************
# int ---> "%d" -----> 12,43,65,34, 0, -34, -654
# float ----> "%f" ---> 23.543, 3.14, 8.5, 5.2, 1.5
# string -----> "%s" -----> "hello bhai kaise hai", "jay mata di!!!!...."

# a <- 123.349136
# sprintf("value of a is %f", a)
# sprintf("value of a is %.2f", a)

# name <- "sayali"
# age <- 21

# sprintf("my name is %s and my age is %d year old.", name, age)

# a <- 100
# b <- 200
# c <- 300
# sprintf("%d / %d / %d",b,a,c)
