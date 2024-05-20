f = @(x) (x - 2)^3;
df = @(x) 3 * (x - 2)^2;
d2f = @(x) 6 * (x - 2);

x0 = 3;

tol = 1e-8;
max_iter = 100;

[root, iterations] = modifiednewton(f, df, d2f, x0, tol, max_iter);

figure;
errors = zeros(1, iterations);
for iter = 1:iterations
    errors(iter) = abs(f(root));
    root = modifiednewton(f, df, d2f, root, tol, 1);
end

semilogy(1:iterations, errors, '-o');
title('Modified Newton''s method convergence');
xlabel('iters');
ylabel('abs error');
grid on;
