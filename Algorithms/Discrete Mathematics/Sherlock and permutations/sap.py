def NCR(n,r):
	perm = 1
	for i in xrange(n+1,n+r+1):
		perm *= i
	for i in xrange(2,r+1):
		perm /= i
	return perm

def sherlockAndPermutations(n,m):
	a = n
	b = m-1
	if a>b:
		return NCR(a,b)
	return NCR(b,a)

def __main__():
	T = int(raw_input())
	for i in xrange(0,T):
		N,M = [int(x) for x in raw_input().strip().split(" ")]
		print sherlockAndPermutations(N,M) % 1000000007

if __name__=="__main__":
	__main__()