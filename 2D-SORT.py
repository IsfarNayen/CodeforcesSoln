from functools import cmp_to_key

# Problem statement: https://www.spoj.com/problems/SORT2D/en/

def solve():
    n = int(input())
    v = []
    for i in range(n):
        x, y = map(int, input().split())
        v.append((x, y))
        
    def comparator(a, b):
        if a[0] == b[0]:
            return b[1] - a[1]
        else:
            return a[0] - b[0]

    v.sort(key=cmp_to_key(comparator))
    
    for i in range(n):
        print(v[i][0], v[i][1])
    
        
t = int(input())
for i in range(t):
    solve()
    