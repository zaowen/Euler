(defun palen-p ( n )
 (cond
  ( (atom n) t)
  ( (null n) t)
  ( (= (car (last n)) (car n)) ( palen-p (cdr(butlast n)) ) )
  ( t nil)
 )
)

(defun itterate (n)
 (+ n (list2num(reverse (num2list n))))
 )

(defun Num2List ( n )
 (cond
   (( > n 0) ( cons ( mod n 10 ) (Num2List (floor n 10))) )
   (t nil )
 )
)

(defun list2num ( n )
 (cond
   ( (null n) 0 )
   ( (atom n) n)
   (t (+ (car n) (* 10 (list2num (cdr n)) ) ) )
 )
)

(defun check( n m )
 (cond
  ((palen-p (num2list n)) 0)
  ((> m 0)
     (check (itterate n) (- m 1) )
   )
  (t 1)
 )
)

(defun answer ()
   ( reduce '+
    ( map 'list (lambda (x)  (check (itterate x) 49)) ( loop for i from 1 below 10000 collect i ))
   )
)
