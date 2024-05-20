xs = linspace(-4, 4, 50);
expCurve = exp(xs);
h2Curve = expHorner(xs, 2);
h3Curve = expHorner(xs, 3);
h5Curve = expHorner(xs, 5);

plot(xs, expCurve, xs, h2Curve, xs, h3Curve, xs, h5Curve);
legend('exp(x)', 'H_2(x)', 'H_3(x)', 'H_5(x)');
title('exp(x) computed with Taylor polynomials and Horners method');
xlabel('x')
ylabel('f(x)')