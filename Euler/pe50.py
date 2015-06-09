def primes1(n):
    sieve = [True] * (n/2)
    for i in xrange(3,int(n**0.5)+1,2):
    	if sieve[i/2]:
    		sieve[i*i/2::i] = [False] * ((n-i*i-1)/(2*i)+1)
    return [2] + [2*i+1 for i in xrange(1,n/2) if sieve[i]]

def prime(a):
     return not (a < 2 or any(a % x == 0 for x in range(2, int(a ** 0.5) + 1)))


def main():

	primes = primes1(1000000)
	current_max, number = -1, 2

	i = 0
	while i < len(primes):
		j = i
		summation = 0

		while j < len(primes):
			summation += primes[j]
			if j - i > current_max:
				current_max = j - i + 1
				number = summation

			j += 1
		i += 1


	print number, current_max


if __name__ == '__main__':
	main()