clc
clear all
close all
n=17/3-1;
x=cos([0:(17/3)-1]*(6*pi/17)+pi/3);
y=fft(x)/(17/3)
