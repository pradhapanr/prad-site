% Plot the relative and absolute error between F and its Taylor series approx. with n terms
function plotFTaylorError(x, n, showErrorBound)
    % Evaluate F(x) and its Taylor series up to the quartic term
    F_values = F(x);
    FTaylor_values = FTaylor(x, n);

    absolute_error = abs((F_values - FTaylor_values));
    relative_error = absolute_error ./ F_values;
    error_bound = abs(x .^ (n + 1) ./ (factorial(n + 3)));

    figure;
    plot(x, relative_error, 'b', 'LineWidth', 2, 'DisplayName', 'Relative Error');
    hold on;
    plot(x, absolute_error, 'g', 'LineWidth', 2, 'DisplayName', 'Absolute Error');
    hold on;
    if showErrorBound
        plot(x, error_bound, 'r--', 'LineWidth', 2, 'DisplayName', 'Error Bound');
    end
    xlabel('x');
    ylabel('y');
    set(gca, 'YScale', 'log');

    title('Absolute and Relative Errors of F(x) and its Taylor Series (log-scale)');
    legend('Location', 'Best');
    grid on;
    hold off;
end