--Check for Even Digit
od x
 | x < 10 = odd x
 | otherwise = odd x && od (x `div` 10 )

-- count digits standin for floor(log_10 x) )
digits x
 | x < 10 = 0
 | otherwise = 1 + digits ( div x 10 )

--rotate number
rot x = x `div` 10 + ((x `mod` 10) * 10 ^ digits x)

--checks if number is prime 
isPrime x = not $ any divisible $ takeWhile notTooBig [2..] where
     divisible y = x `mod`y == 0
     notTooBig y = y*y <= x

possible =  [ x | x <- [2..1000000], od x , isPrime x ]

answer x 
 | length x == length ( filter isPrime ( map rot x )) = length x
 | otherwise = answer ( filter  isPrime ( map rot x) )
