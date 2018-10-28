## Question:
<pre>
  Suppose that str is an array of characters. Which one of the following statements is not
  equivalent to the other three?

  (a) *str = 0;
  (b) str[0] = '\0'
  (c) strcpy(str, "");
  (d) strcat(str, "");
</pre>

## Answer:
<pre>
The correct answer is (d). The other statements make the first character a null character, whereas (d) 
adds it at the end of the array, rather than making a substitution like strcpy.
</pre>
