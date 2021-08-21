(define fizzbuzz
  (lambda args
    (fizzbuzz-w-counts 1 100)))

(define fizz
  (lambda (num)
    (= (modulo num 3) 0)))

(define buzz
  (lambda (num)
    (= (modulo num 5) 0)))

(define fizzbuzz-w-counts
  (lambda (count max)
    (if (<= count max)
        (begin
          (if (fizz count)
              (display "Fizz"))
          (if (buzz count)
              (display "Buzz"))
          (if (not (or (fizz count) (buzz count)))
              (display count))
          (newline)
          (fizzbuzz-w-counts (+ count 1) max)))))