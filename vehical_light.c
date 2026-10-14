#include<reg51.h>
sbit IR1 = P1^0;
sbit IR2 = P1^1;
sbit IR3 = P1^2;
sbit IR4 = P1^3;

sbit ldr = P1^4;

sbit light1 = P2^0;
sbit light2 = P2^1;
sbit light3 = P2^2;
sbit light4 = P2^3;

void main()
{
	light1 = 0;
	light2 = 0;
	light3 = 0;
	light4 = 0;
	while(1)
	{
		unsigned int a;
		unsigned char b;
		if(ldr == 1)
		{
		if (IR4 == 1)
		{
			light1 = 0;
			light2 = 0;
			light3 = 0;
			light4 = 1;
		}
		else if (IR3 == 1)
		{
			light1 = 0;
			light2 = 0;
			light3 = 1;
			light4 = 1;
		}
		else if (IR2 == 1)
		{
			light1 = 0;
			light2 = 1;
			light3 = 1;
			light4 = 0;
		}
		else if (IR1 == 1)
		{
			light1 = 1;
			light2 = 1;
			light3 = 0;
			light4 = 0;
		}
		else 
		{
			light1 = 0;
			light2 = 0;
			light3 = 0;
			light4 = 0;
		}
	}
	else 
		{
			light1 = 0;
			light2 = 0;
			light3 = 0;
			light4 = 0;
		}
	}
}	