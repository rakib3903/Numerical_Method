<h1 align = "center">Numerical_Method</h1><br>
<h1>***bisection_method.cpp</h1>
<p>T<b>his is the numerical method for finding an approximate root of a function.</b></p>
<h2>Algorithm</h2>
<h3>Assumption</h3>
1.f(x) is a continuous function in interval [a, b]<br>
2.f(a) * f(b) < 0<br>
<h3>Steps:</h3>
1. Find middle point c= (a + b)/2<br>
2. If f(c) == 0, then c is the root of the solution<br>
3. Else f(c) != 0<br>
       * If value f(a)*f(c) < 0 then root lies between a and c. So we recur for a and c<br>
       * Else If f(b)*f(c) < 0 then root lies between b and c. So we recur b and c.<br>
       * Else given function doesn’t follow one of assumptions.<br>

<h1>***False_position.cpp</h1>
<p>T<b>This is the numerical method for finding an approximate root of a function.</b></p>
<h2>Algorithm</h2>
<h3>Assumption</h3>
1.f(x) is a continuous function in interval [a, b]<br>
2.f(a) * f(b) < 0<br>
<h3>Steps:</h3>
1. Find middle point : x = (af(b) -bf(a)) / (f(b) - f(a)) <br>
2. If f(c) == 0, then c is the root of the solution<br>
3. Else f(c) != 0<br>
       * If value f(a)*f(c) < 0 then root lies between a and c. So we recur for a and c<br>
       * Else If f(b)*f(c) < 0 then root lies between b and c. So we recur b and c.<br>
       * Else given function doesn’t follow one of assumptions.<br>
 
<h1>***Newton_Rafson.cpp</h1>
<p><b>This is the numerical method for finding an approximate root of a function. This method is used to improve the value of the root obtained from false position and bisection method. This method requires just a root initially by assumption.</b></p>
In this method intitially we select a root x_0. Then we can find out the roots using the formuls x_1 = x_0 - (f(x_0)/f'(x_0)).
