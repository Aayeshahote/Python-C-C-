def findFirstAndLast(nums, n, target):
    first = -1
    last = -1
    for i in range(0, n):
        if (target != nums[i]):
            continue
        elif (first == -1):
            first = i
        last = i
 
    if (first != -1):
        print("[",first,"]","[",last,"]")
    else:
        print("[-1] [-1]")

nums = list(map(int,input().split()))
n = len(nums)
target = int(input())
findFirstAndLast(nums, n, target)
 