clc
clear all
close all


a = [1, -.5];
b = [2];

zi = filtic(b,a,[3]);
x = (-.5).^[0:10];
y = filter(b,a,x,zi);

stem(y)