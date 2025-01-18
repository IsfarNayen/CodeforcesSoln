#Problem_link: https://cses.fi/problemset/task/1085
#Problem: Array Division

def ok(mid , v , tar):
    for i in range(len(v)):
        if v[i] > mid:
            return False
    
    sum = 0
    cnt = 1
    for i in range(len(v)):
        if sum + v[i] > mid:
            cnt += 1
            sum = v[i]
        else:
            sum += v[i]
    
    return cnt <= tar
        

n , m = map(int, input().split())
v = list(map(int, input().split()))

l = 0
r = 10**18 + 1

while l <= r:
    mid = l + (r - l)//2
    if ok(mid , v , m):
        r = mid - 1
    else:
        l = mid + 1
        
print(l)