Python 3.7.7 (tags/v3.7.7:d7c567b08f, Mar 10 2020, 10:41:24) [MSC v.1900 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> #!/bin/python3
#Can't able to solve this in C++ don't know how to use BigInteger library in C++
#Learning BigInteger Library soon
import math
import os
import random
import re
import sys

# Complete the extraLongFactorials function below.
a = int(input())
fact = 1
for i in range(a,0,-1):
    fact = fact*i
print(fact)
