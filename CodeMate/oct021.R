# data frame

# df <- data.frame(
#     Name = c("shivani", "sayali", "prajwal", "aadesh"), 
#     Age = c(26,21,22,87),
#     Roll = c(101,102,103,104)
#     )

# print(df)

# ---------------------------------------------------------
# name <- c("shivani", "sayali", "prajwal", "aadesh")
# age <- c(26,21,22,87)
# roll <- c(101,102,103,104)

# df <- data.frame(Name = name, Age = age, Roll = roll)

# print(df)
# -------------------------------------------------------


# reading CSV
# var <- read.csv("Dataset/CodeTantra Report - UsersPerformance.csv")
# print(var)


# -------------------------------------------------------

# reading tsv 

# var <- read.delim("Dataset/CodeTantra Report - UsersPerformance.tsv")
# print(var)

# -------------------------------------------------------

# library(readxl)

# var <- read_excel("Dataset/CodeTantra Report.xlsx")
# print(var)

# -------------------------------------------------------


# library(RMySQL)

# ser <- dbDriver("MySQL")
# db <- dbConnect(ser, user= "name", password = "poplolpop", host = "localhost", dbname = "dbName" )

# var <- dbReadTable(db, "table_name")

# print(var)

# ====================================================================


# library(jsonlite)

# var <- fromJSON("Dataset/studentInfo.json")

# print(var$contact$jio)

# =========================================================