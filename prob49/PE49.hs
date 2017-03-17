import Data.List

primes = filterPrime [2,3..] 
 where filterPrime (p:xs) =p : filterPrime [x | x <- xs, x `mod` p /= 0 ]

canidates = [ n | n <- takeWhile (<=9999) primes, n > 1000 ]

diffby3 :: Int -> [Int] -> [Int]

diffby3 x y:ys 
	| elem ( 2 *y - x ) ys = [x,y,( 2 *y - x ) ]
	| null y = []
	| otherwise = diffby3 x ys


samedigits :: String -> String -> Bool

samedigits x y  
	| null ( finddigit (head  x )  y ) = True
	| null x = False
	| null y = False 
	| otherwise = samedigits (tail (x))  (finddigit (head x) y ) 

finddigit :: Char -> String -> String

finddigit x y = 
	if  x `elem` y 
		then delete x y
		else y 

