% Plot F and its Taylor series approximation up to the nth degree term
function plotF(x, n)
    F_values = F(x);
    FTaylor_values = FTaylor(x, n);

    figure;
    plot(x, F_values, 'b', 'LineWidth', 2, 'DisplayName', 'F(x)');
    hold on;
    plot(x, FTaylor_values, 'r--', 'LineWidth', 2, 'DisplayName', 'Taylor Series');
    xlabel('x');
    ylabel('y');
    title('F(x) and its Taylor Series');
    legend('Location', 'Best');
    grid on;
    hold off;
end
