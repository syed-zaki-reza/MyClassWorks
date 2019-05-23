clc
clear all
close all

B=1
a=.5
t=-10:.01:10
y=B*exp(a*t)
plot(t,y);

grid on