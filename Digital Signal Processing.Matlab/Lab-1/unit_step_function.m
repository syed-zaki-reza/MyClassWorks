close all;
clc;

t = 0:1:10;

prompt = 'give a value from -10 to 10 :   ';
x = input(prompt) +1 ;
t1 = zeros(11,1);

for i = 0:1:10
    if(i == x) 
        t1(i) = 1;
      
     
    end
end
t = 0:1:10;

stem(t,t1)
        