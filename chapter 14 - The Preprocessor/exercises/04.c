## Question:
<pre>
For each of the folloing macros, give an example that illustrates a problem with
the macro and show how to fix it.

(a) #define AVG(x,y) (x+y)/2
(b) #define AREA(x,y) (x)*(y)
</pre>

## Answer:
<pre>
(a) it needs more parentheses to work as intended (((x)+(y))/2)
(b) needs parentheses around the replacement-list (i.e. outer parentheses) ((x)*(y))
</pre>
