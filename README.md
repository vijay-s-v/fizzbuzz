# fizzbuzz

This program tests different ways to solve the fizzbuzz problem. The primary metric is computation time which is calculated using timers from chrono. There are three methods used to solve the fizzbuzz problem;  

- method 1: if the number is divisible by 3 and 5 print FizzBuzz, if it's divisible by 5 print Buzz, if it's divisible by 3 print Fizz, else print the number
- method 2: if the number is divisible by 15 print FizzBuzz, if it's divisible by 5 print Buzz, if it's divisible by 3 print Fizz, else print the number
- method 3: initialize an empty string, if the number is divisible by 3 concatenate Fizz to the end, if the number is divisible by 5 concatenate Buzz to the end, if the string is empty print the number else print the string  

It seems that method 1 is usually the slowest, while method 2 and 3 are a bit faster.
