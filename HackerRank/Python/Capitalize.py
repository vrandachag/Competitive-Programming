#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    str1 = ''
    if s[0].lower():
        str1 = str1 + s[0].upper()

    for i in range(1,len(s)):
        if(s[i] == " "):
            str1 = str1 + s[i]
            if s[i+1].islower():
                str1 = str1 + s[i+1].upper()
            elif s[i+1] != " ":
                str1 = str1 + s[i+1]
        elif s[i-1] != ' ':
            str1 = str1 + s[i]
    return str1    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
