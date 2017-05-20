import random

def D():
	testcases = random.randint(1, 1000000)

	print testcases

	for _ in range(testcases):
		a = random.randint(1, 10000000000)
		b = random.randint(a, 10000000000)

		print a, b

if __name__ == '__main__':
	D()