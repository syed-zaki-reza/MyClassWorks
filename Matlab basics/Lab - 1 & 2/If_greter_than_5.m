close all
clear all
clc


i=1;
for  t = -30:30;
    if(t>=-5)
        w(i)=1;
    else 
        w(i)=0;
    end
    i=i+1;
end
t=-30:30;
stem(t,w)