a=int(input("Nhập a: "))
b=int(input("Nhập b: "))
c=int(input("Nhập c: "))
if a == b == c:
    print("tam giác đều")
elif a==b or b==c or a==c:
    print("tam giac can")
elif a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 ==a**2:
    print("tam giác vuông")
elif a+b>c and a+c>b and b+c>a:
    print("tam giác thường")
else:
    print("không phải tam giác")