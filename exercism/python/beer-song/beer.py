def print_function():
	i = 99
	while i > 2:
		dct = {"val" : str(i), "vals" : str(i - 1)}
		print '%(val)s bottles of beer on the wall, %(val)s bottles of beer.' % dct
		print 'Take one down and pass it around, %(vals)s bottles of beer on the wall.' % dct
		print
		i -= 1

	print '2 bottles of beer on the wall, 2 bottles of beer.'
	print 'Take one down and pass it around, 1 bottle of beer on the wall.'
	print 
	print '1 bottle of beer on the wall, 1 bottle of beer.'
	print 'Take it down and pass it around, no more bottles of beer on the wall.'

def main():
	print_function()

main()

