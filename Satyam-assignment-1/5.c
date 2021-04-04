#include<stdio.h>
void main()
{
char c;
printf("input a character");
scanf("%c",&c);
switch(c)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
{
printf("vowel");
break;
}
default:
{
printf("consonant");
}}}
