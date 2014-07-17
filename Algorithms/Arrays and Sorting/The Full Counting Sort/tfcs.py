def theFullCountingSort(n,words):
	for val in words.values():
		for word in val:
			print word,
		
def __main__():
	N = int(raw_input())
	wordList = dict()
	mid = N>>1
	for i in xrange(0,N):
		n,w = [x for x in raw_input().split(" ")]
		n = int(n)
		if wordList.has_key(n):
			if i<mid:
				wordList[n].append("-")
			else:
				wordList[n].append(w)
		else:
			if i<mid:
				wordList[n] = ["-"]
			else:
				wordList[n] = [w]
	theFullCountingSort(N,wordList)

if __name__=="__main__":
	__main__()