The `power` function of Section 9.6 can be made faster by having it calculate
*xⁿ* in a different way. We first notice that if *n* is a power of 2, then *xⁿ*
can be computed by squaring. For example, *x*⁴ is the square of *x*², so *x*⁴
can be computed using only two multiplications instead of three. As it happens,
this technique can be used even when *n* is not a power of 2. If *n* is even, we
use the formula *xⁿ* = (*xⁿ*/²)². If *n* is odd, then *xⁿ* = *x* × *xⁿ*⁻¹. Write
a recursive function that computes *xⁿ*. (The recursion ends when *n* = 0, in
which case the function returns 1.) To test your function, write a program that
asks the user to enter values for *x* and *n*, calls `power` to compute *xⁿ*,
and then displays the value returned by the function.
