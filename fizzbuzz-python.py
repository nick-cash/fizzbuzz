for num in range(1, 100):
    if not (num % 3):
        print "Fizz",

    if not (num % 5):
        print "Buzz",

    if not ((num % 3) == 0 or (num % 5) == 0):
        print num,

    print ""
