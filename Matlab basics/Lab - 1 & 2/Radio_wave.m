clc
clear all
close all

t = -100:.001:100;
w=2*pi*t;
y=cos(w*.125).*cos(w*10);
plot(t,y);
axis([-12 12 -2 2])
grid on;