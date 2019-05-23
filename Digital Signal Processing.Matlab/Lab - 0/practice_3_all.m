close all;
clc;

f = 1.5/31;
a = 1;

t = -10:20;
[a b]=size(t);

sgnl = a*sin(2*pi*f*t);


subplot 611
stem(t,sgnl)
title('Fig : Main Signal');

dcmt = decimate(sgnl,2);
lngth = length(dcmt);

subplot 612
stem([0:lngth-1],dcmt)
title('Fig : Decimated Signal');

intp = interp(dcmt,2);
lngth = length(intp);

subplot 613
stem([0:lngth-1],intp)
title('Fig : Interpolated Signal');

resam = resample(sgnl,18,6);
lngth = length(resam);

subplot 614
stem([0:lngth-1],resam)
title('Fig : Resampled Signal');

downsam = downsample(sgnl,2);
lngth = length(downsam);

subplot 615
stem([0:lngth-1],downsam)
title('Fig : Downsampled Signal');

upsam = upsample(sgnl,4);
lngth = length(upsam);

subplot 616
stem([0:lngth-1],upsam)
title('Fig : Upsampled Signal');

