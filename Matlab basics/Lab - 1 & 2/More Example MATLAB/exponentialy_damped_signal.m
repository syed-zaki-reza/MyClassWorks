A = 1;
w0 = 10*pi;
phi = 0;
a = 4;
t = 0:0.009:1;
y = A*sin(w0*t+phi).*exp(-a*t);
%y = plot(t,y);
%n = -10:10;
%z = t.*y;
stem(t, y)