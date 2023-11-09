
m,n=map(int,input().split())
def ve_hinh_vuong_roi(m, n):
    for i in range(m):
        if i == 0 or i == m - 1:# m-1 là hàng cuối.
            print('* ' * n)# in ra * với ktrắng
        else:
            print('* ' + '  ' * (n - 2) + '*')
ve_hinh_vuong_roi(m, n)