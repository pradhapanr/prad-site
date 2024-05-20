disp('### Calculation of the volume of liquid in a spherical tank')

r=1; h=0.7;

fprintf('The tank has radius r=%5.1f meters\n', r)
fprintf('The liquid depth has h=%5.1f meters\n', h)

V = pi * h^2 * (3*r-h)/3

fprintf('The volume of liquid is V=%10.2f cubic meters\n', V)

disp('### END OF VOLUME CALCULATION\n')