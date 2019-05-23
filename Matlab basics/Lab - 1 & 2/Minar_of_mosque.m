clc
clear all
close all

t = -2:.001:2;

y2 = .5*(sawtooth(2*pi*1*t,.5))+.5;
y1 = .5*(square(2*pi*.5*t,50))+.5;
y3 = (.5*square(2*pi*.5*t,50)+.5);

y = y1.*y2 + y3;
plot(t,y)
%axis([-12 12 -20 20])
grid on;