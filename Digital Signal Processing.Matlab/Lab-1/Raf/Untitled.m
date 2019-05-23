clc;
clear all;
close all;

A = input('Apmlitude = ');
Theta = input('Theta = ');

Theta = (pi * Theta) / 180;

n = 0:.01:63;

y = A * sin((2 * pi * (1/8) *n) + Theta);

plot(n, y)

title('Fig : Figure of sine function.')

xlabel('Time -->')
ylabel('Apmlitude -->')