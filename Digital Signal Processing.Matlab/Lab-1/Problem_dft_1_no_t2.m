clc;
clear all;

t = 0:.1:1;

s1 = 2*cos(2*pi*t - pi/2);
s2 = 3*cos(4*pi*t);


figure

subplot 221
stem(t,s1)

subplot 222
stem(t,s2)


f = 5 + s1 + s2;

subplot 223
stem(t,f)



k = 1:3;

fk = 5 + 2*cos(pi*k*.5 - pi/2) + 3*cos(pi*k);

figure
stem(fk)

N = 4;
n = 1:N;

x = 0;

for n = 1:N
    x = x + fk.*exp(-2*pi.*n.*k./N);
end
    
figure
stem(x)
    
    
    
    
