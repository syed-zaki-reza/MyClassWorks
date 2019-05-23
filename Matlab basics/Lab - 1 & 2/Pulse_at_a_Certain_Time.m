clc
clear all
close all

t = -6:.001:10;

y = 2*rectpuls(t-2,10);

plot(t,y)
axis ([-6 10 -1 3])
grid on