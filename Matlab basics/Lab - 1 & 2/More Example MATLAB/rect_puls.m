clear all
close all
f = 500;
t = 0:1/f:10;
T = 1;
x = rectpuls(t-2.5,T);
plot(t,x)
axis([0 10 -0.5 2])