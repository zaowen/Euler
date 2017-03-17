import Data.List

can = [(x,y) | x <- [1..9], y <- [1..9] , x/y < 1]

isInt :: (RealFrac a) => a -> Bool
isInt x = x == fromInteger (round x)

world = [(x,y) | x <- [11..99], y <- [11..99] , x/y < 1 , not $ isInt (y/x) ]


comp x y= (fst x)/(snd x) ==  (fst y)/(snd y) 
