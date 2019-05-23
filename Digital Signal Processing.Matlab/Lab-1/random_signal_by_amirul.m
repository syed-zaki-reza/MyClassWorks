close all;
clc;

n = 0:0.1:20;

x1 = 2*sin(2*pi*n);

subplot(3,1,1)
plot(n, x1)

[a N] = size(n);

x2 = rand(1,N);

subplot(3,1,2)
plot(n, x2)

x = x1+x2;
subplot(3,1,3)
plot(n,x)


