clear all
close all
f = 500;
t = 0:1/f:10;
a = 0.2;
x = rectpuls(t-0.2,a);
plot(t,x)
axis([0 1 -0.5 2])