def findDigits(n):
	count = 0
	temp = n 
	while temp!=0:
		val = temp % 10
		if val!=0:
			if n%val==0:
				count += 1
		temp /= 10
	return count

def __main__():
	T = int(raw_input())
	for i in range(0,T):
		n = int(raw_input())
		print findDigits(n)

if __name__=="__main__":
	__main__()