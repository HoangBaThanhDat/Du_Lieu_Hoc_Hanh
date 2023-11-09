n=int(input("nhập a:"))
lon=0
nho=9
while(n>0):
    s=n%10
    if(lon<s):
        lon=s
    if(nho>s):
        nho=s
    n//=10
print("số lớn nhất là:",lon)
print("số nhỏ nhất là:",nho)

