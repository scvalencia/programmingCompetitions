def fact(n) : return n if n < 3 else n * fact(n - 1)

if __name__ == '__main__':
	number = input('Enter size: ')
	print fact(20 * 2) / fact(20) ** 2