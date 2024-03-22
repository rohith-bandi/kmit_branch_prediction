#include<stdlib.h>
#include"prediction.h"
int main()
{ 	printf("                                            *****************\n");
	printf("                                             WELCOME TO KMIT \n");
	printf("                                            *****************\n");
	printf("\n\n");
	int n,i,C;
	printf("ENTER 1 TO KNOW ABOUT KMIT COLLEGE\n");
	printf("ENTER 2 TO KNOW ABOUT KMIT PLACEMENTS AND INTERNSHIPS\n");
	printf("ENTER 3 TO KNOW THE LOCATION OF KMIT COLLEGE\n");
	printf("ENTER 4 TO PREDICT YOUR BRANCH USING YOUR EAMCET RANK\n");
	for(i=0;i<100;i++)
	{
		printf("\n\n");
	    printf("ENTER YOUR OPTION:");
	    scanf("%d",&n);
	    switch(n)
	    {
		    case 1:
			    {
				    system("start file:///C:/Users/bandi/Downloads/KMIT%20INFORMATION.pdf");
				    break;
			    }
		    case 2:
			    {
			        system("start file:///C:/Users/bandi/Downloads/KMIT%20PLACEMENTS.pdf");
			        break;
			    }
		    case 3:
		        {
			        system("start https://goo.gl/maps/ue1P2bVtHuRBbkZGA");
				    break;
			    }
		    case 4:
			    {
				    int r,l=50000;
				    printf("Enter your eamcet rank:");
				    scanf("%d",&r);
				    CSE(r,l);
				    CSM(r,l);
				    CSD(r,l);
				    IT(r,l);
				    break;
			    }
			default:
			    {
			    	printf("Invalid option");
				}
	   }
	   printf("\n\n");
	   printf("Enter 1 to continue\n");
	   printf("Enter 2 to stop\n");
	   printf("Choose your option:");
	   fflush(stdin);
	   scanf("%d",&C);
	   if(C==2)
	   {
	   	    break;
	   }
	}
	return 0;
}

