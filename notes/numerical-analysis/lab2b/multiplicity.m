clear
clc

% Define a function with a root of multiplicity 2 at x = 1
f = @(x) (x - 1).^2;

% Derivative of the function
df = @(x) 2 * (x - 1);

% Perform modified Newton's method
[x, ~] = mymodifiednewton(f, df, -100, 1e-10, 20, 2);
disp(x);

% Plot iterates
figure;
plot(x, 'o-', 'MarkerSize', 15);
title('Modified Newtons Method for Root of Multiplicity 2');
xlabel('Iteration');
ylabel('x_k');
grid on;
