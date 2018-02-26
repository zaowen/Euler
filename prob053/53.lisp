(defun facto( n )
   (cond
   ((< n 1 ) 1 )
   ( t ( * n (facto ( - n 1 ) ) )))
   )

(defun comb( n r )
   ( cond 
   ((> r n) 0 )
   ( t (/ (facto n ) (* (facto r) (facto (- n r)))) )
   )
   )

(defun over ( n )
   ( map 'list #'(lambda (x) 
                  (cond 
                   ((> 1000000 x) 0 )
                   (t 1)
                   )
                  )
   ( map 'list #'(lambda (x) (comb n x) ) ( loop for i from 0 below (+ n 1) collect i ))
   )
 )

(defun answer ()
   ( apply '+
    ( map 'list (lambda (x) (apply '+ (over x))) ( loop for i from 23 below 101 collect i ))
   )
)

( format t  "~D" (answer) )
