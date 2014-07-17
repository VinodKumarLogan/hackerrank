def NCR(n,r):
	com = 1
	for i in xrange(n-r+1,n+1):
		com *= i
	for i in xrange(1,r+1):
		com /= i
	return com%1000000000

def nCrTable(n):
	combo = list()
	mid = n>>1
	for i in xrange(0,mid+1):
		combo.append(NCR(n,i))
	if n&1:
		for c in combo:
			print c,
		for c in reversed(combo):
			print c,
	else:
		for c in combo:
			print c,
		v = False
		for c in reversed(combo):
			if not v:
				v = True
				continue
			print c,
	print "\n",

def __main__():
	T = int(raw_input())
	for i in xrange(0,T):
		N = int(raw_input())
		nCrTable(N)

if __name__=="__main__":
	__main__()