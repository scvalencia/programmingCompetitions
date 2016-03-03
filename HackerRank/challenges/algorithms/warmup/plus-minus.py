#!/bin/python

import sys


n = int(raw_input().strip())
arr = map(int,raw_input().strip().split(' '))

pos = filter(lambda x : x > 0, arr)
neg = filter(lambda x : x < 0, arr)
zer = filter(lambda x : x == 0, arr)

print len(pos) / (n + 0.0)
print len(neg) / (n + 0.0)
print len(zer) / (n + 0.0)