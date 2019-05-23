close all;
clc;
clear all;

im1 = imresize( imread('black-and-white-love-petals.jpg'), [720 1080]);

im2 = imresize( imread('umhADC.jpg'), [720 1080]);

im = im2 - im1;

x = imshow(im)
