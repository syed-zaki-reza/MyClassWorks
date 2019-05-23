clc
clear all
close all

t = -10:10;
a=1;
phi=2;
w0=10;
y=a*cos(w0*t+phi);
y1=a*sin(w0*t+phi);
plot(t,y);
hold on
plot(t,y1);
