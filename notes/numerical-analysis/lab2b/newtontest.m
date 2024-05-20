clear
clc
f = @(x)(x+1).*(x-1/2);
df = @(x)2*x+1/2;
profile on
[x1 , fl1] = mynewton (f ,df , -1.2 ,0.001 ,10)
[x2 , fl2] = mynewton (f ,df ,0.6 ,0.001 ,10)
profile off
profile viewer
for i = 1: fl1
    ex(i) = abs(x1(i)+1);                          %error for |x_n-x|
    ex1(i) = abs(x1(i+1)+1);                       %error for |x_(n+1)-x|
    logex(i) = log(abs(x1(i)+1));                  %error after log for |x_n-x|
    logex1(i) = log(abs(x1(i+1)+1));               %error after log for |x_x(n+1)-x|
end

% Compute errors for the second set of iterations (x2)
for i = 1:fl2
    ex2(i) = abs(x2(i) - 0.5);  % Adjust the expected root value if necessary
    ex3(i) = abs(x2(i + 1) - 0.5);
    logex2(i) = log(abs(x2(i) - 0.5));
    logex3(i) = log(abs(x2(i + 1) - 0.5));
end

% Plot errors for the first set of iterations
figure(1)
plot(logex, logex1, '.', 'MarkerSize', 15)
title('Convergence for Root x = -1')
xlabel('log(|x_n + 1|)')
ylabel('log(|x_{n+1} + 1|)')

% Plot errors for the second set of iterations
figure(2)
plot(log(ex2), log(ex3), '.', 'MarkerSize', 15)
title('Convergence for Root x = 0.5')
xlabel('log(|x_n - 0.5|)')
ylabel('log(|x_{n+1} - 0.5|)')