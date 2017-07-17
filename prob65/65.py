

arr  = [ 2 ,1 ,2]
k = 2
for i in range( 3, 100 ):
	if( i % 3 == 0):
		arr += [1]
	elif( i % 3 == 1):
		arr += [1]
	elif( i % 3 == 2):
		arr += [2 * k];
		k = k + 1

tup = [ arr[-1], 1 ]

arr = arr[:-1]

print (arr)
print( len(arr) )

for i in reversed( arr ):
#invert
	temp = tup[0]
	tup[0]= tup[1]
	tup[1] = temp
#add
	tup[0] = tup[0] + ( tup[1] * i )

digits = str(tup[0])
print(digits)
total = 0

for i in list(digits):
	print( i ) 
	total += int(i)

print( total )
