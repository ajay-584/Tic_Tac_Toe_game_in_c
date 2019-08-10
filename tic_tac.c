#include<stdio.h>
#include<conio.h>
#include<stdlib.h> 
void check(char,char);
int count=0;
char a[9]={'1','2','3','4','5','6','7','8','9'};
void gamename()
{
	printf("\n\t\t\tTic Tac Toe Game\n");
}
void show()
{
	printf("\n\n\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c \n",a[0],a[1],a[2]);
	printf("\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c \n",a[3],a[4],a[5]);
	printf("\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c \n",a[6],a[7],a[8]);
	printf("\t\t\t---|---|---\n");
}
void input_symbol()
{
	printf("\n Player 1 Symbol :x:");
	printf("\n Player 2 Symbol :o:");
}
void start()
{
	char pa;
	printf("\n Enter who will start game: Player 1 or Player 2\n");
	scanf("%c",&pa);
}
void play()
{
	char p,s;
	printf("\n Enter position and symbol for the player\n");
	fflush(stdin);
	scanf("%c",&p);
	fflush(stdin);
	scanf("%c",&s);
	count++;
	check(p,s);
}
void check(char P, char S)
{
	int i;
	for(i=0;i<=8;i++)
	{
		if(a[i]==P)
		{
			a[i]=S;
		}
	}
}
int end()
{
	if((a[0]=='x'&&a[1]=='x'&&a[2]=='x') || (a[0]=='x'&&a[3]&&a[6]=='x') || (a[0]=='x'&&a[4]=='x'&&a[8]=='x') || (a[6]=='x'&&a[7]=='x'&&a[8]=='x') || (a[2]=='x'&&a[5]=='x'&&a[8]=='x') || (a[2]=='x'&&a[4]=='x'&&a[6]=='x'))
	return(100);
	else if((a[0]=='o'&&a[1]=='o'&&a[2]=='o') || (a[0]=='o'&&a[3]&&a[6]=='o') || (a[0]=='o'&&a[4]=='o'&&a[8]=='o') || (a[6]=='o'&&a[7]=='o'&&a[8]=='o') || (a[2]=='o'&&a[5]=='o'&&a[8]=='o') || (a[2]=='o'&&a[4]=='o'&&a[6]=='o'))
	return(200);
	else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
	return(100);
	else if(a[1]=='o'&&a[4]=='o'&&a[7]=='o')
	return(200);
    else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
	return(100);
	else if(a[3]=='o'&&a[4]=='o'&&a[5]=='o')
	return(200);
	
	return(300);
}
void main()
{
	int k;
	char ch;
	labell:
	gamename();
	show();
	input_symbol();
	start();
	play();
	//second time input
	label:
	show();
	play();
	k=end();
	show();
	if(count<9)
	{
	 if(k==100)
	 printf("\n Player 1 won the game.");
	 else if(k==200)
	 printf("\n Player 2 won the game.");
	 else
	 goto label;
    }
    else
    {
    	printf("\n\t Game draw");
    	count=0;
	}
	 printf("\n Do you want play again if yes then enter y otherwise n ");
	 fflush(stdin);
	 scanf("%c",&ch);
	 if(ch=='y' || ch=='Y')
	 {
	 	a[0]='1';
	 	a[1]='2';
	 	a[2]='3';
	 	a[3]='4';
	 	a[4]='5';
	 	a[5]='6';
	 	a[6]='7';
	 	a[7]='8';
	 	a[8]='9';
	 	goto labell;
	 }
	 
	getch();
	
}
