#include <stdio.h>
int main(void){
int input;
printf("Please enter an integer: ");
scanf("%d",&input);
if(input<1){
printf("You have entered a number less than one.\n");
}else if(input==1){
printf("You have entered one.\n");
}else if(input==2){
printf("You have entered two.\n");
}else if(input==3){
printf("You have entered three.\n");
}else if(input==4){
printf("You have entered four.\n");
}else if(input==5){
printf("You have entered five.\n");
}else if(input>5){
printf("You have entered a number greater than five.\n");
}
return 0;
}
