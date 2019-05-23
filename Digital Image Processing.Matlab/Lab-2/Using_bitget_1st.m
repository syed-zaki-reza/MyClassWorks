close all;
clc;
clear all;

y = imread('wood.jpg');
x = rgb2gray(y);

img= imread('cameraman.tif');

primo = bitget(img, 1);
secondo = bitget(img, 2);
terzo = bitget(img, 3);
quarto = bitget(img, 4);
quinto = bitget(img, 5);
sesto = bitget(img, 6);
settimo = bitget(img, 7);
ottavo = bitget(img, 8);

subplot(4,2,1), imshow(primo, []), title('Primo piano di bit');
subplot(4,2,2), imshow(secondo, []), title('Secondo piano di bit');
subplot(4,2,3), imshow(terzo, []), title('Terzo piano di bit');
subplot(4,2,4), imshow(quarto, []), title('Quarto piano di bit');
subplot(4,2,5), imshow(quinto, []), title('Quinto piano di bit');
subplot(4,2,6), imshow(sesto, []), title('Sesto piano di bit');
subplot(4,2,7), imshow(settimo, []), title('Settimo piano di bit');
subplot(4,2,8), imshow(ottavo, []), title('Ottavo piano di bit');

