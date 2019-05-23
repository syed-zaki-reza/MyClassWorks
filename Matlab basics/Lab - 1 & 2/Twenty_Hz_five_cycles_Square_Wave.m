clc
clear all
close all

a=2.5;



t=-0.01:.005:.25;
f=20;
w0=2*pi*f;


y=a*square(w0*t)+2.5;

plot(t,y)
axis([-.5 .5 -1 10])