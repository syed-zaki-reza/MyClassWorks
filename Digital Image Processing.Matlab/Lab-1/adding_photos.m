close all;
clc;
clear all;

im1 = imread('8.jpg');

im2 = imread('7.jpg');

im = .5.*im1 + 2.*im2;

x = imshow(im)
