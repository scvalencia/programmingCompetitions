#!/bin/python

import sys

n = int(raw_input().strip())

i = 1
while i <= n:
	print ' ' * (n - i) + '#' * i
	i += 1