
**Part 1**

√2
Definition of Integer
Definition of rational numbers

If n = 25, 100, or 169, then n is a perfect square and is the sum of two perfect squares.
```
5  * 5  = 25  = (3 * 3)   + (4 * 4)
10 * 10 = 100 = (8 * 8)   + (6 * 6)
13 * 13 = 169 = (12 * 12) + (5 * 5)
True
```

The sum of two odd integers is even.
```
Hint: By definition, even integers can be expressed as 2n, thus odd integers can be expressed as 2n + 1
(2n + 1) + (2n + 1)
(4n + 2) = (2n)
Even = 2n
```

The sum of an even integer and it's square is even
If n squared is odd, then n is odd
```
(2n + 1)² = 4n² + 4n + 1
(2n + 1)² = 4n(n + 1) + 1
(2n + 1)² = (2n + 1)
True
```


**Part 2**

Prove by induction that 1 + 5 + 9 + ... + (4n-3) = n(2n-1)
```
P(n) = (4n - 3)
P(1) = (4(1) - 3) = 1
1 + 5 + 9 + ... + (4n-3) + (4(n+1)) = (n+1)[2(n+1)-1]
n(2n-1) + (4(n+1)) = (n+1)[2(n+1)-1]
2n² - n + 4n + 4 = (n+1)(2n+2) - 1
2n² - n + 4n + 4 = 2n² - n + 4n + 4
```

Prove that for any positive integer number n, n^3 + 2n is divisible by 3
```
n > 0
3 + 12 + 33 ... + n³ + 2n = 
P(k) = k³ + 2k
(k+1)³ + 2(k+1)
k³ + 3k² + 3k + 1 + 2k + 2
k³ + 3k² + 3k + 2k + 3
(k³ + 2k) + (3k² + 3k + 3)
(k³ + 2k) + 3(k² + k + 1)
P(k) + 3(k² + k + 1)
Divisible by 3
```
Prove that for n >= 1, 9^n − 1 is divisible by 8 for all non-negative integers
Hint: 4^(3+1) = 4 * 4^3 Hint: If 9^n - 1 = 8m, then 9^n = 8m + 1
```
9^n − 1
P(k) = 9^k - 1
P(k+1) = 9^(k+1) − 1
9 * 9^k - 1 = 8m
(9 * 9^k - 1)/8
```
