;; Project Euler one
(define (remainder-of? a b) ; Is 'a' a multiple of b?
	(= (remainder a b) 0))

(define (remainder-of-three-five? i) ; Is 'i' a multiple of 5 or a multiple of 3?
	(or (remainder-of? i 3) (remainder-of? i 5)))

(define (pe-one-iter stop index sum) 
	(cond ((= stop index) sum)
		((remainder-of-three-five? index) (pe-one-iter stop (+ index 1) (+ sum index))) ;; Updates the value of sum, 
																						;; summing up the value of the 
																						;; index, if it happens to be
																						;; divisible by 5 of by 3
		(else (pe-one-iter stop (+ index 1) sum)))) ;; Updates the value of 'i' if happens that i is
													;; not a multiple of 5 or 3
(define (pe-one n)
	(pe-one-iter n 0 0))