t = int(input())

for x in range(t):
	n = int(input())
	ss = input()
	yy = ''
	for x in ss:
		if(x is "E"):
			yy+="S"
		else:
			yy+="E"
	print(yy)