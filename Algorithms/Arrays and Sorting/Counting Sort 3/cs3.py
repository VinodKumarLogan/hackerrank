def CountingSort3(n,countList):
	for i in range(n,100):
		countList[i]+=1

def __main__():
	T = int(raw_input())
	countList = [0] * 100
	for i in xrange(0,T):
		n = raw_input().split(" ")
		CountingSort3(int(n[0]),countList)
	for x in xrange(0,100):
		print countList[x],

if __name__=="__main__":
	__main__()