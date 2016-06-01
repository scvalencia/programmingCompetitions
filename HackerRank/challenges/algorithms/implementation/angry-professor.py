import sys

t = int(raw_input().strip())
for a0 in xrange(t):
	n, k = raw_input().strip().split(' ')
	n, k = [int(n),int(k)]
	a = map(int,raw_input().strip().split(' '))

	count = 0
	for hour in a:
		if hour <= 0: 
			count += 1

	print 'YES' if count < k else 'NO'