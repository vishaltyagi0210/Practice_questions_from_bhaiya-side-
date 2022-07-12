#include<stdio.h>
#include<conio.h>
#include<math.h>
//class..................................................................
     // 1. armstrong numbers
void check_armstrong(int n);

    // 2. palindrome numbers................................
void check_palindrome(int n);



//main function...........................................................
int main()
{ 
    //situation of do while loop.
    int conti_not,switch_case;

    //variables used in main function
    int a;

    //do while loop for continous processing
    do{
    //situations..
    printf("Press 1: for checking is your number is armstorng number or not.\nPress 2: for checking is your number is palindrome number or not\n\n");
    scanf("%d",&switch_case);
    switch(switch_case){
        case 1:
        // checking armstromg or not
         printf("Enter a number: ");
         scanf("%d",&a);
         check_armstrong(a);
         break;

         case 2:
         // checking palindrome number or not
         printf("Enter a number: ");
         scanf("%d",&a); 
         check_palindrome(a);
         break;

    }
    printf("If you want to exit press 0: ");
    scanf("%d",&conti_not);
    }while(conti_not);
}


// declaration of function.........................................................
void check_armstrong(int n)
{
    //variables
int numbers=1,temp_add=0;
    //storint number.
int arm = n;

    //array storing digits and count numbers function.
int strong_array[100],count=0;

    // storing data in array function from n;
for(int i=0;arm!=0;i++){
    strong_array[i]=arm%10;
    count++;
    arm/=10;
}

    //multiply aray digits count number times
 for(int i=0;i<=count-1;i++){
  for(int j=0;j<=count-1;j++){
    numbers *= strong_array[i];
  }
    // storing number_multiply in temp.
  temp_add +=numbers;  
    //resetting number for new array position.
  numbers=1;
 }

    //logic
n==temp_add?printf("%d is an armstrong number\n",n):printf("%d is not an armstrong number\n",n);
}


//2.
// declaration of palindrome function......................................
void check_palindrome(int n)
{
    //variables used
int pal=n, temp=1,temp_add=0,count=0;

    // storing user number in array
int pal_array[100];

    //loop for storing number and counting.
for(int i=0;pal!=0;i++){
    pal_array[i]=pal%10;
    count++;
    pal/=10;
}

   //loop for revesing array into number
   for(int i=0;i<=count-1;i++){
    for(int j=i;j<=count-1;j++){
    pal_array[i]*=10;
    temp = pal_array[i];
    }
   temp_add += temp;
   temp =1;
   }

   // removing 1 extra zero.
   temp_add /=10;

   // logic
   n==temp_add?printf("%d is a palindrom number\n",n):printf("%d is not a palindrom number\n",n);
}