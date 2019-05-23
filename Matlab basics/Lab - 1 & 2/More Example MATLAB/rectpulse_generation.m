clear all
close all
clc

t = -40:10:40;
y = heaviside(t);

plot(t,y)
axis([-40 40 -2 2])