def isJolly(a, n):
	diffSet = [False] * n

	for i in range(0, n-1):
		d = abs(a[i]-a[i + 1])
		if (d == 0 or d > n-1 or diffSet[d] == True):
			return False
		diffSet[d] = True	
	return True	

a = list(map(int,input().split()))
n = len(a)

print("Jolly") if isJolly(a, n) else print("Not Jolly")


