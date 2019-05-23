clc
close all
clear all
t=(-22:.2:20)-.0001;
y1=10*sin(2*pi*3/40*t)./t;
y2=5*sin(2*pi*3/40*t)./t;
y=[y1,y2]
t=1:length(y)
plot(t,y)