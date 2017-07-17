primes = filterPrime [2..] 
	where filterPrime (p:xs) = 
		p : filterPrime [x | x <- xs, x `mod` p /= 0]

evendiv y x  =  if y `mod` x == 0 then 1 else 0

numfactors x = foldl1 (+) (map ( x `evendiv`) $  takeWhile (< 100000) primes )

fact4 x = if numfactors x == 4 then True else False

consec [] = []
consec (x:y:[]) = []
consec (x:xs) = if x+1 == head xs && x + 2 == head (tail xs) && x + 3 == head ( tail (tail xs))
        then x:(consec xs) else consec xs

prob47 = consec ( filter fact4 [1..100000000] )
