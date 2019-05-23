A = 1.5;
w0 = 2*pi;
rho = 0.5;
t = 0:0.001:5;
sq =3.5+ A*sawtooth(w0*t,rho);
plot(t,sq)
axis([0 5 0 10])