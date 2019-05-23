A = 1;
w0 = 10*pi;
phi = 0;
a = 4;
t = -1:0.001:1;
y = A*sin(w0*t+phi).*(exp(-abs(a*t)));
%y = A*sin(w0*t+phi);
%y =(exp(-abs(a*t)));
plot(t,y)
