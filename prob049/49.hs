primes = filterPrime [2..] 
	where filterPrime (p:xs) = 
		p : filterPrime [x | x <- xs, x `mod` p /= 0]


conseq y (x:xs) =  if ( x - y + x ) `elem` xs then y:x:[x + x - y] else conseq y xs
conseq y x = []

recurs x = [conseq (head x) (tail x)]: recurs (tail x)
recurs _ = []

prob49 = recurs $ filter (> 1000) $ (takeWhile (< 9999) primes)
