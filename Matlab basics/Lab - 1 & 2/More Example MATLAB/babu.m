A = 1;
w0 = 10*pi;
phi = 0;
a = 5;
t = 0:0.01:1;
expsin = A*sin(w0*t+phi).*exp(-a*t);
stem(t,expsin)