n=int(input("nhập a:"))
tong,r=0,0
while(n>0):
    #tong+=int(n%10)
    #n/=10
    tong+=n%10
    n//=10
print("Tổng các số trong n là:",tong)
