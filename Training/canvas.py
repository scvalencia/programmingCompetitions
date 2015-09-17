primes = []

def sieve(bound):
	aux_location = [True for _ in range(bound + 1)]
	sieve_ans = []
	i = 2
	while i * i < bound + 1:
		if aux_location[i]:
			j = i * i
			while j < bound + 1:
				aux_location[j] = False
				j += i
		i += 1

	i = 2
	while i < bound + 1:
		if aux_location[i]:
			sieve_ans.append(i)
		i += 1

	return sieve_ans

def prime_factorization(number):
	i = 0

	fct = []

	while primes[i] * primes[i] <= number:
		if number % primes[i] == 0:		
			number /= primes[i]
			fct.append(primes[i])
			i = 0
		else:
			i += 1

	fct.append(number)
	return fct


def main():
	global primes
	primes = sieve(10000000)
	
	while True:
		n = input()
		if n == 0:
			break
		print prime_factorization(n)

if __name__ == '__main__':
	main()