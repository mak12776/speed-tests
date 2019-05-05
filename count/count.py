#!/usr/bin/python3

import sys

if len(sys.argv) != 2:
    print("usage: {} [FILE]".format(sys.argv[0]))

print(sum(1 for line in open(sys.argv[1])))

