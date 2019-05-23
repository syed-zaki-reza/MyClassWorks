A = 1;
w1 = 2*pi;
w2 = 4*pi;
w3 = 8*pi;
phi = pi/20;
t = 0:0.0001:1;
plot(t,sin(w1*t+phi),'--',t,sin(w2*t+phi),'-',t,sin(w3*t+phi),':')
