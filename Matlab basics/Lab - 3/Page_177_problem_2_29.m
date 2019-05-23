close all
clear all
clc

h = .9.^[2:12];
x = 2*ones(1, 14);
n = 0:23;

y = conv(h, x);

stem(n,y)