clc
close all
clear all
t=(-22:.2:20)-.0001;
y1=5*sin(2*pi*3/40*t)./t;
stem(t,y1)