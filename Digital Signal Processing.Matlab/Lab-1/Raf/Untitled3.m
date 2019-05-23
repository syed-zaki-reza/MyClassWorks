clc;
clear all;
close all;

t = 0:.001:1;

a1 = 2;
a2 = 3;

x = a1 * sin(2 * pi * 5 * t);
y = a2 * sin(2 * pi * 3 * t);

xy = x .* y;

x_y = x + y;

subplot(2,2,1)
plot(t, x, 'bla--')

title('Fig : 1st sine function.')

xlabel('Time -->')
ylabel('Apmlitude -->')

subplot(2,2,2)
plot(t, y, '--')

title('Fig : 2nd sine function.')

xlabel('Time -->')
ylabel('Apmlitude -->')

subplot(2,2,3)
plot(t, xy, 'r--')

title('Fig : Multlipication of sine function.')

xlabel('Time -->')
ylabel('Apmlitude -->')

subplot(2,2,4)
plot(t, x_y, 'm--')

title('Fig : Addition of sine function.')

xlabel('Time -->')
ylabel('Apmlitude -->')