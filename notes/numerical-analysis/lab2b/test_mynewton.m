f = @(x)(x+1).*(x-1/2);
df = @(x)2*x+1/2;
[x1,fl]=mynewton(f,df,-1.2,0.001,10);
[x2,fl]=mynewton(f,df,0.6,0.001,10);
% the roots are x1 = -1 and x2 = 0.5, we expect approximately these values
disp(x1);
disp(x2);
