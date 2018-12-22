## Question 4

(K&R Exercise 5-5) Write a version of the library function <code>strncpy</code>, which operate on at most the first n characters of their argument strings. For example, <code>strncpy(s,t,n)</code> copies at most n characters of t to s. **Be sure to use pointers**. Verify that your function works with at least 3 examples.

Compile Steps:

Output:

gcc question4.c 
./a.out
my_strncmp(Danny, Hong, 2) = -4
my_strncat(Danny, Hong, 3) = DannyHong
my_strncpy(Danny, Hong, 4) = Hong
