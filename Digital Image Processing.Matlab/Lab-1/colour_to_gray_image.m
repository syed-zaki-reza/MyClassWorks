close all;
clc;
clear all;

im1 = imread('8.jpg');

im2 = rgb2gray(im1);

%im = .5.*im1 + 2.*im2;

%x = imshow(im2);

z = gray2rgb(im2)