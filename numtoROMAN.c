#include <stdio.h>

int main()
{
   int n;
   printf("Enter the number : ");
   scanf("%d",&n);
   
   while(n>1000) //separating thousandth value from n
   {
       n = n -1000;
       printf("M");
   }
   while(n > 100)//separating hundredth value from n
   {
       n = n-100;
       printf("C");
   }
   while(n>0)// for the remaining tens and ones place which are default for values acc to place
   {
       int i = n % 10;// to retrieve the ones place value
       n = n/10;// to retrieve the tens place value
       switch(n)
       {
            case 1: printf("X");
                   break;
            case 2: printf("XX");
                   break;
            case 3: printf("XXX");
                   break;
            case 4: printf("XL");
                   break;
            case 5: printf("L");
                   break;
            case 6: printf("LX");
                   break;
            case 7: printf("LXX");
                   break;
            case 8: printf("LXXX");
                   break;
            case 9: printf("XC");
                   break;
       }
       switch(i)
       {
            case 1: printf("I");
                   break;
            case 2: printf("II");
                   break;
            case 3: printf("III");
                   break;
            case 4: printf("IV");
                   break;
            case 5: printf("V");
                   break;
            case 6: printf("VI");
                   break;
            case 7: printf("VII");
                   break;
            case 8: printf("VIII");
                   break;
            case 9: printf("XI");
                   break;
       }
       n = 0; // to end the loop after retrieveing the values
   }
   return 0;
}
