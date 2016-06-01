TC = int(raw_input().strip())

for test in xrange(TC):
	n = int(raw_input().strip())
	init = 1

	i = 1
	while i <= n:
		if i % 2 == 0:
			init += 1
		else:
			init *= 2
		i += 1

	print init