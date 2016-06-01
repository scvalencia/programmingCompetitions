n = int(raw_input().strip())
f = lambda n : 1 if n < 2 else n * f(n - 1)

print f(n)