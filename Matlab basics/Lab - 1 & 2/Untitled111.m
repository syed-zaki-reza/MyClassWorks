close all
clear all
clc


i = 1;
for t = -30:1:30
    if t>-4
        x(i) = 1;
    else
        x(i) = 0;
    end
    i = i+1;
end

i = 1;
for t = -30:1:30
    if t>4
        h(i) = 1;
    else
        h(i) = 0;
    end
    i = i+1;
end

t = -30:1:30;
stem(t,x)
hold on
stem(t,h)


j = 1;
for t = -30:1:30
    i = 1;
    for t = -30:1:30
        y(j) = y(j) + (x(i) * h(j-i+1))
        i = i+1;
    end
    j = j+1;
end


t = -30:1:30;

stem(t,y)