# for i in range(int(input())):
#     n=list(map(int,input().split())) 
#     lent=len(n)
#     ans=[]
#     r=0
# for i in range(1,len(n)+1):
#     for i in n:
#         if n[i]%i==0 and n[i-1]==0:
#             ans.append('1')
#         else:
#             ans.append('0')
#approach perfect square 
import math 
n=int(input())
sr=int(math.sqrt(n))
if  sr*sr == n:
    print('yes')
else:
    print('no')




#appraoch factors
# n=int(input())
# fact=0
# for i in range(1,n+1):
#     if n%i==0:
#         fact+=1
#     else:
#         pass 
# if fact%2==0:
#     print("no")
# else:
#     print("yes")



