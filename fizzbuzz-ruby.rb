(1..100).each do |num|
    if (num % 3) == 0
        print "Fizz"
    end

    if (num % 5) == 0
        print "Buzz"
    end

    if not ((num % 3) == 0 or (num % 5) == 0)
        print num
    end

    puts
end
