def isMirrored(a, b):
	clause_1 = (a == 'p' and b == 'q')
	clause_2 = (a == 'q' and b == 'p')
	clause_3 = (a == 'd' and b == 'b')
	clause_4 = (a == 'b' and b == 'd')
	if clause_1 or clause_2 or clause_3 or clause_4:
		return True
	else:
		return False

def main():
	print "Ready"
	while True:
		string = raw_input()
		a, b = string[0], string[1]
		if a == ' ' and b == ' ':
			break
		flag = isMirrored(a, b)
		if flag:
			print "Mirrored pair"
		else:
			print "Ordinary pair"

main()