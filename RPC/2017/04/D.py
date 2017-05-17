import bisect
from sys import stdin, stdout 

left_truncable = [2, 3, 5, 7, 37, 73, 313, 347, 353, 373, 383, 743, 797, 3467, 7643, 34673, 37643, 76367, 79397, 7693967, 799636997]


def reverse_number(n):
    r = 0
    while n > 0:
        r *= 10
        r += n % 10
        n /= 10
    return r

def index(x):

	i = bisect.bisect_left(left_truncable, x)

	if i != len(left_truncable) and left_truncable[i] == x:
		return i

	return -1

def solve():

	testcases = input()

	for _ in range(testcases):
		line = stdin.readline()
		bounds = map(int, line.split())
		a, b = bounds
		idx = min(len(left_truncable) - 2, bisect.bisect_left(left_truncable, a))

		print idx, len(left_truncable)

		count = 0
		number = left_truncable[idx]
		while number <= b:
			rev = reverse_number(number)
			if index(rev) != -1:
				count += 1
			idx += 1
			number = left_truncable[idx]
			

		stdout.write(str(count) + '\n')

solve()
