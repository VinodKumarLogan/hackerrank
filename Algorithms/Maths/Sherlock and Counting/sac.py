from math import sqrt,ceil,floor
def sherlockAndCounting(n,k):
	det = n * (n - (k<<2))
	if det==0:
		return n>>1
	elif det<0:
		return n - 1
	else:
		det = sqrt(det)
		a = int(ceil((n + det)/2))
		b = int(floor((n - det)/2))
		return n - a + b

def __main__():
	T = int(raw_input())
	for i in range(0,T):
		N = raw_input().split(" ")
		print sherlockAndCounting(int(N[0]),int(N[1]))

if __name__=="__main__":
	__main__()