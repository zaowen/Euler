import Data.List


fracs = [(a ,b) | a <-[1..9], b <-[1..9] , c <- [1..9], a*b*9+b*c == a*c*10, a `div` b < 1]

problem_33 = foldr1 tupadd fracs where
		tupadd (a,b) (c,d) = ( a*c `div` gcd( a*c)(b *d) , b*d `div` gcd (a*c) (b*d) )
