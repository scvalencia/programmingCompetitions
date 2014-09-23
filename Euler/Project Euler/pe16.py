def sum_digits(number):
	digits = 0
	while(number > 0):
		digits += number % 10
		number /= 10
	return digits

def main():
	power = 2 ** 1000
	return sum_digits(power)

print main()





	