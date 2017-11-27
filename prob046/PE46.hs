primes = filterPrime [2,3..10000] 
 where filterPrime (p:xs) =p : filterPrime [x | x <- xs, x `mod` p /= 0 ]

oddnumbers = [ n | n <- [3,5..] , notElem (n) ( takeWhile(<=n) primes) ]

pow2times2 = [ 2*(n^2) | n <- [1..] ]


preGold :: Integer -> Bool

preGold x = isGold x (takeWhile (<=x) primes) ( takeWhile(<=x) pow2times2 )


isGold :: Integer -> [Integer] -> [Integer] -> Bool

isGold x [] z = False 

isGold x (y:ys) z = x `elem` map (+ y) z  || isGold x ys z 

getAnswer = [n | n <- zip (map preGold oddnumbers) oddnumbers , not (fst n) ]


