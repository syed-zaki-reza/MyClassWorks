rf = 0.25;
span = 4;
sps = 3;

h1 = rcosdesign(rf,span,sps,'normal');
fvtool(h1,'impulse')