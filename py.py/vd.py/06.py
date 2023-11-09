n=int(input("Nhập: "))
max=0
min=9
for i in range (1001):
    s=n%10
    if(max<s):
        max=s
    if(min>s):
        min=s
    n//=10
print(max,min)
print 