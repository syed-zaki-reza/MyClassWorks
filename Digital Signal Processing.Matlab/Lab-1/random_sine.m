clear all;
close all;
clc;

r1 = 13.*rand(11,1);
r2 = 23.*rand(11,1);


w = 1;
t = 0:.01:100;
f1 = 1;
f2 = 3;

s = sin(w.*t*f1);

rs = r1+r2;
rm = r1.*r2;

subplot(4,1,1)
plot(r1)
subplot(4,1,2)
plot(r2)
subplot(4,1,3)
plot(rs)
subplot(4,1,4)
plot(rm)



