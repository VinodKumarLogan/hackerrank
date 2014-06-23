def angryChildren(candyList,K,N):
	min_diff = candyList[K-1] - candyList[0]
	i = 1
	j = K
	while j<N:
		diff = candyList[j] - candyList[i]
		if diff<min_diff:
			min_diff = diff
		i += 1
		j += 1
	return min_diff

def __main__():
	n = input()
	k = input()
	candies = [input() for _ in range(0,n)]
	candies.sort()
	print angryChildren(candies,k,n)

if __name__=="__main__":
	__main__()