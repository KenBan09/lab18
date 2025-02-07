#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap( Rect R1 , Rect R2){
	double xr = min(R1.x+R1.w , R2.x+R2.w) ;
	double xl = max(R1.x,R2.x);
	double yt = min(R1.y,R2.y) ;
	double yb =  max(R1.y-R1.h , R2.y-R2.h);

	if(xl<xr && yt>yb) return (xr - xl)* (yt - yb);
	else return 0;



}
