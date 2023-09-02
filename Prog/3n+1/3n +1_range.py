a = 1
b = int(input())
for n in range(2,b+1):
    i = n 
    while i > 1:
        if (i % 2 == 0):
            i = i//2
            a = a + 1
            if i == 1 :
                print( "For {} Length = {}".format(n, a) )
                a = 1
        else:
            i = 3*i+1
            a = a + 1 
