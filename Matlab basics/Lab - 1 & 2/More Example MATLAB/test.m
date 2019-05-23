a=1;
x = 5;
t=-1:0.01:1;
w0 = 10*pi;
b = sin(w0*t);
y = a*b.*log(x*t);
plot(t,y,'c-+')