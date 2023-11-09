str1="12345"
str2="xinchao"


str3=str1[0]
str4=str1[len(str1)-1]
str5=str1[6:len(str1)]
str6=str1[6:None]
str7=str1[None:6]
str8=str1[None:5:2]
str9=str2[None:None:2]
str10=str2[None:None:-2]


print("1",str3)
print("2",str4)
print("3",str5)
print("4",str6)
print("5",str7)
print("6",str8)
print("7",str9)
print("8",str10)
print(type(str1))
print(hash(str2))