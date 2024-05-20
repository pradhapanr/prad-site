function [x,flag] = mynewton(f,fx,x0,tol,maxiter)
% Author : Spencer Kelly and David Tran
% Date : 2024.02.11
% Purpose : Compute approximate solution to f(x)=0 via Newton's Method
%
% Inputs :
% f -- A function handle for f(x) being solved
% fx -- A function handle for the f'(x)
% x0 -- Initial guess for the fixed point
% tol -- Tolerance of the solution .
% maxiter -- Maximum number of iterations .
%
% Outputs :
% x -- Vector containing the iterates of the Newton's Method
% flag -- Flag specifying if the solution has been obtained :
% = The number of iterations taken to converge .
% = -1 If the algorithm has not converged in maxiter iterations .
%
flag = -1;                                   %give inital value of flag and xold
x(1) = x0;
for i = 1:maxiter                            %for loop do the iteration with 'maxiter' given for the maximum steps
    x(i+1) = x(i) - f(x(i))/fx(x(i));        %Newton
    %fprintf('%f\n',xs);
    if abs(x(i+1)-x(i)) <= tol               %if x_new - x_old <= tol, break the loop, let flag = # of steps
        flag = i;
        break
    end                                      %if not, do next iteration
end
end