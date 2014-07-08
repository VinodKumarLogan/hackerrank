from math import pow
def generateNineZero(x):
	temp = x
	nineZeroNum = 0
	bitCount = 0
	while temp!=0:
		temp >>= 1
		bitCount += 1
	while bitCount>=0:
		bitK = (x & ( 1 << bitCount )) >> bitCount
		nineZeroNum += pow(10,bitCount)*(bitK*9)
		bitCount -= 1
	return nineZeroNum

def  specialMultiple(n):
	i = 1
	while True:
		multiple = generateNineZero(i)
		if multiple%n==0:
			return multiple
		i += 1

def __main__():
	T = int(raw_input())
	for i in range(1,T+1):
		n = int(raw_input())
		print int(specialMultiple(n))

if __name__=="__main__":
	__main__()