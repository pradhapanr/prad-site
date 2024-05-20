% Solve a system of equations with PA = LU
function x = solve_lu(A, b)
    [L, U, P] = lu(A);
    x = U \ (L \ (P * b));
end