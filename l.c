#include<stdio.h>
void main()
{int h1,h2,h3,m1,m2,m3,s1,s2,s3,t1,t2,t3,t,m,s;

printf("time taken");
scanf("%d%d%d",&h1,&m1,&s1);
scanf("%d%d%d",&h2,&m2,&s2);
scanf("%d%d%d",&h3,&m3,&s3);
t=(h2-h1)+h3;
m=(m2-m1)+m3;
s=(s2-s1)+s3;


printf("the total time taken is :%d:%d:%d",t,m,s);
}
