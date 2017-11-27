;A permutation is an ordered arrangement of objects. For example, 3124 is one 
;possible permutation of the digits 1, 2, 3 and 4. If all of the permutations are 
;listed numerically or alphabetically, we call it lexicographic order. The 
;lexicographic permutations of 0, 1 and 2 are:

;012   021   102   120   201   210

;What is the millionth lexicographic permutation of the 
;digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?

(defun maptolist ( mylist map )
  (if 
      (eq mylist nil)
      (progn
       (format t ""  map)
       (return-from maptolist)
       )
    (progn
     (setf derp ( index map (index mylist 0) ) )
     (setf map (remove derp map ))
     (format t "~S" derp)
     (maptolist (cdr mylist) map)
     )
    )
  )

(defun index ( mylist i )
  (if (= i 0) (car mylist) (index (cdr mylist) (- i 1)) )
  )

(defun np (n)

  (setf x n)
  (setf m 1)
  (setf lr '() ) ;Holds remainder set
  (while
      (/= x 0)
    (setf e (floor (/ x m )) ) ; integer divide to get next x
    (setf r (mod x m) ) 

    (setq lr ( push r lr ) )

    (setf x e)

    (incf m)
    ) 
  ( maptolist lr '(0 1 2 3 4 5 6 7 8 9 ) )
					;( format t "~%My list contains :~S" lr)
  )

