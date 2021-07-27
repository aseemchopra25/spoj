m=109546051211
fact=1
ans=1
n=input()
if(n>=587117):
       print 0
else:
       for j in range(1, n+1):
           fact=(fact*j)%m
           ans=(ans*fact)%m
       print ans