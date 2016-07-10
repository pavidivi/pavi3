#include<stdio.h>
int toh(int nn,char ssr,char ttt,char ddd)
{
if(nn==1){
printf("\nthe %ddisk moved from %c-->%c",nn,ssr,ddd);
return 0;}
toh(nn-1,ssr,ddd,ttt);
printf("\nthe %ddisk moved from %c-->%c",nn,ssr,ddd);
toh(nn-1,ttt,ssr,ddd);
}
int main()

{
int n;
char src='a',temp='b',dest='c';
printf("enter number of disk:");
scanf("%d",&n);
toh(n,src,temp,dest);
return 0;
