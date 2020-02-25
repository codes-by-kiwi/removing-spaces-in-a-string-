
# include <stdio.h>
# include <string.h>

int main(){
char str1[100];
int i;
printf("Enter the string:");
gets(str1); // gets stops when newline character is read
int length = strlen(str1); // stores the length of the string into "length"
 for(i=0; i<length; i++)
 {
     if(str1[i]==' ') 
     {
         continue; //goes to beginning of for loop and skips to the else statement
     }
     else
     {
         printf("%c",str1[i]);
     }
     
 }
printf("\n"); // puts space between the result and the built in terminal interface


    return 0;
}