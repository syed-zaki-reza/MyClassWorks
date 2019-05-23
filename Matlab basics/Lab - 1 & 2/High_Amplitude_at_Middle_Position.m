clc
clear all
close all
A=1;
a=2;
w0=5*pi;
phi=0;
t=-2:.001:2;
y=A*sin(w0*t+phi).*exp(-abs(a*t));

plot(t,y)
grid on