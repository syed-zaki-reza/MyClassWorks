A = 0.7;
w0 = 1*pi;
rho = 50;
a = 0.5;
t = -8:0.001:8;
sq = A*square(w0*t,rho).*exp(-abs(a*t));
plot(t,sq,'b*')
