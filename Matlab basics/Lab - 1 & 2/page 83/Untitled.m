clc
clear all
close all

a=1;
w0=10*pi;
rho=.5;
t=0:.001:1;
sq=a*square(w0*t,rho);
stem(t,sq);
axis([0 1 -10 10]);

grid on