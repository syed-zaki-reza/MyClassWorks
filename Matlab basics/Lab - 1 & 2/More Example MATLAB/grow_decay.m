A = 1;
w0 = 40*pi;
phi = 0;
a = 4;
t = -1:0.001:1;
y = A*sin(w0*t+phi).*exp(-abs(a*t));
plot(t,y)
