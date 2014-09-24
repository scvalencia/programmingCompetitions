def pe1(n):
	l = filter(lambda x : x % 3 == 0 or x % 5 == 0, range(n))
	return sum(l)
def main():
	print pe1(10)
main()