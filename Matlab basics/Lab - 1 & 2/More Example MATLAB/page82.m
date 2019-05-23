A = 8;
omega = pi/5;
n = 0:25;
rho = 0.5;
x = A*square(omega*n+rho);
stem(n, x)
axis([0 25 -10 10])
