def twoArrays(n,k,a,b):
	a.sort()
	b.sort(reverse=True)
	for i in xrange(0,n): 
		if a[i]+b[i]<k:
			return "NO"
	return "YES"

def __main__():
	T = int(raw_input())
	for i in xrange(0,T):
		N,K = [int(x) for x in raw_input().split(" ")]
		A = [int(x) for x in raw_input().split(" ")]
		B = [int(x) for x in raw_input().split(" ")]
		print twoArrays(N,K,A,B)

if __name__=="__main__":
	__main__()