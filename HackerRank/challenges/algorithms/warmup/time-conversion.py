#!/bin/python

import sys
from time import strptime, strftime

time = raw_input().strip()

print strftime("%H:%M:%S", strptime(time, "%I:%M:%S%p"))