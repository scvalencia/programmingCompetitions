import math

msg = raw_input().strip()
msg = msg.replace(' ', '')
col = int(math.ceil(math.sqrt(len(msg))))

slices = []

i = 0
while i <= len(msg):
	slices.append(msg[i:i + col].ljust(col))
	i += col

i = 0
ans = ''

while i < col:
	for slc in slices:
		if slc[i] != ' ':
			ans += slc[i]
	ans += ' '
	i += 1

print ans