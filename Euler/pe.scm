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
;; Project Euler two
(define (is-even? n) ; Is 'n' an even number, it is divisible by two?
	(= (remainder n 2) 0))
(define (pe-two-iter f1 f2 sum max)
	(cond ((or (< max (+ f2 f1)) (= max (+ f2 f1))) sum) ;; Out of bounds condition!!
		((is-even? (+ f2 f1)) (pe-two-iter f2 (+ f2 f1) (+ sum (+ f2 f1)) max)) ;; IF f(n) is even update the sum 
																				;; and f(n-1), otherwise, update
																				;; fibonacci but not the sum
		(else (pe-two-iter f2 (+ f2 f1) sum max))))
(define (pe-two max)
	(pe-two-iter 0 1 0 max))









