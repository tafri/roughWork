from math import sqrt
def primeCount():
	L = [2]
	n = int(input())
	start = 10**(n-1)+1
	end = 10**n-1
	tempEnd = int(sqrt(end))
	for i in range(3, tempEnd, 2):
		for j in L:
			if i%j == 0:
				break
		else:
			L.append(i)
	
	index, index1 = len(L), len(L)
	
	for i in range(start, end, 2):
		for j in range(index):
			if i%L[j] == 0:
				break
		else:
			L.append(i)
	upto = len(L)

	while index<upto:
		print(L[index],end=" ")
		index += 1
	print()
	i = len(L) - index1
	print(i)

primeCount()
