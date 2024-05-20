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