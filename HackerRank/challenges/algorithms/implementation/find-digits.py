TC = int(raw_input().strip())

for _ in xrange(TC):
	n = int(raw_input().strip())

	count = 0

	for digit in str(n):
		digit = int(digit)

		if digit != 0:
			if n % digit == 0:
				count += 1

	print count