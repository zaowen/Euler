import Data.List

d = [4,3,2,1]
ds = map (*2) d

d4 = map (*4) ds

d5 = sort [x+y | x <- ds , y<- d4]

xor :: Eq a => [a] -> [a] -> [a]
xor x y 
 | null y = x
 | length y > length x = xor y x
 | head y `elem` x = xor (delete (head y) x) (tail y)
 | otherwise = xor (head y :x) (tail y)

odds x = derp x [] 
derp x y
 | null x = y
 | head x `elem` y = derp (tail x) (delete (head x) y)
 | otherwise = derp (tail x) (head x : y)

d22 = map (*2) $ foldl1 xor [ds,d4,d5]

mk5 x y = [a+b | a<-x , b <-y ]

mk10 x = foldl1 xor [x,x4,x5 ] where
 x4 = map (*2) x
 x5 = odds $ mk5 x4 x 

