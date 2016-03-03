#!/bin/python

import sys


n = int(raw_input().strip())
a = []
for a_i in xrange(n):
   a_temp = map(int,raw_input().strip().split(' '))
   a.append(a_temp)

prim_diag = [a[i][i] for i in range(0, n)]
scnd_diagx = range(0, n)
scnd_diagx = zip(reversed(scnd_diagx), scnd_diagx)
scnd_diag = [a[i][j] for i, j in scnd_diagx]

print abs(sum(prim_diag) - sum(scnd_diag))