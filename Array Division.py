import sys
from typing import List

def read_int() -> List[int]:
    return list(map(int, sys.stdin.readline().split()))

def can_divide(max_sum: int, nums: List[int], k: int) -> bool:
    if max(nums) > max_sum:
        return False
    
    curr_sum = 0
    groups = 1
    
    for num in nums:
        if curr_sum + num > max_sum:
            groups += 1
            curr_sum = num
        else:
            curr_sum += num
            
        if groups > k:
            return False
    
    return True

def solve() -> None:
    n, k = read_int()
    nums = read_int()
    
    left = max(nums)
    right = sum(nums)
    
    while left < right:
        mid = (left + right) // 2
        if can_divide(mid, nums, k):
            right = mid
        else:
            left = mid + 1
            
    print(left)

if __name__ == "__main__":
    solve()