def manasaAnsStones(n,a,b):
	i = 0
	prev = 0
	while i<=n:
		curr = (a*i)+(b*(n-i))
		if prev!=curr:
			print curr,
		prev = curr
		i+=1

def __main__():
	T = input()
	for _ in range(0,T):
		n,a,b = input(),input(),input()
		if a<b:
			manasaAnsStones(n-1,b,a)
		else:
			manasaAnsStones(n-1,a,b)
		print ""

if __name__=="__main__":
	__main__()