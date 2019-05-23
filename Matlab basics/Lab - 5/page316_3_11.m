clc
clear all
close all

x = ones(1, 24) + sin([0:23]*pi/12 + 3*pi/8)
X = fft(x)/24

stem(X, 'g --')
