# Numerical_Method<br>
<h1>***bisection_method.cpp</h1>
<p>T<b>his is the numerical method for finding an approximate root of a function.</b></p>
<h2>Algorithm</h2>
<h3>Assumption</h3>
1.f(x) is a continuous function in interval [a, b]<br>
2.f(a) * f(b) < 0<br>
<h3>Steps:</h3>
1. Find middle point c= (a + b)/2.<br>
2. If f(c) == 0, then c is the root of the solution.<br>
3. Else f(c) != 0<br>
   1.If value f(a)*f(c) < 0 then root lies between a and c. So we recur for a and c<br>
   2. Else If f(b)*f(c) < 0 then root lies between b and c. So we recur b and c.<br>
   3. Else given function doesn’t follow one of assumptions.<br>
