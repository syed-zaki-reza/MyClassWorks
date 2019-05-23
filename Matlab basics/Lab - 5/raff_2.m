clc;
clear all
close all

n=0:9;
a = [1, -.5];
b = [0, 1];

zi = filtic(b,a,[1, 0]);
x = ones(1,10);
y = filter(b,a,x,zi);

stem(n,y)