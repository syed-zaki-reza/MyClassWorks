clc
clear all
close all
A=4;
a=.25;
t=-2:.001:2;
x=A*exp(-abs(a*t))
plot(t,x)