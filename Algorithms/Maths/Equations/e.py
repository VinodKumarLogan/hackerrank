def SeiveOfEratosthenes(n):
	factors = [True] * (n+1)
	factors[0] = factors[1] = False
	prime = list()
	for i in xrange(2,n):
		if i*i>n:
			break
		else:
			if factors[i]:
				for j in xrange(i,n):
					if i*j>n:
						break
					else:
						factors[i*j] = False
	for i in xrange(0,n+1):
		if factors[i]:
			prime.append(i)
	return prime

def equations(n):
	primeFactors = SeiveOfEratosthenes(n)
	eqProd = 1
	for factor in primeFactors:
		temp = n
		e = 0
		while temp!=0:
			e += temp/factor
			temp /= factor 
		eqProd *= (2*e + 1)
	return eqProd

def __main__():
	N = int(raw_input())
	print equations(N)%1000007

if __name__=="__main__":
	__main__()