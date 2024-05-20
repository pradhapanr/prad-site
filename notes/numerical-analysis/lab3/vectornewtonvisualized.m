function [x, flag] = vectornewtonvisualized(f, Df, x0, tol, maxiter)
    flag = -1;
    x = x0;
    
    % Initialize vectors to store iteration information
    iteration_numbers = zeros(maxiter, 1);
    norms_of_steps = zeros(maxiter, 1);
    
    for i = 1:maxiter 
        x_old = x;
        
        % Compute the Newton step
        step = Df(x)\f(x);
        
        % Update the solution
        x = x - step;
        
        % Store iteration information
        iteration_numbers(i) = i;
        norms_of_steps(i) = norm(step);
        
        % Check for convergence based on the norm of the step
        if norms_of_steps(i) <= tol * (1 + norm(x))
            flag = i;
            break
        end
    end
    
    % Plot the convergence
    figure;
    plot(iteration_numbers(1:flag), norms_of_steps(1:flag), '-o');
    title('Convergence of Newton''s Method');
    xlabel('Iteration');
    ylabel('Norm of Newton Step');
    grid on;
end