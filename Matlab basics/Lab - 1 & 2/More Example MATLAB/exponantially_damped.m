A = 1;
w0 = 20*pi;
phi = 0;
a = 4;
t = -0.5:0.005:0.5;
expsin = A*sin(w0*t).*exp(abs(a*t));
stem(t,expsin)