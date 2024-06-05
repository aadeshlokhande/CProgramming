# time ---> datetime ----> calender 

# import time 

# for i in range(11):
#     print("Nasa hacked",i*10,"%")
#     time.sleep(1)

# print("Access Granted")

# ======================================

# from datetime import datetime 

# now = datetime.now()
# 05/06/2024
# dd/mm/yyyy
# dd-mm-yy
# dd-mm-yyyy

# print(now.strftime("%d / %m / %Y"))
# a = now.strftime("%I:%M:%S %p")
# print(a)

# "12:00:00 AM" = 
# hh:mm:ss 




# from datetime import datetime 
# from time import sleep
# while(True):
#     now = datetime.now()
#     a = now.strftime("%I:%M:%S %p")
#     if(a=="07:55:00 PM"):
#         print("hello")
#     sleep(1)

# https://www.programiz.com/python-programming/datetime/strftime
# a = [["Directive","Meaning","Example"]
# ["%a","Abbreviated weekday name.","Sun, Mon, ..."]
# ["%A","Full weekday name.","Sunday, Monday, ..."]
# ["%w","Weekday as a decimal number.","0, 1, ..., 6"]
# ["%d","Day of the month as a zero-padded decimal.","01, 02, ..., 31"]
# ["%-d","Day of the month as a decimal number.","1, 2, ..., 30"]
# ["%b","Abbreviated month name.","Jan, Feb, ..., Dec"]
# ["%B","Full month name.","January, February, ..."]
# ["%m","Month as a zero-padded decimal number.","01, 02, ..., 12"]
# ["%-m","Month as a decimal number.","1, 2, ..., 12"]
# ["%y","Year without century as a zero-padded decimal number.","00, 01, ..., 99"]
# ["%-y","Year without century as a decimal number.","0, 1, ..., 99"]
# ["%Y","Year with century as a decimal number.","2013, 2019 etc."]
# ["%H","Hour (24-hour clock) as a zero-padded decimal number.","00, 01, ..., 23"]
# ["%-H","Hour (24-hour clock) as a decimal number.","0, 1, ..., 23"]
# ["%I","Hour (12-hour clock) as a zero-padded decimal number.","01, 02, ..., 12"]
# ["%-I","Hour (12-hour clock) as a decimal number.","1, 2, ... 12"]
# ["%p","Locale's AM or PM.","AM, PM"]
# ["%M","Minute as a zero-padded decimal number.","00, 01, ..., 59"]
# ["%-M","Minute as a decimal number.","0, 1, ..., 59"]
# ["%S","Second as a zero-padded decimal number.","00, 01, ..., 59"]
# ["%-S","Second as a decimal number.","0, 1, ..., 59"]
# ["%f","Microsecond as a decimal number, zero-padded on the left.","000000 - 999999"]
# ["%j","Day of the year as a zero-padded decimal number.","001, 002, ..., 366"]
# ["%-j","Day of the year as a decimal number.","1, 2, ..., 366"]
# ["%U","Week number of the year (Sunday as the first day of the week). All days in a new year preceding the first Sunday are considered to be in week 0.","00, 01, ..., 53"]
# ["%W","Week number of the year (Monday as the first day of the week). All days in a new year preceding the first Monday are considered to be in week 0.","00, 01, ..., 53"]
# ["%c","Locale's appropriate date and time representation.","Mon Sep 30 07:06:05 2013"]
# ["%x","Locale's appropriate date representation.","09/30/13"]
# ["%X","Locale's appropriate time representation.","07:06:05"]
# ["%%","A literal '%' character.","%"]]


# ======================================================
# import calendar
# a = calendar.calendar(2024)
# a = calendar.month(2024,6)

# print(a)