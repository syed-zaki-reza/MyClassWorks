clc
clear all
close all

t=-10:2:10;
y=t.*t;
stem(t,y)
hold on
plot(t,abs(t))