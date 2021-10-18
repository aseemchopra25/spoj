import math

moduler = 1298074214633706835075030044377087
max_n = 500
sum = [1] + [None]*max_n
for i in xrange(1, max_n+1):
    sum[i] = sum[i-1]*2+1
    if sum[i] > moduler:
        sum[i] %= moduler

T = int(raw_input())
for t in xrange(T):
    print sum[int(raw_input())]