clc
close all
clear all
t=0:.2:12;
y1=5*cos(2*pi*3/12*t);
y2=exp(-.4*t)
y=y1.*y2;
subplot(3,1,1)
stem(t,y1)
subplot(3,1,2)
stem(t,y2)
subplot(3,1,3)
stem(t,y);
grid on
