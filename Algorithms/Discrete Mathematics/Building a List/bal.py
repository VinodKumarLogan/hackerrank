from itertools import combinations
def buildingAList(n,build):
	tempList = []
	for i in xrange(1,n+1):
		for val in combinations(build,i):
			tempList.append(''.join(val))
	tempList.sort()
	for val in tempList:
		print val

def __main__():
	T = int(raw_input())
	for i in xrange(0,T):
		N,S = int(raw_input()),raw_input()
		S = sorted(S)
		buildingAList(N,S)

if __name__=="__main__":
	__main__()