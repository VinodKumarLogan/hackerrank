def CountingSort2(n,numList):
	countList = [0] * 100
	for i in xrange(0,n):
		countList[numList[i]]+=1
	for x in xrange(0,100):
		for y in xrange(0,countList[x]):
			print x,
def __main__():
	N = int(raw_input())
	numList = raw_input().split(" ")
	numList = [int(x) for x in numList]
	CountingSort2(N,numList)

if __name__=="__main__":
	__main__()