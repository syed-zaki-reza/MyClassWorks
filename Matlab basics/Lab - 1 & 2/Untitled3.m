clc
clear all
close all

t=-10:.01:10;
x=1+square(2*pi*.25*t,20);
y=2*sin(5*pi*t).*x;

plot(t,y)

axis([-10 10 -10 10])