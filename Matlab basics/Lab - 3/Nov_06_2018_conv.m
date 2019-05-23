close all
clear all
clc

h = [1, .5];
x = [2, 4, 0];

y = conv(x, h);

plot(y)