clc
clear all
close all

i=1;
for t=0:.001:10
    if (t>2 && t<4)
    x(i)=2;
    elseif (t>6 && t<8)
        x(i)=1;
    else
        x(i)=0;
    end
    i=i+1;
end
t=0:.001:10;

plot(t,x)
axis([-1 11 -1 11])