#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2){
double xlap=0,ylap=0;
double sum=0;
xlap=min(R2->x+R2->w,R1->x+R1->w)-max(R2->x,R1->x);
ylap=min(R1->y,R2->y)-max(R1->y-R1->h,R2->y-R2->h);
sum=xlap*ylap;
if(sum>0)
return sum;
else
return 0;
}
int main()
{
	
	Rect R1={1,1,5,5};
	Rect R2={2,2,5,5};
	cout<<overlap(&R1,&R2);
}