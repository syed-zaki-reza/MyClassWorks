clc;
clear all;
close all;

t = 0:.01:10;

a = .1; %input('Apmlitude = ');
% Theta = input('Theta = ');

x = exp(a * t);

plot(t, x)
title('Fig : Figure of exponential function.')