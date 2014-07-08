def  birthdayGift(values):
	S = 0
	for num in values:
		S += num
	print S/2.0

def __main__():
	n = int(raw_input())
	values = list()
	for i in range(0,n):
		values.append(int(raw_input()))
	birthdayGift(values)

if __name__=="__main__":
	__main__()