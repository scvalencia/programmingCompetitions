#!/bin/python

import sys

n = int(raw_input().strip())
arr = map(int,raw_input().strip().split(' '))

i = len(arr) - 1

while 0 <= i:
	print arr[i],
	i -= 1