clear
clc

% Define the function and its derivative
f = @(x) (x + 1) .* (x - 1/2);
df = @(x) 2 * x + 1/2;

profile on
% Perform Newton's method
[x, ~] = mynewton(f, df, -100, 1e-10, 100);

% Compute differences
d = diff(x);

% Compute ratios
r = d(2:end) ./ d(1:end-1);
profile off
profile viewer

% Plot ratios
figure;
plot(r, 'o-', 'MarkerSize', 8);
title('Difference Ratios for Initial Guess x0 = -1000');
xlabel('Iteration');
ylabel('Ratio (r_k)');
grid on;
