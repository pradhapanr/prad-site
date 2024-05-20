function [x,flag] = vectornewton(f,Df,x0,tol,maxiter)
flag = -1;
x = x0;
for i = 1:maxiter 
    x_old = x;
    x = x - Df(x)\f(x);
    if norm(x - x_old) <= tol
        flag = i;
        break
    end
end
end