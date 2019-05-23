[x,y]=meshgrid(-20:.01:10);
r=sqrt(x.^2+y.^2)+eps;
z=sin(r)./r;
mesh(x,y,z)