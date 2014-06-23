import sys
from math import sqrt

def isPerfectSquare(sq):
    return sqrt(sq).is_integer()

def checkFibo(num):
    val = 5*num*num
    return isPerfectSquare(val+4) or  isPerfectSquare(val-4)

def __main__():
    i = 0
    for line in sys.stdin:
        i+=1
        if i>1:
            if checkFibo(int(line)):
                print "IsFibo"
            else:
                print "IsNotFibo" 

if __name__=="__main__":
    __main__()