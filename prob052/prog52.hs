import Data.List


digs x
 | x == 0 = []
 | otherwise = digs (x `div` 10) ++ [ x `mod` 10]

rareEqual (x:xs)
 |  null xs = True
 | otherwise =  (sort x) == (sort (head xs)) && rareEqual xs

get x = [y * x | y <- [1..6]] 

answer = take 2 $ filter (\x -> rareEqual $ map digs $ get x ) [1..]

