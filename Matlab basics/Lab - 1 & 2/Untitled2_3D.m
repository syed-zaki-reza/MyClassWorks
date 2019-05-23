clc
clear all
close all

t = -pi:0.01:pi;
x = sin(2.5*t);
y = cos(500*t);
z = (x'.*y);

mesh(x,y,z)