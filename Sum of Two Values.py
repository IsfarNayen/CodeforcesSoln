n , m = map(int , input().split())
v = list(map(int , input().split()))

for i in range(n):
    v[i] = (v[i] , i)
v.sort()


i = 0
j = n - 1
while i < j:
    if v[i][0] + v[j][0] == m:
        print(min(v[i][1] + 1 , v[j][1] + 1) , max(v[i][1] + 1 , v[j][1] + 1))
        exit()
    elif v[i][0] + v[j][0] < m:
        i += 1
    else:
        j -= 1
        
print("IMPOSSIBLE")

