close all;
clc;
clear all;

x = imread('7.jpg');

%imresize(x,[720 1080]);

[n, m, b] = size(x);

for i = 1:n
    for j = 1:m
        z(i, j) = .1 * x(i, j, 1) + .6 * x(i, j, 2) + .3 * x(i, j, 3);
        
        if (z(i, j)== 255)
            a(i, j) = 255;
            
        elseif (z(i, j) >= 204)
            a(i, j) = 153;            
       
        elseif (z(i, j) >= 153)
            a(i, j) = 102;
            
        elseif (z(i, j) >= 102)
            a(i, j) = 51; 
            
        elseif (z(i, j) >= 51)
            a(i, j) = 0;
            
        else a(i, j) = 0;
            
        end
    end
end

figure()
imshow(z)

figure()
imshow(a)

figure()
imshow(x)