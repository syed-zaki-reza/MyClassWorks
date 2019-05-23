clear all
close all
clc
n=0:9;
a=[1,0,-1/9];
b=[0,1];
x=ones(1,10);
zi=filtic(b,a,[1,0]);
y=filter(b,a,x,zi);
stem(n,y);'