a=int(input("nhap a:"))
b=int(input("nhap b:"))
try:
    c=a/b
except:
    print("lỗi chia cho 0")
else:
    print("thuong:",round(c,3))
finally:
    print("khối lên finally đã thực hiện")