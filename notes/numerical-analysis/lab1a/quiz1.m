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

clc
clear clf
close all

7 * 9

7 + 9

5*3+4

100+100 % own example


factorial(3) % own example

%like this

log(10000)

log(3.2 * 8.5)

log(3.2) + log(8.5)

pi

a = 3*9;

str = 'Hello, world!';

disp(str);

run ../lab0/myliquid.m

for var = 1:4
    disp(var)
end

% ranges are vectors

% own examples
x = [1,2,3,4,5]
for i = x
    disp(x)
end

if pi == 3
    disp('hello')
else
    disp('goodbye')
end

clc
clear clf
close all

type expTaylorPoly.m;

x = linspace(-1, 1, 2019);
T = expTaylorPoly(x, 10);

% what happens when empty?
% own example
linspace(0, 0, 100);


% x^2 this doesnt work, bad dimensions


% dot for elementwise
x.^2;

plot(x, T)
plot(x, T, x, x)
loglog(x, T) % own example, try loglog plot

type expHorner.m;
type plotOfExp.m;

evalc plotOfExp;

