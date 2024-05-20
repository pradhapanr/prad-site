clc
clear clf
close all

x = [1,2,3]
y = [1;2;3]

A = x * y % this is inner product
B = y * x % but this is outer product

B .^ 3 % this gives element wise multiplication

sin(cos(B)) % function composition is intuitive

x(1,3) % one based indexing, returns 3
x(1:3) = 10 % can assign to slices, gives 10 10 10

(3:5)' % can use operations on intermediate expressions like the following