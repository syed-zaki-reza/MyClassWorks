A = 1;
w1 = 1*pi;
w2 = 2*pi;
w3 = 4*pi;
phi = pi/20;
t = -2:0.0001:2;
plot(t,sin(w1*t+phi),'b.-',t,sin(w2*t+phi),'r--',t,sin(w3*t+phi),'c-.')
