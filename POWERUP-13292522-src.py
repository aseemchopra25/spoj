p = 10**9 + 7
while True:
	a, b, c = map(int, raw_input().split())
	if a is -1:
		break
	if c is 0:
		print a % p
	elif b is 0:
		print 1
	elif a%p is 0:
		print 0
	else:
		print pow(a, pow(b, c, p - 1), p)