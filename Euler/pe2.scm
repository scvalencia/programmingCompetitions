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