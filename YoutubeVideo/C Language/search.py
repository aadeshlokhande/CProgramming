file2 = open("basic guid.txt","r")
data2 = file2.read().split("\n")
file2.close()

topic = ""
subtopic = ""
file = open("abc.txt","w")
for i in data2:
    if("-- " in i):
        topic = f"{i.replace("-- ","")}"
        continue
    
    if("^^ " in i):
        subtopic = f"{i.replace("^^ ","")}"
        continue
    print(f"{i} in {subtopic} in c programming with sutable example if possible",file=file)

