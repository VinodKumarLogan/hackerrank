def connectingTowns(n,distances):
	ways = 1
	for i in distances:
		ways *= i
	return ways

def __main__():
	T = int(raw_input())
	for i in xrange(0,T):
		N,dist = int(raw_input()),[int(x) for x in raw_input().strip().split(" ")]
		print connectingTowns(N,dist)%1234567

if __name__=="__main__":
	__main__()