
n = int(input())
b = input()
c = b.split()
a = [int(b) for b in c]
dem = 0
for i in range(n):
    if (a[i] % 3 == 0 or a[i] % 5 == 0) and 1 <= a[i] <= 10**9:
        dem = dem + 1
print(dem)