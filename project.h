#include<stdio.h>
float per,b;
int a;
void CSE(int ar,int lr)
{
	a=lr-ar;
	b=(float)a/lr;
    per=(b+0.1)*100;
    if(per>100.00)
        printf("You have 100.00 percent chance to get CSE\n");
    else
        printf("You have %.2f percent chance to get CSE\n",per);	
}
void CSM(int ar,int lr)
{
	a=lr-ar;
	b=(float)a/lr;
    per=(b+0.12)*100;
    if(per>100.00)
        printf("You have 100.00 percent chance to get CSM\n");
    else
        printf("You have %.2f percent chance to get CSM\n",per);	
}
void CSD(int ar,int lr)
{
	a=lr-ar;
	b=(float)a/lr;
    per=(b+0.12)*100;
    if(per>100.00)
        printf("You have 100.00 percent chance to get CSD\n");
    else 
        printf("You have %.2f percent chance to get CSD\n",per);	
}
void IT(int ar,int lr)
{
	a=lr-ar;
	b=(float)a/lr;
    per=(b+0.15)*100;
    if(per>100.00)
        printf("You have 100.00 percent chance to get IT\n");
    else 
        printf("You have %.2f percent chance to get IT\n",per);	
}

