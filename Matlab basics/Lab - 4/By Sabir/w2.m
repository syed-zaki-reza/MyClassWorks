clc
close all
clear all
A1=3;
A2=1;
a=6;
w=2*pi*10;
phi=0;
t=0:.001:1;
y=A1*sin(w*t+phi).*exp(a*t)

plot(t,y)
