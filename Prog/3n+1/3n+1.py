m = int(input())
n = int(input())
i = 0
max=0
for i in range(m,n+1):
    j=0
    n=i
    while(1):
        j=j+1
        if j> max:
            max=j
        if (n==1):
            break
        elif (n%2==0):
            n=n/2
        else:
            n=3*n+1 

print(max)
