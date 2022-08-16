#include<stdio.h>
#include<math.h>

int main()
{     
    int a,b,c,d,res;
    char col;
    float tol,tolpos,tolneg;
    printf("COLOR CODES:\n\nBlack - 1 \nBrown - 2 \nRed - 3 \nOrange - 4 \nYellow - 5 \nGreen - 6 \nBlue - 7 \nViolet - 8 \nGrey - 9 \nWhite - 10 \nGold - 11 \nSilver - 12 \n\n");
    printf("Resistor Color Code Calculator:");
    printf("\nEnter the first color code: ");
    scanf("%d",&a);
    printf("Enter the second color code: ");
    scanf("%d",&b);
    printf("Enter the third color code: ");
    scanf("%d",&c);
    printf("Enter the fourth color code: ");
    scanf("%d",&d);
    
    if(a>=1 && b>=1 && c>=1 && d>=1 && a<= 12 && b<=12 && c<=12 && d<=12)
    { switch (d)
     {
       case 1:
       case 2:
       case 3:
       case 4:
       case 5:
       tol = d-1;
       break;    
       case 6:       
       tol = 0.5;
       break;
       case 7:
       tol = 0.25;
       break;
       case 8:
       tol = 0.1;
       break;
       case 9:
       tol = 0.05;
       break;
       case 10:
       tol = 0;
       break;
       case 11:
       tol = 5;
       break;
       case 12:
       tol = 10;
       break;
      }
    printf("\nFirst value: %d",a-1);
    printf("\nSecond value: %d",b-1);
    printf("\nMultiplier: %.2f",pow(10,c-1));
    printf("\nTolerance: %.2f percent\n",tol);
    res = (((a-1)*10+(b-1))*pow(10,(c-1)));
    printf("\nResistance value is %d ohms with a tolerance of +/- %.2f percent",res,tol);
    tolpos = res+res*tol/100;
    tolneg = res-res*tol/100;
    printf("\nThe value of Resistance may be %.2f ohms or %.2f ohms",tolpos,tolneg);
    }
    else
    {
    printf("\nEntered code number is invalid\nPlease enter the valid code number");
    }
}
    