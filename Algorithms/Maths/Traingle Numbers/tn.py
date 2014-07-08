def traingeNumbers(n):
	if n&1:
		return 2
	elif not n&3:
		return 3
	else:
		return 4

def __main__():
	T = int(raw_input())
	for i in range(0,T):
		n = int(raw_input())
		print traingeNumbers(n)

if __name__=="__main__":
	__main__()