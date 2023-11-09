start_N=int(input())
end_N=int(input())
tong=1
for x in range(start_N,end_N):
    if(x%7==0 and x%5!=0) :
        tong+=x
print(tong)