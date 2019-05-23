close all;
clc;

%r = rand;

A= 10;
f0 = 100;
phi = pi/4;
fs = 400;
Ts = 1./fs;
T = 1;

N = fs * T;
Ts = 1/fs;

n = 0:1/400:T;

x = A*cos(2*pi*f0*n + phi);

figure
plot(n,x)


a = fft(x);

figure
plot(a)

