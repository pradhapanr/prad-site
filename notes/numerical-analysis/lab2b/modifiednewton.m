function [root, iterations] = modifiednewton(f, df, d2f, x0, tol, max_iter)
    iterations = 0;
    x = x0;
    while iterations < max_iter
        fx = f(x);
        dfx = df(x);
        d2fx = d2f(x);
        
        if abs(fx) < tol
            root = x;
            return;
        end
        x = x - (dfx / d2fx) * (fx / dfx);
        iterations = iterations + 1;
    end
    root = x
end
