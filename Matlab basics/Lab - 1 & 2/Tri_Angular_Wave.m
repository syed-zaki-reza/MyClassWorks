A=100;
w0=10*pi;
rho=.5;
t=0:.01:1;
sq=A*sawtooth(w0*t,rho)
plot(t,sq)
