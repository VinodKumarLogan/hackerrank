def gameOfRotation(n,numList):
	sumAll = sum(numList)
	pmean = 0
	for i in xrange(1,n+1):
		pmean += i*numList[i-1]
	pmax = pmean
	for i in xrange(1,n):
		pmean = pmean - sumAll + (n*numList[i-1])
		if pmean>pmax:
			pmax = pmean
	print pmax
		
def __main__():
	N = int(raw_input())
	numList = [int(x) for x in raw_input().split(" ")]
	gameOfRotation(N,numList)

if __name__=="__main__":
	__main__()