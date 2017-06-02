testcases = input()
base, mod = 66, 100

for _ in range(testcases):
	n = input()
	print pow(base, n, mod)