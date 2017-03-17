import Data.List

primes = filterPrime [2..] 
  where filterPrime (p:xs) = 
          p : filterPrime [x | x <- xs, x `mod` p /= 0]

four = [ x | x <- takeWhile (< 10000) primes , x >1000]

digs x
 | x == 0 = []
 | otherwise = digs ( x `div` 10) ++ [ x `mod` 10]

sim x y = sort (digs x) == sort (digs y)

perm y = map (\x -> filter (sim  x ) four ) y

derp = nub $ filter (\x -> length x > 2) (perm four) 

diff (x:xs) = map ( subtract x ) xs
