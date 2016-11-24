def bubbleSort(myList):
	# range (start, stop, increment)
	for passNum in range(len(myList)-1,0,-1):
		for i in range(passNum):
			if myList[i] > myList[i+1]:
				temp = myList[i];
				myList[i] = myList[i+1]
				myList[i+1] = temp

ml = [1337, 100, 64, 69, 7, 13, 18, 21, 0]

bubbleSort(ml)
print(ml)
