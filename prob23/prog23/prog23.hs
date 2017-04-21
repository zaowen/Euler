-- Program 23 Project Euler
--
-- A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.
--
-- A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.
--
-- As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.
--
-- Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.

import Data.List

mkfactor :: Int -> [Int]
mkfactor x
 | x < 4  = [1]
 | otherwise = filter divisible $ takeWhile notTooBig [1..] where
  divisible y = x `mod` y == 0
  notTooBig y = y*2 <= x

checkAbundant :: Int -> Bool
checkAbundant x = sum( mkfactor x) > x

--cartProd :: [a] -> [b] -> [(a,b)]
cartProd xs = [ (x,y) | x<-xs , y <-xs ]
--tupSum :: Num a => ( a, a) -> a
tupSum (a,b) = a+b

notanswer :: Int -> [Int]
notanswer z = sort $ nub $ map tupSum $ cartProd $ filter checkAbundant $ takeWhile ( < z) [1..] 


recurs z y
 | null y = sum z
 | otherwise = recurs (tail y) (delete (head y) z )

--prog23 :: Int -> Int 
prog23 x = recurs [1..28123] (notanswer x)

