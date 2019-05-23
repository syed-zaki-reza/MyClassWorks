clc
clear all
close all

x = linspace(-pi, pi, 250);
y = linspace(-pi, pi, 250);
z = sin(x'.*y);

mesh(x, y, z)