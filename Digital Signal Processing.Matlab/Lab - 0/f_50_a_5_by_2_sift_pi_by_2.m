close all;
clc;

f = .08;
a = 2.5;

t = 0:.01:50;

s = a*sin(2*pi*f*t);
ss = a*sin(2*pi*f*t + (pi/2));

subplot(2,1,1)
plot(t,s)
subplot(2,1,2)
plot(t,ss)