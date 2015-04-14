# lab3
How to compile mine program for question A : g++ -o lab3_a lab3.cpp

size = 1000
sort(): 0 seconds
v1 and v2 are different
insertion_sort(): 0 seconds
v1 and v2 are the same.

size = 10000
sort(): 0 seconds
v1 and v2 are different
insertion_sort(): 1.28 seconds
v1 and v2 are the same.

size = 100000
sort(): 0.04 seconds
v1 and v2 are different
insertion_sort(): 127.79 seconds
v1 and v2 are the same.

size = 1000000
sort(): 0.5 seconds
v1 and v2 are different
insertion_sort : out of time.

explanation:

sort:
(1000000 * (log(1000000))) / (100000 * (log(100000))) ~= 12
0.5/0.04 = 12.5 ~= 12

insertion_sort:
(100000)^2/(10000)^2 = 10^2
127.79/1.28 ~= 100 
