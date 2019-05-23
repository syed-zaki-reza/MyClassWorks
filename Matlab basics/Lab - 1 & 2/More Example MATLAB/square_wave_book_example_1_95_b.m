clc
close all
clear all
a = 2.5;
fc = 20;
w0 = 2*pi*fc;
t = 0:0.001:0.25;
y = sawtooth(w0*t,);
plot(t,y)
axis([-0.1 0.27 -5 5])