def solve(a, b):
	strA, strB = str(a), str(b)
	revA, revB = int(strA[::-1]), int(strB[::-1])
	summation = revA + revB
	revSummation = str(summation)
	return int(revSummation[::-1])

def main():
	testCases = input()
	while(testCases > 0):
		line = raw_input().split()
		a, b = int(line[0]), int(line[1])
		print solve(a, b)
		testCases -= 1

main()