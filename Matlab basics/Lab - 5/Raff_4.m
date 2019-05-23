clc
clear all
close all


a = [1, -.75, .125];
b = [2];

zi = filtic(b,a,[1, -1]);
x = 2.*ones(1,10);
y = filter(b,a,x,zi);

stem(y)