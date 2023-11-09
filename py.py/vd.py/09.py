a=int(input("nhap a:"))
b=int(input("nhap b:"))
try:
    c=a/b
    print("thuong:",round(c,3))
except:
    print("lỗi chia cho 0")
