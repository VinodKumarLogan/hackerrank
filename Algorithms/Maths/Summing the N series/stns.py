def  summingTheNSeries(n):
	return (n*n)%1000000007

def __main__():
	T = int(raw_input())
	for i in range(0,T):
		n = int(raw_input())
		print summingTheNSeries(n)

if __name__=="__main__":
	__main__()