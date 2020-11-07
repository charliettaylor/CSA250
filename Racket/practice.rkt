#lang racket

(define func1
 (lambda (x y)
        (cond
          [(empty? x) (cons x y)]
          [else (first x)]
          )
        )
  )

(define newList
  (lambda (w)
    (define front (first (rest (rest w))))
    (define second (first (rest w)))
    (define third (first w))
    (define back (rest (rest (rest w))))
    (cons front (cons second (cons third back)))
    )
  )
