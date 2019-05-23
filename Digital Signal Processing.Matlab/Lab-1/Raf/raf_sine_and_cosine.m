clc
clear all
close all

t = -10:.1:10;

a = 1;
phi = 0;
w0 = 2;

y2 = a*cos(w0*t+phi);
y1 = a*sin(w0*t+phi);

plot(t,y2);
hold on
stem(t,y1);

axis([-12 12 -2 2])