clear all;
clc;

q = imread('tmax330_final.jpg');
z = rgb2gray(q);

[m, n, k] = size(z);

for i=1:m
    for j=1:n
        zw(2*i,2*j) = z(i,j);
        zw(2*i-1,2*j-1) = z(i,j);
    end
end

figure()
r = imshow(zw)
figure()
r2 = imshow(z)

        