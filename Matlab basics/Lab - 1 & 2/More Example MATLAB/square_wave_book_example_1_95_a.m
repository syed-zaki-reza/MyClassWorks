clc
close all
clear all
a = 2.5;
fc = 20;
w0 = 2*pi*fc;
rho = 60;
t = 0:0.001:0.25;
y = a*square(w0*t,rho);
plot(t,y)
axis([-0.25 0.3 -5 5])