import itertools
num = []
n = 8
for i in range(1,n+1):
	num.append(i)
	sub = list()
	for L in range(0, len(num)+1):
		for subset in itertools.combinations(num, L):
			sub.extend(list(subset))
	print num," ",len(num),"=>",sub.count(1)