import string
from collections import OrderedDict

def keyWordTranspositionCipher(keyWord,message):
	alphabets = [ c for c in string.ascii_uppercase if c not in keyWord]
	keySize = len(keyWord)
	code = ['']*keySize
	for i in xrange(0,keySize):
		code[i] = keyWord[i]
	for i in xrange(0,len(alphabets)):
		code[i%keySize] += alphabets[i]
	code = ''.join(sorted(code))
	decode = dict()
	i = ord('A')
	for c in code:
		decode[c] = chr(i)
		i += 1
	val = ''
	for m in message:
		try:
			val += decode[m]
		except:
			val += m
	print val 

def __main__():
	T = int(raw_input())
	for i in xrange(0,T):
		keyWord,message = list(OrderedDict.fromkeys(raw_input())),raw_input()
		keyWordTranspositionCipher(keyWord,message)

if __name__=="__main__":
	__main__()