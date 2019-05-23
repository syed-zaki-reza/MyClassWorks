clc
close all
clear all

t=-1:.1:20;

f=.25;

y1=square(2*pi*f*t,50);
y2=square(2*pi*f*t,25);

y=y1+y2;

plot(t,y)
axis([-2 11 -2 4])