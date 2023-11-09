def tong(*a):
    s=0
    for i in a:
        s+=i
    return s
print("tổng1 ",tong())
print("tổng2 ",tong(5))
print("tổng3 ",tong(1,2,6))
