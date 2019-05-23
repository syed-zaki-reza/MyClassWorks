clear all
close all
clc
i = 1;
f = 0.1;
for n=-1/f:0.00001:1/f
    if (-1/2*f)<=n&&n<=(1/2*f)
        w(i) = cos(2*pi*f*n);
    else
        w(i) = 0;
    end
    i = i + 1;
end
x=-1/f:0.00001:1/f;
plot(x,w)
axis([-1/1.5*f 1/1.5*f -1 2])
    