A = 1.5;
w0 = 2*pi;
rho = 0.5;
t = 0:0.001:5;
sq =A*sawtooth(w0*t,rho);
x = plot(t,sq);
stem(x , t)
axis([0 5 0 10])