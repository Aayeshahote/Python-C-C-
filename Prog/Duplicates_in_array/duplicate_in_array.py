# find all duplicates in array

num = list(map(int, input().split()))
sol = []
ans = set(num)
for i in range(len(ans)):
    if num.count(i )==2:
        sol.append(i)
    else:
        pass
print(sol)
