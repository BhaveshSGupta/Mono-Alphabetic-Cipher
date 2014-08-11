#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void main()
{

	int i;
	char o[26],cipert[26] ,original[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},j,ciper[26];
	clrscr();
	randomize();
//for(i=0; i<=25;i++)
  //	original[i]=97+i;
	//for(i=0;i<=25;i++)
	//printf("%c",original[i]);
	for(i=0;i<26;i++)
	{
		bh:
		ciper[i]=random(26);
		for(j=0;j<i;j++)
		{
		if(ciper[j]==ciper[i])
		goto bh;
		}

	}
	for(i=0;i<=25;i++)
	{
       //	printf("\n %d",ciper[i]);
	cipert[i]=original[ciper[i]];
	//printf("\n %c",cipert[i]);
	}
	for(i=0;i<=25;i++)
	printf(" %c",cipert[i]);


	getch();


}

