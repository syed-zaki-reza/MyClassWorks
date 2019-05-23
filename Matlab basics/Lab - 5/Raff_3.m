clc
clear all
close all


a = [1, .25, -.125];
b = [1, 1];

zi = filtic(b,a,[4, -2]);
x = (-1).^[0:10];
y = filter(b,a,x,zi);

stem(y)