def CutTheSticks(n,num):
	num.sort()
	k = 0
	while k<n:
		least = num[k]
		print n - k
		while num[k]==least:
			k += 1
			if k>=n:
				break

def __main__():
	N = int(raw_input())
	numList = [int(x) for x in raw_input().split(" ")]
	CutTheSticks(N,numList)

if __name__=="__main__":
	__main__()