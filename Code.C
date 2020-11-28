#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
void ad();
void Word(int ,int ,char *);
void num2(int ,int ,char *);
void numes(int ,int ,char *);
void wordpractice(int ,int ,char *);
void numeric(int ,int ,char *);
void getpracticelist(int );
void num1(int ,int ,char *);
void getname();
void mainmenu(char *);
void alphabaticpractice(int);
void black(int);
void About();
void practice1(char *);
void practice2(char *);
void practice3(char *);
void practice4(char *);
void practice5(char *);
void practice6(char *);
void practice7(char *);
void endingscreen();

void box2(int a,int b,int x,int y)
{

//a=horizontal lines & b=vertical lines & x=position hori , & y=position ver
int i,j,k,l;

gotoxy(x,y);

for(i=0;i<(a-2);i++)
{
	if(i==0)
	{
	putch(218);
	}
putch(196);
putch(196);
	if(i==(a-3))
	{
	putch(191);
	}
}

for(j=0;j<(b-2);j++)
{
	if(j==0)
	{
	y++;
	gotoxy(x,y);
	}
	else
	{
	y++;
	gotoxy(x,y);
	}
	putch(179);
	for(l=0;l<(a-2);l++)
	{
	printf("  ");
	}
	putch(179);
}

for(k=0;k<(a-2);k++)
{       if(k==0)
	{
	y++;
	gotoxy(x,y);
	putch(192);
	}
	putch(196);
	putch(196);
	if(k==(a-3))
	{
	putch(217);
	}
}
}


void box(int a,int b,int x,int y)
{

//a=horizontal lines & b=vertical lines & x=position hori , & y=position ver
int i,j,k,l;

gotoxy(x,y);

for(i=0;i<(a-2);i++)
{
	if(i==0)
	{
	putch(201);
	}
putch(205);
putch(205);
	if(i==(a-3))
	{
	putch(187);
	}
}

for(j=0;j<(b-2);j++)
{
	if(j==0)
	{
	y++;
	gotoxy(x,y);
	}
	else
	{
	y++;
	gotoxy(x,y);
	}
	putch(186);
	for(l=0;l<(a-2);l++)
	{
	printf("  ");
	}
	putch(186);
}

for(k=0;k<(a-2);k++)
{       if(k==0)
	{
	y++;
	gotoxy(x,y);
	putch(200);
	}
	putch(205);
	putch(205);
	if(k==(a-3))
	{
	putch(188);
	}
}
}

void main()
{
int q=14,e;
x:
_setcursortype(_NOCURSOR);
clrscr();

textcolor(LIGHTRED);
{
box(18,3,2,22);
}
textcolor(LIGHTCYAN);
textbackground(BLACK);
{
gotoxy(5,23);
cprintf("Program By : Vrushank patel");
}
textcolor(LIGHTRED);
{
box(20,3,40,22);
}
textcolor(LIGHTCYAN);
{
gotoxy(43,23);
cprintf("Program Manager : Pratik Thakkar ");
}
textcolor(LIGHTRED);
box(10,11,55,8);
textcolor(CYAN);
gotoxy(60,12);
cprintf("MAHALAXMI");
gotoxy(60,14);
cprintf("COMPUTERS");
textbackground(BLACK);
textcolor(LIGHTRED);
{
box2(12+1,5,28-2,1);
}
textcolor(LIGHTCYAN);

gotoxy(35-1,2);
cprintf("WEL-COME");
gotoxy(36-1,3);
cprintf("TO THE");
gotoxy(30-1,4);
cprintf("KEY-BOARD PRACTICE");
textcolor(BROWN);
box2(17,15,23-1,6);
textcolor(LIGHTGREEN);

gotoxy(23+1,7);
cprintf("¯ Wel-come To The Newest");
gotoxy(23+1,8);
cprintf("  Key-Board Practice");
gotoxy(23+1,10);
cprintf("¯ In Here We have arranged");
gotoxy(23+1,11);
cprintf("  some steps as Typewriter");
gotoxy(23+1,12);
cprintf("  which can Increase Your");
gotoxy(23+1,13);
cprintf("  Speed at 60 Words Per");
gotoxy(23+1,14);
cprintf("  Minute in one month");
gotoxy(23+1,16);
cprintf("¯ Thanks for Using Typing");
gotoxy(23+1,17);
cprintf("  Master");
gotoxy(23+1,19);
cprintf("¯ Have a nice Day");
textcolor(CYAN);
textcolor(LIGHTRED);
box(10,11,4-2+1,8);
textcolor(GREEN);
{
		box2(8,3,6-2+1,9);
}

		textcolor(CYAN);
		{
		gotoxy(9-2+1,10);
		cprintf("Start");
		gotoxy(9-2+1,13);
		cprintf("About us");
		gotoxy(9-2+1,16);
		cprintf("Exit");
		}
		while(getch()!='\r')
{
		switch(getch())
		{
		case 72:
		if(q!=123)
		{
		if(q<=14)
		{
		q=20;
		black(q);
		}
		else
		{
		q=q-3;
		black(q);
		}
		}
		break;

		case 77:
		if(q!=123)
		{
		e=q;
		q=123;
		black(q);
		}
		break;

		case 75:
		if(q==123)
		{
		q=e;
		black(q);
		}
		break;

		case 80:
		if(q!=123)
		{
		if(q>19)
		{
		q=14;
		black(q);
		}
		else
		{
		q=q+3;
		black(q);
		break;
		}
		}
		}
}
switch(q)
{
	case 14:
	getname();
	break;

	case 17:
	About();
	break;

	case 20:
	endingscreen();
	break;

	case 123:
	ad();
	break;

}
}

void getpracticelist(int q)
{
_setcursortype(_NOCURSOR);
switch(q)
{
case 14:
_setcursortype(_NOCURSOR);
textcolor(LIGHTRED);
{
		box(15,3,25,q-11);
}
textcolor(BLACK);
{
		box(15,3,25,q-8);
}
textcolor(BLACK);
{
		box(15,3,25,q-5);
}



		textcolor(CYAN);
		{
		gotoxy(28,4);
		cprintf("Key - Board Practice");
		gotoxy(28,7);
		cprintf("Numeric Practice");
		gotoxy(28,10);
		cprintf("Words Practice");
		}

break;

case 17:
_setcursortype(_NOCURSOR);
textcolor(LIGHTRED);
{
		box(15,3,25,q-11);
}
textcolor(BLACK);
{
		box(15,3,25,q-14);
}
textcolor(BLACK);
{
		box(15,3,25,q-8);
}

		textcolor(CYAN);
		{
		gotoxy(28,4);
		cprintf("Key - Board Practice");
		gotoxy(28,7);
		cprintf("Numeric Practice");
		gotoxy(28,10);
		cprintf("Words Practice");
		}
break;

case 20:
_setcursortype(_NOCURSOR);
textcolor(LIGHTRED);
{
		box(15,3,25,q-11);
}
textcolor(BLACK);
{
		box(15,3,25,q-14);
}
textcolor(BLACK);
{
		box(15,3,25,q-17);
}

		textcolor(CYAN);
		{
		gotoxy(28,4);
		cprintf("Key - Board Practice");
		gotoxy(28,7);
		cprintf("Numeric Practice");
		gotoxy(28,10);
		cprintf("Words Practice");
		}
_setcursortype(_NOCURSOR);
break;
}

}


void getname()
{
int q=14,record=0,error=0,name,cd;
char name2[8];
clrscr();
e:

clrscr();
_setcursortype(_NORMALCURSOR);
textcolor(CYAN);
{
box(20,5,23,6);
}
textcolor(BROWN);
{
box(33,6,11,15);
}
textcolor(LIGHTGREEN);
{
gotoxy(13,16);
cprintf("\x18 Press Escape key to exit any time while numeric practice");
gotoxy(13,17);
cprintf("  and word practice");
gotoxy(13,19);
cprintf("\x18 Type 'END' to exit any time from key-board practice");
}
textcolor(LIGHTRED);
{
gotoxy(25,8);
cprintf("Enter your name : ");
for(cd=0;cd<=10;cd++)
{
	ty:
	name=getch();
	if(name==8)
	{
		if(cd>0)
		{
			putch(8);
			printf(" ");
			putch(8);
			cd--;
			goto ty;
		}
	}

	if(name>=65 && name<=90 || name>=97 && name<=122 || name==13)
	{

		if(name==13)
		{
			if(cd==0)
			{
			gotoxy(25,9);
			printf("Name can't Empty");
			gotoxy(43,8);
			goto ty;
			}
			else
			{

			while(cd<9)
			{
				name2[cd]=13;
				cd++;
			}
			goto yt;
			}
		}
	putch(name);
	name2[cd]=name;
	}
	else
	{
		goto ty;
	}
}
yt:
}

clrscr();
_setcursortype(_NOCURSOR);
textcolor(GREEN);
{
box(18,12,22,q-12);
}
textcolor(LIGHTRED);
{
		box(15,3,25,q-11);
}
textcolor(BLACK);
{
		box(15,3,25,q-8);
}
textcolor(BLACK);
{
		box(15,3,25,q-5);
}



		textcolor(CYAN);
		{
		gotoxy(28,15-11);
		cprintf("Key - Board Practice");
		gotoxy(28,18-11);
		cprintf("Numeric Practice");
		gotoxy(28,21-11);
		cprintf("Words Practice");
		}

x:
while(getch()!='\r')
{
		switch(getch())
		{
		case 72:
		if(q<=14)
		{
		q=20;
		getpracticelist(q);
		}
		else
		{
		q=q-3;
		getpracticelist(q);
		}
		break;

		case 80:

		if(q>19)
		{
		q=14;
		getpracticelist(q);
		}
		else
		{
		q=q+3;
		getpracticelist(q);
		break;

		default:
		goto x;
		}
		}
}
switch(q)
{
	case 14:
	mainmenu(name2);
	break;

	case 17:
	numeric(record,error,name2);
	break;

	case 20:
	Word(record,error,name2);
	break;

	default:
	clrscr();
	goto e;

}

}

void Word(int record,int error,char *name)
{

int a,iii,jjj,kkk;
char i,pass[6],gh;
clrscr();
_setcursortype(_NORMALCURSOR);
textcolor(LIGHTRED);
{
box(35,22,6,2);
gotoxy(7,6);
for(jjj=0;jjj<66;jjj++)
{
putch(205);
}
kkk=0;
for(iii=0;iii<20;iii++)
{
gotoxy(39,3+kkk);
putch(186);
kkk=kkk+1;
}
}

textcolor(CYAN);
{
gotoxy(25,2);
printf(" PROGRAM BY : VRUSHANK PATEL ");
gotoxy(13,4);
cprintf("Operator :");
gotoxy(41,4);
cprintf(" Records : ");
cprintf("    Errors : ");
}
gotoxy(53,4);printf("   ");gotoxy(53,4);
cprintf("%d",record);
gotoxy(65,4);
cprintf("%d",error);
gotoxy(25,4);
cprintf("%s",name);

xx:
gotoxy(9,7);
printf("THANKS");
printf("       ");
gotoxy(16,7);
for(a=0;a<=5;a++)
{
gg:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto gg;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto gg;
		}
	}
}
else
{
if(i==27)
{
clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto gg;
}
}
pass[a]='\0';
if(strcmp(pass,"THANKS")==0)
{
	goto yy;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto xx;

}
yy:
gotoxy(24,7);
printf("COFFEE");
printf("       ");
gotoxy(31,7);
for(a=0;a<=5;a++)
{
jj:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto jj;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto jj;
		}
	}
}
else
{
if(i==27)
{
clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto jj;
}
}
pass[a]='\0';
if(strcmp(pass,"COFFEE")==0)
{
	goto zz;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto yy;

}

zz:
gotoxy(9,9);
printf("GODWAR");
printf("       ");
gotoxy(16,9);
for(a=0;a<=5;a++)
{
ll:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto ll;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto ll;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto ll;
}
}
pass[a]='\0';
if(strcmp(pass,"GODWAR")==0)
{
	goto as;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto zz;

}
as:
gotoxy(24,9);
printf("PLEASE");
printf("       ");
gotoxy(31,9);
for(a=0;a<=5;a++)
{
cc:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto cc;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto cc;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto cc;
}
}
pass[a]='\0';
if(strcmp(pass,"PLEASE")==0)
{
	goto sd;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto as;

}

sd:
gotoxy(9,11);
printf("GOOGLE");
printf("       ");
gotoxy(16,11);
for(a=0;a<=5;a++)
{
bb:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto bb;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto bb;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto bb;
}
}
pass[a]='\0';
if(strcmp(pass,"GOOGLE")==0)
{
	goto df;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto sd;

}
df:
gotoxy(24,11);
printf("CREATS");
printf("       ");
gotoxy(31,11);
for(a=0;a<=5;a++)
{
hh:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto hh;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto hh;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto hh;
}
}
pass[a]='\0';
if(strcmp(pass,"CREATS")==0)
{
	goto fg;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto df;
}

fg:
gotoxy(9,13);
printf("CURSOR");
printf("       ");
gotoxy(16,13);
for(a=0;a<=5;a++)
{
vv:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto vv;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto vv;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto vv;
}
}
pass[a]='\0';
if(strcmp(pass,"CURSOR")==0)
{
	goto gh;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto fg;
}

gh:
gotoxy(24,13);
printf("SCROLL");
printf("       ");
gotoxy(31,13);
for(a=0;a<=5;a++)
{
nb:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto nb;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto nb;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto nb;
}
}
pass[a]='\0';
if(strcmp(pass,"SCROLL")==0)
{
	goto hj;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto gh;
}

hj:
gotoxy(9,15);
printf("PAGEUP");
printf("       ");
gotoxy(16,15);
for(a=0;a<=5;a++)
{
ol:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto ol;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto ol;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto ol;
}
}
pass[a]='\0';
if(strcmp(pass,"PAGEUP")==0)
{
	goto jk;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto hj;
}

jk:
gotoxy(24,15);
printf("WINDOW");
printf("       ");
gotoxy(31,15);
for(a=0;a<=5;a++)
{
io:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto io;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto io;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto io;
}
}
pass[a]='\0';
if(strcmp(pass,"WINDOW")==0)
{
	goto kl;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto jk;
}

kl:
gotoxy(9,17);
printf("INSERT");
printf("       ");
gotoxy(16,17);
for(a=0;a<=5;a++)
{
oi:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto oi;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto oi;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto oi;
}
}
pass[a]='\0';
if(strcmp(pass,"INSERT")==0)
{
	goto lp;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto kl;
}

lp:
gotoxy(24,17);
printf("DELETE");
printf("       ");
gotoxy(31,17);
for(a=0;a<=5;a++)
{
qa:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto qa;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto qa;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto qa;
}
}
pass[a]='\0';
if(strcmp(pass,"DELETE")==0)
{
	goto po;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto lp;
}

po:
gotoxy(9,19);
printf("NUMBER");
printf("       ");
gotoxy(16,19);
for(a=0;a<=5;a++)
{
aq:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto aq;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto aq;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto aq;
}
}
pass[a]='\0';
if(strcmp(pass,"NUMBER")==0)
{
	goto ou;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto po;
}

ou:
gotoxy(24,19);
printf("FLOWER");
printf("       ");
gotoxy(31,19);
for(a=0;a<=5;a++)
{
wa:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto wa;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto wa;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto wa;
}
}
pass[a]='\0';
if(strcmp(pass,"FLOWER")==0)
{
	goto ft;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto ou;
}

ft:
gotoxy(9,21);
printf("");
printf("BANANA");
gotoxy(16,21);
for(a=0;a<=5;a++)
{
aw:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto aw;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto aw;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto aw;
}
}
pass[a]='\0';
if(strcmp(pass,"BANANA")==0)
{
	goto bh;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto ft;
}

bh:
gotoxy(24,21);
printf("GRAPES");
printf("       ");
gotoxy(31,21);
for(a=0;a<=5;a++)
{
qw:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto qw;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto qw;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto qw;
}
}
pass[a]='\0';
if(strcmp(pass,"GRAPES")==0)
{
	goto kj;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto bh;
}
kj:
wordpractice(error,record,name);

}

void wordpractice(int error,int record,char *name)
{
int a,iii,jjj,kkk;
char i,pass[6],gh;

textcolor(CYAN);
{
gotoxy(25,2);
printf(" PROGRAM BY : VRUSHANK PATEL ");
gotoxy(13,4);
cprintf("Operator :");
gotoxy(41,4);
cprintf(" Records : ");
cprintf("    Errors : ");
}
gotoxy(53,4);printf("   ");gotoxy(53,4);
cprintf("%d",record);
gotoxy(65,4);
cprintf("%d",error);
gotoxy(25,4);
cprintf("%s",name);

xx:
gotoxy(42,7);
printf("APPLES");
printf("       ");
gotoxy(49,7);
for(a=0;a<=5;a++)
{
gg:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto gg;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto gg;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto gg;
}
}
pass[a]='\0';
if(strcmp(pass,"APPLES")==0)
{
	goto yy;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto xx;

}
yy:
gotoxy(57,7);
printf("CHILLY");
printf("       ");
gotoxy(64,7);
for(a=0;a<=5;a++)
{
jj:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto jj;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto jj;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto jj;
}
}
pass[a]='\0';
if(strcmp(pass,"CHILLY")==0)
{
	goto zz;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto yy;

}

zz:
gotoxy(42,9);
printf("ENDKEY");
printf("       ");
gotoxy(49,9);
for(a=0;a<=5;a++)
{
ll:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto ll;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto ll;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto ll;
}
}
pass[a]='\0';
if(strcmp(pass,"ENDKEY")==0)
{
	goto as;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto zz;

}
as:
gotoxy(57,9);
printf("APPEND");
printf("       ");
gotoxy(64,9);
for(a=0;a<=5;a++)
{
cc:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto cc;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto cc;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto cc;
}
}
pass[a]='\0';
if(strcmp(pass,"APPEND")==0)
{
	goto sd;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto as;

}

sd:
gotoxy(42,11);
printf("CHAWLA");
printf("       ");
gotoxy(49,11);
for(a=0;a<=5;a++)
{
bb:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto bb;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto bb;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto bb;
}
}
pass[a]='\0';
if(strcmp(pass,"CHAWLA")==0)
{
	goto df;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto sd;

}
df:
gotoxy(57,11);
printf("CHAVDA");
printf("       ");
gotoxy(64,11);
for(a=0;a<=5;a++)
{
hh:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto hh;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto hh;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto hh;
}
}
pass[a]='\0';
if(strcmp(pass,"CHAVDA")==0)
{
	goto fg;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto df;
}

fg:
gotoxy(42,13);
printf("PRATIK");
printf("       ");
gotoxy(49,13);
for(a=0;a<=5;a++)
{
vv:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto vv;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto vv;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto vv;
}
}
pass[a]='\0';
if(strcmp(pass,"PRATIK")==0)
{
	goto gh;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto fg;
}

gh:
gotoxy(57,13);
printf("JAYESH");
printf("       ");
gotoxy(64,13);
for(a=0;a<=5;a++)
{
nb:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto nb;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto nb;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto nb;
}
}
pass[a]='\0';
if(strcmp(pass,"JAYESH")==0)
{
	goto hj;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto gh;
}

hj:
gotoxy(42,15);
printf("POTTER");
printf("       ");
gotoxy(49,15);
for(a=0;a<=5;a++)
{
ol:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto ol;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto ol;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto ol;
}
}
pass[a]='\0';
if(strcmp(pass,"POTTER")==0)
{
	goto jk;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto hj;
}

jk:
gotoxy(57,15);
printf("RONALD");
printf("       ");
gotoxy(64,15);
for(a=0;a<=5;a++)
{
io:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto io;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto io;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto io;
}
}
pass[a]='\0';
if(strcmp(pass,"RONALD")==0)
{
	goto kl;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto jk;
}

kl:
gotoxy(42,17);
printf("{-QW-}");
printf("       ");
gotoxy(49,17);
for(a=0;a<=5;a++)
{
oi:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto oi;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto oi;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto oi;
}
}
pass[a]='\0';
if(strcmp(pass,"{-QW-}")==0)
{
	goto lp;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto kl;
}

lp:
gotoxy(57,17);
printf("BURGER");
printf("       ");
gotoxy(64,17);
for(a=0;a<=5;a++)
{
qa:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto qa;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto qa;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto qa;
}
}
pass[a]='\0';
if(strcmp(pass,"BURGER")==0)
{
	goto po;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto lp;
}

po:
gotoxy(42,19);
printf(":VRPS:");
printf("       ");
gotoxy(49,19);
for(a=0;a<=5;a++)
{
aq:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto aq;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto aq;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto aq;
}
}
pass[a]='\0';
if(strcmp(pass,":VRPS:")==0)
{
	goto ou;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto po;
}

ou:
gotoxy(57,19);
printf("[LOCK]");
printf("       ");
gotoxy(64,19);
for(a=0;a<=5;a++)
{
wa:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto wa;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto wa;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto wa;
}
}
pass[a]='\0';
if(strcmp(pass,"[LOCK]")==0)
{
	goto ft;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto ou;
}

ft:
gotoxy(42,21);
printf("<ROCK>");
printf("       ");
gotoxy(49,21);
for(a=0;a<=5;a++)
{
aw:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto aw;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto aw;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto aw;
}
}
pass[a]='\0';
if(strcmp(pass,"<ROCK>")==0)
{
	goto bh;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto ft;
}

bh:
gotoxy(57,21);
printf("(HULK)");
printf("       ");
gotoxy(64,21);
for(a=0;a<=5;a++)
{
qw:
i='\0';
i=getch();
if(i!=9 && i!=13 && i!=27 && i!=32 && i!=8 && i<=48 || i>=57 || i==8)
{
	if(i!=8)
	{
		putch(i);
		pass[a]=i;
	}
	else
	{
		if(a==0)
		{
		goto qw;
		}
		else
		{
		a--;
		putch(i);
		printf(" ");
		putch(i);
		goto qw;
		}
	}
}

else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto qw;
}
}
pass[a]='\0';
if(strcmp(pass,"(HULK)")==0)
{
	goto kj;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto bh;
}
kj:
gotoxy(24,25);
printf("Do you want to do this practice again ? [y/n] :");
gh=getch();
if(gh=='y' || gh=='Y')
{
record++;
Word(record,error,name);
}
else if(gh=='n' || gh=='N')
{
clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Word Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();

	}


}
else
{
	goto kj;
}
}

void numeric(int record,int error,char *name)
{

int a,iii,jjj,kkk;
char i,pass[6],gh;
clrscr();
_setcursortype(_NORMALCURSOR);
textcolor(LIGHTRED);
{
box(35,22,6,2);
gotoxy(7,6);
for(jjj=0;jjj<66;jjj++)
{
putch(205);
}
kkk=0;
for(iii=0;iii<20;iii++)
{
gotoxy(39,3+kkk);
putch(186);
kkk=kkk+1;
}
}

textcolor(CYAN);
{
gotoxy(25,2);
printf(" PROGRAM BY : VRUSHANK PATEL ");
gotoxy(13,4);
cprintf("Operator :");
gotoxy(41,4);
cprintf(" Records : ");
cprintf("    Errors : ");
}
gotoxy(53,4);printf("   ");gotoxy(53,4);
cprintf("%d",record);
gotoxy(65,4);
cprintf("%d",error);
gotoxy(25,4);
cprintf("%s",name);

xx:
gotoxy(9,7);
printf("123456");
printf("       ");
gotoxy(16,7);
for(a=0;a<=5;a++)
{
gg:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto gg;
}
if(i>=48 && i<=57)
{

	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{
clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
	}
}
goto gg;
}
}
pass[a]='\0';
if(strcmp(pass,"123456")==0)
{
	goto yy;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto xx;

}
yy:
gotoxy(24,7);
printf("456789");
printf("       ");
gotoxy(31,7);
for(a=0;a<=5;a++)
{
jj:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto jj;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto jj;
}
}
pass[a]='\0';
if(strcmp(pass,"456789")==0)
{
	goto zz;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto yy;

}

zz:
gotoxy(9,9);
printf("789123");
printf("       ");
gotoxy(16,9);
for(a=0;a<=5;a++)
{
ll:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto ll;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto ll;
}
}
pass[a]='\0';
if(strcmp(pass,"789123")==0)
{
	goto as;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto zz;

}
as:
gotoxy(24,9);
printf("159753");
printf("       ");
gotoxy(31,9);
for(a=0;a<=5;a++)
{
cc:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto cc;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto cc;
}
}
pass[a]='\0';
if(strcmp(pass,"159753")==0)
{
	goto sd;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto as;

}

sd:
gotoxy(9,11);
printf("357951");
printf("       ");
gotoxy(16,11);
for(a=0;a<=5;a++)
{
bb:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto bb;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto bb;
}
}
pass[a]='\0';
if(strcmp(pass,"357951")==0)
{
	goto df;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto sd;

}
df:
gotoxy(24,11);
printf("753159");
printf("       ");
gotoxy(31,11);
for(a=0;a<=5;a++)
{
hh:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto hh;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto hh;
}
}
pass[a]='\0';
if(strcmp(pass,"753159")==0)
{
	goto fg;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto df;
}

fg:
gotoxy(9,13);
printf("951357");
printf("       ");
gotoxy(16,13);
for(a=0;a<=5;a++)
{
vv:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto vv;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto vv;
}
}
pass[a]='\0';
if(strcmp(pass,"951357")==0)
{
	goto gh;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto fg;
}

gh:
gotoxy(24,13);
printf("698412");
printf("       ");
gotoxy(31,13);
for(a=0;a<=5;a++)
{
nb:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto nb;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto nb;
}
}
pass[a]='\0';
if(strcmp(pass,"698412")==0)
{
	goto hj;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto gh;
}

hj:
gotoxy(9,15);
printf("874236");
printf("       ");
gotoxy(16,15);
for(a=0;a<=5;a++)
{
ol:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto ol;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto ol;
}
}
pass[a]='\0';
if(strcmp(pass,"874236")==0)
{
	goto jk;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto hj;
}

jk:
gotoxy(24,15);
printf("751535");
printf("       ");
gotoxy(31,15);
for(a=0;a<=5;a++)
{
io:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto io;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto io;
}
}
pass[a]='\0';
if(strcmp(pass,"751535")==0)
{
	goto kl;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto jk;
}

kl:
gotoxy(9,17);
printf("359575");
printf("       ");
gotoxy(16,17);
for(a=0;a<=5;a++)
{
oi:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto oi;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto oi;
}
}
pass[a]='\0';
if(strcmp(pass,"359575")==0)
{
	goto lp;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto kl;
}

lp:
gotoxy(24,17);
printf("917131");
printf("       ");
gotoxy(31,17);
for(a=0;a<=5;a++)
{
qa:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto qa;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto qa;
}
}
pass[a]='\0';
if(strcmp(pass,"917131")==0)
{
	goto po;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto lp;
}

po:
gotoxy(9,19);
printf("197939");
printf("       ");
gotoxy(16,19);
for(a=0;a<=5;a++)
{
aq:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto aq;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto aq;
}
}
pass[a]='\0';
if(strcmp(pass,"197939")==0)
{
	goto ou;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto po;
}

ou:
gotoxy(24,19);
printf("137393");
printf("       ");
gotoxy(31,19);
for(a=0;a<=5;a++)
{
wa:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto wa;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto wa;
}
}
pass[a]='\0';
if(strcmp(pass,"137393")==0)
{
	goto ft;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto ou;
}

ft:
gotoxy(9,21);
printf("985432");
printf("       ");
gotoxy(16,21);
for(a=0;a<=5;a++)
{
aw:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto aw;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto aw;
}
}
pass[a]='\0';
if(strcmp(pass,"985432")==0)
{
	goto bh;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto ft;
}

bh:
gotoxy(24,21);
printf("785612");
printf("       ");
gotoxy(31,21);
for(a=0;a<=5;a++)
{
qw:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto qw;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto qw;
}
}
pass[a]='\0';
if(strcmp(pass,"785612")==0)
{
	goto kj;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto bh;
}
kj:
num1(error,record,name);

}

void num1(int error,int record,char *name)
{
int a,iii,jjj,kkk;
char i,pass[6],gh;

textcolor(CYAN);
{
gotoxy(25,2);
printf(" PROGRAM BY : VRUSHANK PATEL ");
gotoxy(13,4);
cprintf("Operator :");
gotoxy(41,4);
cprintf(" Records : ");
cprintf("    Errors : ");
}
gotoxy(53,4);printf("   ");gotoxy(53,4);
cprintf("%d",record);
gotoxy(65,4);
cprintf("%d",error);
gotoxy(25,4);
cprintf("%s",name);

xx:
gotoxy(42,7);
printf("987654");
printf("       ");
gotoxy(49,7);
for(a=0;a<=5;a++)
{
gg:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto gg;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto gg;
}
}
pass[a]='\0';
if(strcmp(pass,"987654")==0)
{
	goto yy;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto xx;

}
yy:
gotoxy(57,7);
printf("654321");
printf("       ");
gotoxy(64,7);
for(a=0;a<=5;a++)
{
jj:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto jj;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto jj;
}
}
pass[a]='\0';
if(strcmp(pass,"654321")==0)
{
	goto zz;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto yy;

}

zz:
gotoxy(42,9);
printf("485260");
printf("       ");
gotoxy(49,9);
for(a=0;a<=5;a++)
{
ll:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto ll;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto ll;
}
}
pass[a]='\0';
if(strcmp(pass,"485260")==0)
{
	goto as;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto zz;

}
as:
gotoxy(57,9);
printf("905010");
printf("       ");
gotoxy(64,9);
for(a=0;a<=5;a++)
{
cc:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto cc;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto cc;
}
}
pass[a]='\0';
if(strcmp(pass,"905010")==0)
{
	goto sd;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto as;

}

sd:
gotoxy(42,11);
printf("745296");
printf("       ");
gotoxy(49,11);
for(a=0;a<=5;a++)
{
bb:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto bb;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto bb;
}
}
pass[a]='\0';
if(strcmp(pass,"745296")==0)
{
	goto df;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto sd;

}
df:
gotoxy(57,11);
printf("918470");
printf("       ");
gotoxy(64,11);
for(a=0;a<=5;a++)
{
hh:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto hh;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto hh;
}
}
pass[a]='\0';
if(strcmp(pass,"918470")==0)
{
	goto fg;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto df;
}

fg:
gotoxy(42,13);
printf("749625");
printf("       ");
gotoxy(49,13);
for(a=0;a<=5;a++)
{
vv:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto vv;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto vv;
}
}
pass[a]='\0';
if(strcmp(pass,"749625")==0)
{
	goto gh;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto fg;
}

gh:
gotoxy(57,13);
printf("412698");
printf("       ");
gotoxy(64,13);
for(a=0;a<=5;a++)
{
nb:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto nb;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto nb;
}
}
pass[a]='\0';
if(strcmp(pass,"412698")==0)
{
	goto hj;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto gh;
}

hj:
gotoxy(42,15);
printf("415263");
printf("       ");
gotoxy(49,15);
for(a=0;a<=5;a++)
{
ol:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto ol;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto ol;
}
}
pass[a]='\0';
if(strcmp(pass,"415263")==0)
{
	goto jk;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto hj;
}

jk:
gotoxy(57,15);
printf("980021");
printf("       ");
gotoxy(64,15);
for(a=0;a<=5;a++)
{
io:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto io;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto io;
}
}
pass[a]='\0';
if(strcmp(pass,"980021")==0)
{
	goto kl;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto jk;
}

kl:
gotoxy(42,17);
printf("781828");
printf("       ");
gotoxy(49,17);
for(a=0;a<=5;a++)
{
oi:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto oi;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto oi;
}
}
pass[a]='\0';
if(strcmp(pass,"781828")==0)
{
	goto lp;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto kl;
}

lp:
gotoxy(57,17);
printf("818283");
printf("       ");
gotoxy(64,17);
for(a=0;a<=5;a++)
{
qa:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto qa;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto qa;
}
}
pass[a]='\0';
if(strcmp(pass,"818283")==0)
{
	goto po;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto lp;
}

po:
gotoxy(42,19);
printf("516234");
printf("       ");
gotoxy(49,19);
for(a=0;a<=5;a++)
{
aq:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto aq;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto aq;
}
}
pass[a]='\0';
if(strcmp(pass,"516234")==0)
{
	goto ou;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto po;
}

ou:
gotoxy(57,19);
printf("195919");
printf("       ");
gotoxy(64,19);
for(a=0;a<=5;a++)
{
wa:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto wa;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto wa;
}
}
pass[a]='\0';
if(strcmp(pass,"195919")==0)
{
	goto ft;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto ou;
}

ft:
gotoxy(42,21);
printf("918374");
printf("       ");
gotoxy(49,21);
for(a=0;a<=5;a++)
{
aw:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto aw;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto aw;
}
}
pass[a]='\0';
if(strcmp(pass,"918374")==0)
{
	goto bh;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto ft;
}

bh:
gotoxy(57,21);
printf("847362");
printf("       ");
gotoxy(64,21);
for(a=0;a<=5;a++)
{
qw:
i='\0';
i=getch();
if(backstack(i,a)==1)
{
	a--;
	goto qw;
}

if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto qw;
}
}
pass[a]='\0';
if(strcmp(pass,"847362")==0)
{
	goto kj;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto bh;
}
kj:
gotoxy(24,25);
printf("Do you want to do this practice again ? [y/n] :");
gh=getch();
if(gh=='y' || gh=='Y')
{
record++;
numes(record,error,name);
}
else if(gh=='n' || gh=='N')
{
clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();

	}


}
else
{
	goto kj;
}
}


void numes(int record,int error,char *name)
{

int a,iii,jjj,kkk;
char i,pass[6],gh;
clrscr();
_setcursortype(_NORMALCURSOR);
textcolor(LIGHTRED);
{
box(35,22,6,2);
gotoxy(7,6);
for(jjj=0;jjj<66;jjj++)
{
putch(205);
}
kkk=0;
for(iii=0;iii<20;iii++)
{
gotoxy(39,3+kkk);
putch(186);
kkk=kkk+1;
}
}

textcolor(CYAN);
{
gotoxy(25,2);
printf(" PROGRAM BY : VRUSHANK PATEL ");
gotoxy(13,4);
cprintf("Operator :");
gotoxy(41,4);
cprintf(" Records : ");
cprintf("    Errors : ");
}
gotoxy(53,4);printf("   ");gotoxy(53,4);
cprintf("%d",record);
gotoxy(65,4);
cprintf("%d",error);
gotoxy(25,4);
cprintf("%s",name);

xx:
gotoxy(9,7);
printf("158530");
printf("       ");
gotoxy(16,7);
for(a=0;a<=5;a++)
{
gg:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto gg;
}
}
pass[a]='\0';
if(strcmp(pass,"158530")==0)
{
	goto yy;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto xx;

}
yy:
gotoxy(24,7);
printf("982541");
printf("       ");
gotoxy(31,7);
for(a=0;a<=5;a++)
{
jj:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto jj;
}
}
pass[a]='\0';
if(strcmp(pass,"982541")==0)
{
	goto zz;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto yy;

}

zz:
gotoxy(9,9);
printf("159263");
printf("       ");
gotoxy(16,9);
for(a=0;a<=5;a++)
{
ll:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto ll;
}
}
pass[a]='\0';
if(strcmp(pass,"159263")==0)
{
	goto as;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto zz;

}
as:
gotoxy(24,9);
printf("509823");
printf("       ");
gotoxy(31,9);
for(a=0;a<=5;a++)
{
cc:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto cc;
}
}
pass[a]='\0';
if(strcmp(pass,"509823")==0)
{
	goto sd;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto as;

}

sd:
gotoxy(9,11);
printf("837164");
printf("       ");
gotoxy(16,11);
for(a=0;a<=5;a++)
{
bb:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto bb;
}
}
pass[a]='\0';
if(strcmp(pass,"837164")==0)
{
	goto df;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto sd;

}
df:
gotoxy(24,11);
printf("804563");
printf("       ");
gotoxy(31,11);
for(a=0;a<=5;a++)
{
hh:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto hh;
}
}
pass[a]='\0';
if(strcmp(pass,"804563")==0)
{
	goto fg;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto df;
}

fg:
gotoxy(9,13);
printf("159043");
printf("       ");
gotoxy(16,13);
for(a=0;a<=5;a++)
{
vv:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto vv;
}
}
pass[a]='\0';
if(strcmp(pass,"159043")==0)
{
	goto gh;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto fg;
}

gh:
gotoxy(24,13);
printf("813762");
printf("       ");
gotoxy(31,13);
for(a=0;a<=5;a++)
{
nb:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto nb;
}
}
pass[a]='\0';
if(strcmp(pass,"813762")==0)
{
	goto hj;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto gh;
}

hj:
gotoxy(9,15);
printf("528060");
printf("       ");
gotoxy(16,15);
for(a=0;a<=5;a++)
{
ol:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto ol;
}
}
pass[a]='\0';
if(strcmp(pass,"528060")==0)
{
	goto jk;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto hj;
}

jk:
gotoxy(24,15);
printf("812397");
printf("       ");
gotoxy(31,15);
for(a=0;a<=5;a++)
{
io:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto io;
}
}
pass[a]='\0';
if(strcmp(pass,"812397")==0)
{
	goto kl;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto jk;
}

kl:
gotoxy(9,17);
printf("826341");
printf("       ");
gotoxy(16,17);
for(a=0;a<=5;a++)
{
oi:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto oi;
}
}
pass[a]='\0';
if(strcmp(pass,"826341")==0)
{
	goto lp;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto kl;
}

lp:
gotoxy(24,17);
printf("482615");
printf("       ");
gotoxy(31,17);
for(a=0;a<=5;a++)
{
qa:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto qa;
}
}
pass[a]='\0';
if(strcmp(pass,"482615")==0)
{
	goto po;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto lp;
}

po:
gotoxy(9,19);
printf("852743");
printf("       ");
gotoxy(16,19);
for(a=0;a<=5;a++)
{
aq:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto aq;
}
}
pass[a]='\0';
if(strcmp(pass,"852743")==0)
{
	goto ou;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto po;
}

ou:
gotoxy(24,19);
printf("624850");
printf("       ");
gotoxy(31,19);
for(a=0;a<=5;a++)
{
wa:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto wa;
}
}
pass[a]='\0';
if(strcmp(pass,"624850")==0)
{
	goto ft;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto ou;
}

ft:
gotoxy(9,21);
printf("264918");
printf("       ");
gotoxy(16,21);
for(a=0;a<=5;a++)
{
aw:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto aw;
}
}
pass[a]='\0';
if(strcmp(pass,"264918")==0)
{
	goto bh;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto ft;
}

bh:
gotoxy(24,21);
printf("156478");
printf("       ");
gotoxy(31,21);
for(a=0;a<=5;a++)
{
qw:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto qw;
}
}
pass[a]='\0';
if(strcmp(pass,"156478")==0)
{
	goto kj;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto bh;
}
kj:
num2(error,record,name);

}

void num2(int error,int record,char *name)
{
int a,iii,jjj,kkk;
char i,pass[6],gh;

textcolor(CYAN);
{
gotoxy(25,2);
printf(" PROGRAM BY : VRUSHANK PATEL ");
gotoxy(13,4);
cprintf("Operator :");
gotoxy(41,4);
cprintf(" Records : ");
cprintf("    Errors : ");
}
gotoxy(53,4);printf("   ");gotoxy(53,4);
cprintf("%d",record);
gotoxy(65,4);
cprintf("%d",error);
gotoxy(25,4);
cprintf("%s",name);

xx:
gotoxy(42,7);
printf("423687");
printf("       ");
gotoxy(49,7);
for(a=0;a<=5;a++)
{
gg:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto gg;
}
}
pass[a]='\0';
if(strcmp(pass,"423687")==0)
{
	goto yy;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto xx;

}
yy:
gotoxy(57,7);
printf("925771");
printf("       ");
gotoxy(64,7);
for(a=0;a<=5;a++)
{
jj:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto jj;
}
}
pass[a]='\0';
if(strcmp(pass,"925771")==0)
{
	goto zz;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto yy;

}

zz:
gotoxy(42,9);
printf("915843");
printf("       ");
gotoxy(49,9);
for(a=0;a<=5;a++)
{
ll:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto ll;
}
}
pass[a]='\0';
if(strcmp(pass,"915843")==0)
{
	goto as;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto zz;

}
as:
gotoxy(57,9);
printf("182937");
printf("       ");
gotoxy(64,9);
for(a=0;a<=5;a++)
{
cc:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto cc;
}
}
pass[a]='\0';
if(strcmp(pass,"182937")==0)
{
	goto sd;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto as;

}

sd:
gotoxy(42,11);
printf("772299");
printf("       ");
gotoxy(49,11);
for(a=0;a<=5;a++)
{
bb:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto bb;
}
}
pass[a]='\0';
if(strcmp(pass,"772299")==0)
{
	goto df;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto sd;

}
df:
gotoxy(57,11);
printf("801923");
printf("       ");
gotoxy(64,11);
for(a=0;a<=5;a++)
{
hh:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto hh;
}
}
pass[a]='\0';
if(strcmp(pass,"801923")==0)
{
	goto fg;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

		goto df;
}

fg:
gotoxy(42,13);
printf("561923");
printf("       ");
gotoxy(49,13);
for(a=0;a<=5;a++)
{
vv:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto vv;
}
}
pass[a]='\0';
if(strcmp(pass,"561923")==0)
{
	goto gh;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto fg;
}

gh:
gotoxy(57,13);
printf("456283");
printf("       ");
gotoxy(64,13);
for(a=0;a<=5;a++)
{
nb:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto nb;
}
}
pass[a]='\0';
if(strcmp(pass,"456283")==0)
{
	goto hj;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto gh;
}

hj:
gotoxy(42,15);
printf("915284");
printf("       ");
gotoxy(49,15);
for(a=0;a<=5;a++)
{
ol:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto ol;
}
}
pass[a]='\0';
if(strcmp(pass,"915284")==0)
{
	goto jk;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto hj;
}

jk:
gotoxy(57,15);
printf("500248");
printf("       ");
gotoxy(64,15);
for(a=0;a<=5;a++)
{
io:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto io;
}
}
pass[a]='\0';
if(strcmp(pass,"500248")==0)
{
	goto kl;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto jk;
}

kl:
gotoxy(42,17);
printf("481239");
printf("       ");
gotoxy(49,17);
for(a=0;a<=5;a++)
{
oi:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto oi;
}
}
pass[a]='\0';
if(strcmp(pass,"481239")==0)
{
	goto lp;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto kl;
}

lp:
gotoxy(57,17);
printf("484569");
printf("       ");
gotoxy(64,17);
for(a=0;a<=5;a++)
{
qa:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto qa;
}
}
pass[a]='\0';
if(strcmp(pass,"484569")==0)
{
	goto po;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto lp;
}

po:
gotoxy(42,19);
printf("882334");
printf("       ");
gotoxy(49,19);
for(a=0;a<=5;a++)
{
aq:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto aq;
}
}
pass[a]='\0';
if(strcmp(pass,"882334")==0)
{
	goto ou;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto po;
}

ou:
gotoxy(57,19);
printf("741252");
printf("       ");
gotoxy(64,19);
for(a=0;a<=5;a++)
{
wa:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto wa;
}
}
pass[a]='\0';
if(strcmp(pass,"741252")==0)
{
	goto ft;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto ou;
}

ft:
gotoxy(42,21);
printf("485912");
printf("       ");
gotoxy(49,21);
for(a=0;a<=5;a++)
{
aw:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto aw;
}
}
pass[a]='\0';
if(strcmp(pass,"485912")==0)
{
	goto bh;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto ft;
}

bh:
gotoxy(57,21);
printf("496126");
printf("       ");
gotoxy(64,21);
for(a=0;a<=5;a++)
{
qw:
i='\0';
i=getch();
if(i>=48 && i<=57)
{
	putch(i);
	pass[a]=i;
}
else
{
if(i==27)
{

clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();
}
}
goto qw;
}
}
pass[a]='\0';
if(strcmp(pass,"496126")==0)
{
	goto kj;
}
else
{
	error++;
	gotoxy(65,4);
	cprintf("%d",error);

	goto bh;
}
kj:
gotoxy(24,25);
printf("Do you want to do this practice again ? [y/n] :");
gh=getch();
if(gh=='y' || gh=='Y')
{
record++;
numeric(record,error,name);
}
else if(gh=='n' || gh=='N')
{
clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Numeric Practice");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);getch();main();
	getch();

	}


}
else
{
	goto kj;
}
}

void alphabaticpractice(int lt)
{
_setcursortype(_NOCURSOR);
switch(lt)
{
case 5:

textcolor(BLACK);
{
		box(8,3,34,lt+2);
}
textcolor(GREEN);
{
		box(8,3,34,lt);
}
textcolor(BLACK);
{
		box(8,3,34,19);
}
	gotoxy(35,6);
	textcolor(CYAN);
	{
	cprintf(" PRACTICE 1");
	gotoxy(35,8);
	cprintf(" PRACTICE 2");
	gotoxy(35,10);
	cprintf(" PRACTICE 3");
	gotoxy(35,12);
	cprintf(" PRACTICE 4");
	gotoxy(35,14);
	cprintf(" PRACTICE 5");
	gotoxy(35,16);
	cprintf(" PRACTICE 6");
	gotoxy(35,18);
	cprintf(" PRACTICE 7");
	gotoxy(37,20);
	cprintf(" EXIT");
	}


break;

case 7:
textcolor(BLACK);
{
		box(8,3,34,lt-2);
}

textcolor(BLACK);
{
		box(8,3,34,lt+2);
}
textcolor(GREEN);
{
		box(8,3,34,lt);
}

gotoxy(35,6);
	textcolor(CYAN);
	{
	cprintf(" PRACTICE 1");
	gotoxy(35,8);
	cprintf(" PRACTICE 2");
	gotoxy(35,10);
	cprintf(" PRACTICE 3");
	gotoxy(35,12);
	cprintf(" PRACTICE 4");
	gotoxy(35,14);
	cprintf(" PRACTICE 5");
	gotoxy(35,16);
	cprintf(" PRACTICE 6");
	gotoxy(35,18);
	cprintf(" PRACTICE 7");
		gotoxy(37,20);
	cprintf(" EXIT");
		}

		break;

case 9:
textcolor(BLACK);
{
		box(8,3,34,lt-2);
}

textcolor(BLACK);
{
		box(8,3,34,lt+2);
}
textcolor(GREEN);
{
		box(8,3,34,lt);
}

gotoxy(35,6);
	textcolor(CYAN);
	{
	cprintf(" PRACTICE 1");
	gotoxy(35,8);
	cprintf(" PRACTICE 2");
	gotoxy(35,10);
	cprintf(" PRACTICE 3");
	gotoxy(35,12);
	cprintf(" PRACTICE 4");
	gotoxy(35,14);
	cprintf(" PRACTICE 5");
	gotoxy(35,16);
	cprintf(" PRACTICE 6");
	gotoxy(35,18);
	cprintf(" PRACTICE 7");
		gotoxy(37,20);
	cprintf(" EXIT");
		}
break;

case 11:
textcolor(BLACK);
{
		box(8,3,34,lt-2);
}

textcolor(BLACK);
{
		box(8,3,34,lt+2);
}
textcolor(GREEN);
{
		box(8,3,34,lt);
}

gotoxy(35,6);
	textcolor(CYAN);
	{
	cprintf(" PRACTICE 1");
	gotoxy(35,8);
	cprintf(" PRACTICE 2");
	gotoxy(35,10);
	cprintf(" PRACTICE 3");
	gotoxy(35,12);
	cprintf(" PRACTICE 4");
	gotoxy(35,14);
	cprintf(" PRACTICE 5");
	gotoxy(35,16);
	cprintf(" PRACTICE 6");
	gotoxy(35,18);
	cprintf(" PRACTICE 7");
		gotoxy(37,20);
	cprintf(" EXIT");
		}
break;

case 13:
textcolor(BLACK);
{
		box(8,3,34,lt-2);
}

textcolor(BLACK);
{
		box(8,3,34,lt+2);
}
textcolor(GREEN);
{
		box(8,3,34,lt);
}

gotoxy(35,6);
	textcolor(CYAN);
	{
	cprintf(" PRACTICE 1");
	gotoxy(35,8);
	cprintf(" PRACTICE 2");
	gotoxy(35,10);
	cprintf(" PRACTICE 3");
	gotoxy(35,12);
	cprintf(" PRACTICE 4");
	gotoxy(35,14);
	cprintf(" PRACTICE 5");
	gotoxy(35,16);
	cprintf(" PRACTICE 6");
	gotoxy(35,18);
	cprintf(" PRACTICE 7");
		gotoxy(37,20);
	cprintf(" EXIT");
		}
break;


case 15:
textcolor(BLACK);
{
		box(8,3,34,lt-2);
}

textcolor(BLACK);
{
		box(8,3,34,lt+2);
}
textcolor(GREEN);
{
		box(8,3,34,lt);
}

gotoxy(35,6);
	textcolor(CYAN);
	{
	cprintf(" PRACTICE 1");
	gotoxy(35,8);
	cprintf(" PRACTICE 2");
	gotoxy(35,10);
	cprintf(" PRACTICE 3");
	gotoxy(35,12);
	cprintf(" PRACTICE 4");
	gotoxy(35,14);
	cprintf(" PRACTICE 5");
	gotoxy(35,16);
	cprintf(" PRACTICE 6");
	gotoxy(35,18);
	cprintf(" PRACTICE 7");
		gotoxy(37,20);
	cprintf(" EXIT");
		}
break;

case 17:
textcolor(BLACK);
{
		box(8,3,34,lt-2);
}

textcolor(BLACK);
{
		box(8,3,34,lt+2);
}
textcolor(GREEN);
{
		box(8,3,34,lt);
}

gotoxy(35,6);
	textcolor(CYAN);
	{
	cprintf(" PRACTICE 1");
	gotoxy(35,8);
	cprintf(" PRACTICE 2");
	gotoxy(35,10);
	cprintf(" PRACTICE 3");
	gotoxy(35,12);
	cprintf(" PRACTICE 4");
	gotoxy(35,14);
	cprintf(" PRACTICE 5");
	gotoxy(35,16);
	cprintf(" PRACTICE 6");
	gotoxy(35,18);
	cprintf(" PRACTICE 7");
		gotoxy(37,20);
	cprintf(" EXIT");
		}
break;

case 19:
textcolor(BLACK);
{
		box(8,3,34,lt-2);
}

textcolor(BLACK);
{
		box(8,3,34,5);
}
textcolor(GREEN);
{
		box(8,3,34,lt);
}

gotoxy(35,6);
	textcolor(CYAN);
	{
	cprintf(" PRACTICE 1");
	gotoxy(35,8);
	cprintf(" PRACTICE 2");
	gotoxy(35,10);
	cprintf(" PRACTICE 3");
	gotoxy(35,12);
	cprintf(" PRACTICE 4");
	gotoxy(35,14);
	cprintf(" PRACTICE 5");
	gotoxy(35,16);
	cprintf(" PRACTICE 6");
	gotoxy(35,18);
	cprintf(" PRACTICE 7");
		gotoxy(37,20);
	cprintf(" EXIT");
		}
break;
}

}

void black(int q)
{
_setcursortype(_NOCURSOR);
switch(q)
{
case 14:
textcolor(GREEN);
{
		box2(8,3,33-27-2+1,q-1-4);
}
textcolor(BLACK);
{
		box2(8,3,33-27-2+1,q+3-1-4);
}
textcolor(BLACK);
{
		box2(8,3,33-27-2+1,q+6-1-4);
}
textcolor(BLACK);
{
		box2(7,5,58,11);
}




		textcolor(CYAN);
		{
		gotoxy(9-2+1,10);
		cprintf("Start");
		gotoxy(9-2+1,13);
		cprintf("About us");
		gotoxy(9-2+1,16);
		cprintf("Exit");
		gotoxy(60,12);
		cprintf("MAHALAXMI");
		gotoxy(60,14);
		cprintf("COMPUTERS");
		}

break;

case 17:
textcolor(GREEN);
{
		box2(8,3,33-27-2+1,q-1-4);
}
textcolor(BLACK);
{
		box2(8,3,33-27-2+1,q-3-1-4);
}
textcolor(BLACK);
{
		box2(8,3,33-27-2+1,q+3-1-4);
}
textcolor(BLACK);
{
		box2(7,5,58,11);
}

		textcolor(CYAN);
		{
		gotoxy(9-2+1,10);
		cprintf("Start");
		gotoxy(9-2+1,13);
		cprintf("About us");
		gotoxy(9-2+1,16);
		cprintf("Exit");
		gotoxy(60,12);
		cprintf("MAHALAXMI");
		gotoxy(60,14);
		cprintf("COMPUTERS");
		}
break;

case 123:
textcolor(BLACK);
{
		box2(8,3,33-27-2+1,12);
}
textcolor(BLACK);
{
		box2(8,3,33-27-2+1,9);
}
textcolor(BLACK);
{
		box2(8,3,33-27-2+1,15);
}
textcolor(GREEN);
{
		box2(7,5,58,11);
}

		textcolor(CYAN);
		{
		gotoxy(9-2+1,10);
		cprintf("Start");
		gotoxy(9-2+1,13);
		cprintf("About us");
		gotoxy(9-2+1,16);
		cprintf("Exit");
		gotoxy(60,12);
		cprintf("MAHALAXMI");
		gotoxy(60,14);
		cprintf("COMPUTERS");
		gotoxy(60,12);
		cprintf("MAHALAXMI");
		gotoxy(60,14);
		cprintf("COMPUTERS");
		}
break;

case 20:
textcolor(GREEN);
{
		box2(8,3,33-27-2+1,q-1-4);
}
textcolor(BLACK);
{
		box2(8,3,33-27-2+1,q-3-1-4);
}
textcolor(BLACK);
{
		box2(8,3,33-27-2+1,q-6-1-4);
}
textcolor(BLACK);
{
		box2(7,5,58,11);
}

		textcolor(CYAN);
		{
		gotoxy(9-2+1,10);
		cprintf("Start");
		gotoxy(9-2+1,13);
		cprintf("About us");
		gotoxy(9-2+1,16);
		cprintf("Exit");
		gotoxy(60,12);
		cprintf("MAHALAXMI");
		gotoxy(60,14);
		cprintf("COMPUTERS");
		}

break;
}

}


void About()
{
int i,j;
clrscr();
_setcursortype(_NOCURSOR);
textcolor(LIGHTRED);

{
box(34,14,8,5);
}
textcolor(BROWN);
gotoxy(23,6);
cprintf(" About Typing Master V 1.1 ");
textcolor(LIGHTGREEN);
gotoxy(10,8);
cprintf("$ This Program is created by Vrushank Patel. ");
gotoxy(10,10);
cprintf("$ If You Do all the practice 25 times daily or every day than ");
gotoxy(10,11);
cprintf("  Your speed can increses at 60 WPM (Words Per Minute) in only ");
gotoxy(10,12);
cprintf("  one month");
gotoxy(10,14);
cprintf("$ Thanks for using Typing Master. ");
gotoxy(10,16);
cprintf("$ Have a Good-Day.");
getch();
clrscr();
main();
}

void endingscreen()
{

clrscr();
_setcursortype(_NOCURSOR);
textcolor(LIGHTRED);
{
box(18,7,22,7);
}
textcolor(CYAN);
{
gotoxy(35,9);
cprintf("GOOD BYE");
gotoxy(25,11);
cprintf("PROGRAM BY : VRUSHANK PATEL");
sleep(2);
exit(0);
}
}

void mainmenu(char *name)
{
int j,lt=5;
x:
clrscr();
_setcursortype(_NOCURSOR);
textcolor(LIGHTRED);
{
box(11,21,31,3);
}
alphabaticpractice(lt);

while(getch()!='\r')
	{
		switch(getch())
		{
		case 72:
		if(lt<=5)
		{
		lt=19;
		alphabaticpractice(lt);
		}
		else
		{
		lt=lt-2;
		alphabaticpractice(lt);
		}
		break;

		case 80:
		lt=lt+2;
		if(lt>=20)
		{
		lt=5;
		alphabaticpractice(lt);
		}
		else
		{

		alphabaticpractice(lt);
		}
		break;

		default:
		goto x;
		}
	}
switch(lt)
{
case 5:
practice1(name);
break;

case 7:
practice2(name);
break;

case 9:
practice3(name);
break;

case 11:
practice4(name);
break;

case 13:
practice5(name);
break;

case 15:
practice6(name);
break;

case 17:
practice7(name);
break;

case 19:
main();
break;
}

}


void practice1(char *name)
{
int iii,jjj,kkk ;
int k,j,i,error=0,record=0;
char ch,d,U[7],pass[7],password[7]="ASDFGF",voldmort[7]=";LKJHJ",potter[3]="END";
h:
clrscr();

_setcursortype(_NORMALCURSOR);
textcolor(LIGHTRED);
{
box(31,16,10,2);
gotoxy(11,6);
for(jjj=0;jjj<58;jjj++)
{
putch(205);
}
kkk=0;
for(iii=0;iii<14;iii++)
{
gotoxy(39,3+kkk);
putch(186);
kkk=kkk+1;
}
}
textcolor(CYAN);
{
gotoxy(25,2);
printf(" PROGRAM BY : VRUSHANK PATEL ");
gotoxy(13,4);
cprintf("Operator :");
gotoxy(41,4);
cprintf(" Records : ");
cprintf("    Errors : ");
gotoxy(16,7);
cprintf("ASDFGF");
gotoxy(16,9);
cprintf("ASDFGF");
gotoxy(16,11);
cprintf("ASDFGF");
gotoxy(16,13);
cprintf("ASDFGF");
gotoxy(16,15);
cprintf("ASDFGF");
gotoxy(44,7);
cprintf(";LKJHJ");
gotoxy(44,9);
cprintf(";LKJHJ");
gotoxy(44,11);
cprintf(";LKJHJ");
gotoxy(44,13);
cprintf(";LKJHJ");
gotoxy(44,15);
cprintf(";LKJHJ");

gotoxy(53,4);
cprintf("%d",record);
gotoxy(65,4);
cprintf("%d",error);
gotoxy(25,4);
cprintf("%s",name);
for(i=0;i<10;i=i+2)
{
x:
gotoxy(28,i+7);
for(k=0;k<=5;k++)
{
z:
ch=getch();
if(ch==8)
{
if(k>0)
{
k--;
putch(ch);
printf(" ");
putch(8);

goto z;
}
else
{
goto z;
}
}


	if(ch>=65  && ch<=90 || ch==59)
	{
		if(strcmp(ch,password[k])==0)
		{
			putch(ch);
			pass[k]=ch;

			if(strncmp(pass,potter,3)==0)
			{
				goto w;
			}

		}else
		{
		printf("");
		putch(ch);
		pass[k]=ch;

		if(strncmp(pass,potter,3)==0)
		{
			goto w;
		}
		}
	}
	else
	{
		goto z;
	}
}
pass[k]='\0';

if(strcmp(pass,password)==0)
{
pass[2]='\0';
goto y;
}
else
{
printf("\a");
error=error+1;
gotoxy(65,4);
cprintf("%d",error);
goto x;
}
y:
gotoxy(56,i+7);
for(j=0;j<=5;j++)
{
zz:
ch=getch();
if(ch==8)
{
if(j>0)
{
j--;
putch(ch);
printf(" ");
putch(8);

goto zz;
}
else
{
goto zz;
}
}

	if(ch>=65  && ch<=90 || ch==59)
	{
		if(strcmp(ch,voldmort[j])==0)
		{
			putch(ch);
			U[j]=ch;

			if(strncmp(U,potter,3)==0)
			{
				goto w;
			}

		}else
		{
		printf("");
		putch(ch);
		U[j]=ch;

		if(strncmp(U,potter,3)==0)
		{
			goto w;
		}
		}
	}
	else
	{
		goto zz;
	}


}
U[j]='\0';
if(strcmp(U,voldmort)==0)
{
}else if(strcmp(U,potter)==0)
{
goto w;
}else
{
printf("\a");
error=error+1;
gotoxy(65,4);
cprintf("%d",error);
goto y;
}
}
j:
textcolor(LIGHTRED);
{
box(31,5,10,19);
}
gotoxy(15,21);
textcolor(CYAN);
{
cprintf("DO YOU WANT TO DO THIS PRACTICE AGAIN [Y/N] : ");
}
textcolor(LIGHTRED);
{
d=getch();
if(strcmp(d,'Y')==0)
{
	putch('Y');
	record=record+1;
	clrscr();
	goto h;
}
else if(strcmp(d,'N')==0)
{
	putch('N');
	w:

	clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Practice 1 ");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);
	getch();
	}
	main();
}

else
{
	gotoxy(30,23);
	cprintf("\t\tWrong Entry Try again");
	goto j;
}
}
getch();
}
}

void practice2(char *name)
{
int iii,jjj,kkk ;
int k,j,i,error=0,record=0;
char ch,d,U[8],pass[8],password[8]="AWERQFA",voldmort[8]=";OIUPJ;",potter[3]="END";
h:
clrscr();
_setcursortype(_NORMALCURSOR);
textcolor(LIGHTRED);
{
box(31,16,10,2);
gotoxy(11,6);
for(jjj=0;jjj<58;jjj++)
{
putch(205);
}
kkk=0;
for(iii=0;iii<14;iii++)
{
gotoxy(39,3+kkk);
putch(186);
kkk=kkk+1;
}
}
textcolor(CYAN);
{
gotoxy(25,2);
printf(" PROGRAM BY : VRUSHANK PATEL ");
gotoxy(13,4);
cprintf("Operator :");
gotoxy(41,4);
cprintf(" Records : ");
cprintf("    Errors : ");
gotoxy(16,7);
cprintf("AWERQFA");
gotoxy(16,9);
cprintf("AWERQFA");
gotoxy(16,11);
cprintf("AWERQFA");
gotoxy(16,13);
cprintf("AWERQFA");
gotoxy(16,15);
cprintf("AWERQFA");
gotoxy(44,7);
cprintf(";OIUPJ;");
gotoxy(44,9);
cprintf(";OIUPJ;");
gotoxy(44,11);
cprintf(";OIUPJ;");
gotoxy(44,13);
cprintf(";OIUPJ;");
gotoxy(44,15);
cprintf(";OIUPJ;");

gotoxy(53,4);
cprintf("%d",record);
gotoxy(65,4);
cprintf("%d",error);
gotoxy(25,4);
cprintf("%s",name);

for(i=0;i<10;i=i+2)
{
x:
gotoxy(28,i+7);
for(k=0;k<=6;k++)
{
z:
ch=getch();
if(ch==8)
{
if(k>0)
{
k--;
putch(ch);
printf(" ");
putch(8);

goto z;
}
else
{
goto z;
}
}


	if(ch>=65  && ch<=90 || ch==59)
	{
		if(strcmp(ch,password[k])==0)
		{
			putch(ch);
			pass[k]=ch;

			if(strncmp(pass,potter,3)==0)
			{
				goto w;
			}

		}else
		{
		printf("");
		putch(ch);
		pass[k]=ch;

		if(strncmp(pass,potter,3)==0)
		{
			goto w;
		}
		}
	}
	else
	{
		goto z;
	}
}
pass[k]='\0';

if(strcmp(pass,password)==0)
{
pass[2]='\0';
goto y;
}
else
{
printf("\a");
error=error+1;
gotoxy(65,4);
cprintf("%d",error);
goto x;
}
y:
gotoxy(56,i+7);
for(j=0;j<=6;j++)
{
zz:
ch=getch();
if(ch==8)
{
if(j>0)
{
j--;
putch(ch);
printf(" ");
putch(8);

goto zz;
}
else
{
goto zz;
}
}

	if(ch>=65  && ch<=90 || ch==59)
	{
		if(strcmp(ch,voldmort[j])==0)
		{
			putch(ch);
			U[j]=ch;

			if(strncmp(U,potter,3)==0)
			{
				goto w;
			}

		}else
		{
		printf("");
		putch(ch);
		U[j]=ch;

		if(strncmp(U,potter,3)==0)
		{
			goto w;
		}
		}
	}
	else
	{
		goto zz;
	}


}
U[j]='\0';
if(strcmp(U,voldmort)==0)
{
}else if(strcmp(U,potter)==0)
{
goto w;
}else
{
printf("\a");
error=error+1;
gotoxy(65,4);
cprintf("%d",error);
goto y;
}
}
j:
textcolor(LIGHTRED);
{
box(31,5,10,19);
}
gotoxy(15,21);
textcolor(CYAN);
{
cprintf("DO YOU WANT TO DO THIS PRACTICE AGAIN [Y/N] : ");
}
textcolor(LIGHTRED);
{
d=getch();
if(strcmp(d,'Y')==0)
{
	putch('Y');
	record=record+1;
	clrscr();
	goto h;
}
else if(strcmp(d,'N')==0)
{
	putch('N');
	w:
	clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Practice 2 ");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);
	getch();
	}
	main();
}

else
{
	gotoxy(30,23);
	cprintf("\t\tWrong Entry Try again");
	goto j;
}
}
getch();
}

}


void practice3(char *name)
{
int iii,jjj,kkk ;
int k,j,i,error=0,record=0;
char ch,d,U[7],pass[7],password[7]="GFTFRF",voldmort[7]="HJYJUJ",potter[3]="END";
h:
clrscr();
_setcursortype(_NORMALCURSOR);
textcolor(LIGHTRED);
{
box(31,16,10,2);
gotoxy(11,6);
for(jjj=0;jjj<58;jjj++)
{
putch(205);
}
kkk=0;
for(iii=0;iii<14;iii++)
{
gotoxy(39,3+kkk);
putch(186);
kkk=kkk+1;
}
}
textcolor(CYAN);
{
gotoxy(25,2);
printf(" PROGRAM BY : VRUSHANK PATEL ");
gotoxy(13,4);
cprintf("Operator :");
gotoxy(41,4);
cprintf(" Records : ");
cprintf("    Errors : ");
gotoxy(16,7);
cprintf("GFTFRF");
gotoxy(16,9);
cprintf("GFTFRF");
gotoxy(16,11);
cprintf("GFTFRF");
gotoxy(16,13);
cprintf("GFTFRF");
gotoxy(16,15);
cprintf("GFTFRF");
gotoxy(44,7);
cprintf("HJYJUJ");
gotoxy(44,9);
cprintf("HJYJUJ");
gotoxy(44,11);
cprintf("HJYJUJ");
gotoxy(44,13);
cprintf("HJYJUJ");
gotoxy(44,15);
cprintf("HJYJUJ");

gotoxy(53,4);
cprintf("%d",record);
gotoxy(65,4);
cprintf("%d",error);
gotoxy(25,4);
cprintf("%s",name);
for(i=0;i<10;i=i+2)
{
x:
gotoxy(28,i+7);
for(k=0;k<=5;k++)
{
z:
ch=getch();
if(ch==8)
{
if(k>0)
{
k--;
putch(ch);
printf(" ");
putch(8);

goto z;
}
else
{
goto z;
}
}


	if(ch>=65  && ch<=90 || ch==59)
	{
		if(strcmp(ch,password[k])==0)
		{
			putch(ch);
			pass[k]=ch;

			if(strncmp(pass,potter,3)==0)
			{
				goto w;
			}

		}else
		{
		printf("");
		putch(ch);
		pass[k]=ch;

		if(strncmp(pass,potter,3)==0)
		{
			goto w;
		}
		}
	}
	else
	{
		goto z;
	}
}
pass[k]='\0';

if(strcmp(pass,password)==0)
{
pass[2]='\0';
goto y;
}
else
{
printf("\a");
error=error+1;
gotoxy(65,4);
cprintf("%d",error);
goto x;
}
y:
gotoxy(56,i+7);
for(j=0;j<=5;j++)
{
zz:
ch=getch();
if(ch==8)
{
if(j>0)
{
j--;
putch(ch);
printf(" ");
putch(8);

goto zz;
}
else
{
goto zz;
}
}

	if(ch>=65  && ch<=90 || ch==59)
	{
		if(strcmp(ch,voldmort[j])==0)
		{
			putch(ch);
			U[j]=ch;

			if(strncmp(U,potter,3)==0)
			{
				goto w;
			}

		}else
		{
		printf("");
		putch(ch);
		U[j]=ch;

		if(strncmp(U,potter,3)==0)
		{
			goto w;
		}
		}
	}
	else
	{
		goto zz;
	}


}
U[j]='\0';
if(strcmp(U,voldmort)==0)
{
}else if(strcmp(U,potter)==0)
{
goto w;
}else
{
printf("\a");
error=error+1;
gotoxy(65,4);
cprintf("%d",error);
goto y;
}
}
j:
textcolor(LIGHTRED);
{
box(31,5,10,19);
}
gotoxy(15,21);
textcolor(CYAN);
{
cprintf("DO YOU WANT TO DO THIS PRACTICE AGAIN [Y/N] : ");
}
textcolor(LIGHTRED);
{
d=getch();
if(strcmp(d,'Y')==0)
{
	putch('Y');
	record=record+1;
	clrscr();
	goto h;
}
else if(strcmp(d,'N')==0)
{
	putch('N');
	w:

	clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Practice 3 ");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);
	getch();
	}
	main();
}

else
{
	gotoxy(30,23);
	cprintf("\t\tWrong Entry Try again");
	goto j;
}
}
getch();
}
}


void practice4(char *name)
{
int iii,jjj,kkk ;
int k,j,i,error=0,record=0;
char ch,d,U[7],pass[7],password[7]="AZXCVF",voldmort[7]="LKMNBJ",potter[3]="END";
h:
clrscr();
_setcursortype(_NORMALCURSOR);
textcolor(LIGHTRED);
{
box(31,16,10,2);
gotoxy(11,6);
for(jjj=0;jjj<58;jjj++)
{
putch(205);
}
kkk=0;
for(iii=0;iii<14;iii++)
{
gotoxy(39,3+kkk);
putch(186);
kkk=kkk+1;
}
}
textcolor(CYAN);
{
gotoxy(25,2);
printf(" PROGRAM BY : VRUSHANK PATEL ");
gotoxy(13,4);
cprintf("Operator :");
gotoxy(41,4);
cprintf(" Records : ");
cprintf("    Errors : ");
gotoxy(16,7);
cprintf("AZXCVF");
gotoxy(16,9);
cprintf("AZXCVF");
gotoxy(16,11);
cprintf("AZXCVF");
gotoxy(16,13);
cprintf("AZXCVF");
gotoxy(16,15);
cprintf("AZXCVF");
gotoxy(44,7);
cprintf("LKMNBJ");
gotoxy(44,9);
cprintf("LKMNBJ");
gotoxy(44,11);
cprintf("LKMNBJ");
gotoxy(44,13);
cprintf("LKMNBJ");
gotoxy(44,15);
cprintf("LKMNBJ");

gotoxy(53,4);
cprintf("%d",record);
gotoxy(65,4);
cprintf("%d",error);
gotoxy(25,4);
cprintf("%s",name);
for(i=0;i<10;i=i+2)
{
x:
gotoxy(28,i+7);
for(k=0;k<=5;k++)
{
z:
ch=getch();
if(ch==8)
{
if(k>0)
{
k--;
putch(ch);
printf(" ");
putch(8);

goto z;
}
else
{
goto z;
}
}


	if(ch>=65  && ch<=90 || ch==59)
	{
		if(strcmp(ch,password[k])==0)
		{
			putch(ch);
			pass[k]=ch;

			if(strncmp(pass,potter,3)==0)
			{
				goto w;
			}

		}else
		{
		printf("");
		putch(ch);
		pass[k]=ch;

		if(strncmp(pass,potter,3)==0)
		{
			goto w;
		}
		}
	}
	else
	{
		goto z;
	}
}
pass[k]='\0';

if(strcmp(pass,password)==0)
{
pass[2]='\0';
goto y;
}
else
{
printf("\a");
error=error+1;
gotoxy(65,4);
cprintf("%d",error);
goto x;
}
y:
gotoxy(56,i+7);
for(j=0;j<=5;j++)
{
zz:
ch=getch();
if(ch==8)
{
if(j>0)
{
j--;
putch(ch);
printf(" ");
putch(8);

goto zz;
}
else
{
goto zz;
}
}

	if(ch>=65  && ch<=90 || ch==59)
	{
		if(strcmp(ch,voldmort[j])==0)
		{
			putch(ch);
			U[j]=ch;

			if(strncmp(U,potter,3)==0)
			{
				goto w;
			}

		}else
		{
		printf("");
		putch(ch);
		U[j]=ch;

		if(strncmp(U,potter,3)==0)
		{
			goto w;
		}
		}
	}
	else
	{
		goto zz;
	}


}
U[j]='\0';
if(strcmp(U,voldmort)==0)
{
}else if(strcmp(U,potter)==0)
{
goto w;
}else
{
printf("\a");
error=error+1;
gotoxy(65,4);
cprintf("%d",error);
goto y;
}
}
j:
textcolor(LIGHTRED);
{
box(31,5,10,19);
}
gotoxy(15,21);
textcolor(CYAN);
{
cprintf("DO YOU WANT TO DO THIS PRACTICE AGAIN [Y/N] : ");
}
textcolor(LIGHTRED);
{
d=getch();
if(strcmp(d,'Y')==0)
{
	putch('Y');
	record=record+1;
	clrscr();
	goto h;
}
else if(strcmp(d,'N')==0)
{
	putch('N');
	w:

	clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Practice 4 ");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);
	getch();
	}
	main();
}

else
{
	gotoxy(30,23);
	cprintf("\t\tWrong Entry Try again");
	goto j;
}
}
getch();
}
}


void practice5(char *name)
{
int iii,jjj,kkk ;
int k,j,i,error=0,record=0;
char ch,d,pass[28],password[28]="ABCDEFGHIJKLMNOPQRSTUVWXYZ",potter[3]="END";
h:
clrscr();
_setcursortype(_NORMALCURSOR);
textcolor(LIGHTRED);
{
box(31,16,10,2);
gotoxy(11,6);
for(jjj=0;jjj<58;jjj++)
{
putch(205);
}
kkk=0;
for(iii=0;iii<3;iii++)
{
gotoxy(39,3+kkk);
putch(186);
kkk=kkk+1;
}
}
textcolor(CYAN);
{
gotoxy(25,2);
printf(" PROGRAM BY : VRUSHANK PATEL ");
gotoxy(13,4);
cprintf("Operator :");
gotoxy(41,4);
cprintf(" Records : ");
cprintf("    Errors : ");
gotoxy(28,7);
cprintf("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
gotoxy(28,9);
cprintf("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
gotoxy(28,11);
cprintf("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
gotoxy(28,13);
cprintf("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
gotoxy(28,15);
cprintf("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
gotoxy(53,4);
cprintf("%d",record);
gotoxy(65,4);
cprintf("%d",error);
gotoxy(25,4);
cprintf("%s",name);
for(i=0;i<10;i=i+2)
{
x:
gotoxy(28,i+8);
for(k=0;k<=25;k++)
{
z:
ch=getch();
if(ch==8)
{
if(k>0)
{
k--;
putch(ch);
printf(" ");
putch(8);

goto z;
}
else
{
goto z;
}
}

	if(ch>=65  && ch<=90 || ch==59)
	{
		putch(ch);
		pass[k]=ch;

		if(strncmp(pass,potter,3)==0)
		{
			goto w;
		}
	}
	else
	{
		goto z;
	}
}
pass[k]='\0';

if(strcmp(pass,password)==0)
{
pass[2]='\0';
}
else
{
printf("\a");
error=error+1;
gotoxy(65,4);
cprintf("%d",error);
goto x;
}
}
j:
textcolor(LIGHTRED);
{
box(31,5,10,19);
}
gotoxy(15,21);
textcolor(CYAN);
{
cprintf("DO YOU WANT TO DO THIS PRACTICE AGAIN [Y/N] : ");
}
textcolor(LIGHTRED);
{
d=getch();
if(strcmp(d,'Y')==0)
{
	putch('Y');
	record=record+1;
	clrscr();
	goto h;
}
else if(strcmp(d,'N')==0)
{
	putch('N');
	w:
	clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Practice 5 ");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);
	getch();
	}
	main();
}

else
{
	gotoxy(30,23);
	cprintf("\t\tWrong Entry Try again");
	goto j;
}
}
getch();
}


}


void practice6(char *name)
{
int iii,jjj,kkk ;
int k,j,i,error=0,record=0;
char ch,d,pass[28],password[28]="ZYXWVUTSRQPONMLKJIHGFEDCBA",potter[3]="END";
h:
clrscr();
_setcursortype(_NORMALCURSOR);
textcolor(LIGHTRED);
{
box(31,16,10,2);
gotoxy(11,6);
for(jjj=0;jjj<58;jjj++)
{
putch(205);
}
kkk=0;
for(iii=0;iii<3;iii++)
{
gotoxy(39,3+kkk);
putch(186);
kkk=kkk+1;
}
}
textcolor(CYAN);
{
gotoxy(25,2);
printf(" PROGRAM BY : VRUSHANK PATEL ");
gotoxy(13,4);
cprintf("Operator :");
gotoxy(41,4);
cprintf(" Records : ");
cprintf("    Errors : ");
gotoxy(28,7);
cprintf("ZYXWVUTSRQPONMLKJIHGFEDCBA");
gotoxy(28,9);
cprintf("ZYXWVUTSRQPONMLKJIHGFEDCBA");
gotoxy(28,11);
cprintf("ZYXWVUTSRQPONMLKJIHGFEDCBA");
gotoxy(28,13);
cprintf("ZYXWVUTSRQPONMLKJIHGFEDCBA");
gotoxy(28,15);
cprintf("ZYXWVUTSRQPONMLKJIHGFEDCBA");
gotoxy(53,4);
cprintf("%d",record);
gotoxy(65,4);
cprintf("%d",error);
gotoxy(25,4);
cprintf("%s",name);
for(i=0;i<10;i=i+2)
{
x:
gotoxy(28,i+8);
for(k=0;k<=25;k++)
{
z:
ch=getch();
if(ch==8)
{
if(k>0)
{
k--;
putch(ch);
printf(" ");
putch(8);

goto z;
}
else
{
goto z;
}
}

	if(ch>=65  && ch<=90 || ch==59)
	{
		putch(ch);
		pass[k]=ch;

		if(strncmp(pass,potter,3)==0)
		{
			goto w;
		}
	}
	else
	{
		goto z;
	}
}
pass[k]='\0';

if(strcmp(pass,password)==0)
{
pass[2]='\0';
}
else
{
printf("\a");
error=error+1;
gotoxy(65,4);
cprintf("%d",error);
goto x;
}
}
j:
textcolor(LIGHTRED);
{
box(31,5,10,19);
}
gotoxy(15,21);
textcolor(CYAN);
{
cprintf("DO YOU WANT TO DO THIS PRACTICE AGAIN [Y/N] : ");
}
textcolor(LIGHTRED);
{
d=getch();
if(strcmp(d,'Y')==0)
{
	putch('Y');
	record=record+1;
	clrscr();
	goto h;
}
else if(strcmp(d,'N')==0)
{
	putch('N');
	w:
	clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Practice 6 ");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);
	getch();
	}
	main();
}

else
{
	gotoxy(30,23);
	cprintf("\t\tWrong Entry Try again");
	goto j;
}
}
getch();
}

}


void practice7(char *name)
{

int iii,jjj,kkk ;
int k,j,i,error=0,record=0;
char ch,d,pass[45],password[45]="THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.";
h:
clrscr();
_setcursortype(_NORMALCURSOR);
textcolor(LIGHTRED);
{
box(31,16,10,2);
gotoxy(11,6);
for(jjj=0;jjj<58;jjj++)
{
putch(205);
}
kkk=0;
for(iii=0;iii<3;iii++)
{
gotoxy(39,3+kkk);
putch(186);
kkk=kkk+1;
}
}
textcolor(CYAN);
{
gotoxy(25,2);
printf(" PROGRAM BY : VRUSHANK PATEL ");
gotoxy(13,4);
cprintf("Operator :");
gotoxy(41,4);
cprintf(" Records : ");
cprintf("    Errors : ");
gotoxy(18,7);
cprintf("THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.");
gotoxy(18,9);
cprintf("THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.");
gotoxy(18,11);
cprintf("THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.");
gotoxy(18,13);
cprintf("THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.");
gotoxy(18,15);
cprintf("THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.");
gotoxy(53,4);
cprintf("%d",record);
gotoxy(65,4);
cprintf("%d",error);
gotoxy(25,4);
cprintf("%s",name);
pass[45]='\0';
for(i=0;i<10;i=i+2)
{
x:
gotoxy(18,i+8);
for(k=0;k<=43;k++)
{
z:
ch=getch();
if(ch==8)
{
if(k>0)
{
k--;
putch(ch);
printf(" ");
putch(8);
goto z;
}
else
{
goto z;
}
}
else if(ch>=65  && ch<=90 || ch==32 || ch==46)
{
	putch(ch);
	pass[k]=ch;
	if(k==2)
	{
		if(pass[0]=='E')
		{
			if(pass[1]=='N')
			{
				if(pass[2]=='D')
				{
					goto w;
				}
			}
		}
	}
}
	else
	{
		goto z;
	}
}
pass[k]='\0';

if(strcmp(pass,password)==0)
{
pass[2]='\0';
}
else
{
printf("\a");
error=error+1;
gotoxy(65,4);
cprintf("%d",error);
goto x;
}
}
j:
textcolor(LIGHTRED);
{
box(31,5,10,19);
}
gotoxy(15,21);
textcolor(CYAN);
{
cprintf("DO YOU WANT TO DO THIS PRACTICE AGAIN [Y/N] : ");
}
textcolor(LIGHTRED);
{
d=getch();
if(strcmp(d,'Y')==0)
{
	putch('Y');
	record=record+1;
	clrscr();
	goto h;
}
else if(strcmp(d,'N')==0)
{
	putch('N');
	w:
	clrscr();
	textcolor(LIGHTRED);
	{
	box(14,9,27,6);
	}
	gotoxy(29,7);
	textcolor(CYAN);
	{
	cprintf("Practice 7 ");

	gotoxy(29,9);
	cprintf("Operator : %s",name);

	gotoxy(29,11);
	cprintf("Error : %d",error);
	gotoxy(29,13);
	cprintf("Records : %d",record);
	printf("\n\n");
	gotoxy(27,17);
	}
	textcolor(YELLOW);
	{
	cprintf("PROGRAMER : VRUSHANK PATEL");
	sleep(2);
	getch();
	}
	main();
}
else
{
	gotoxy(30,23);
	cprintf("\t\tWrong Entry Try again");
	goto j;
}
}
getch();
}
}

void ad()
{
clrscr();
_setcursortype(_NOCURSOR);
textcolor(LIGHTCYAN);
box(38,23,4,2);
textcolor(LIGHTRED);
box(18,18,6,3);
gotoxy(9,4);
textcolor(CYAN);
cprintf(" MAHALAXMI COMPUTER CLASSES");
gotoxy(10,6);
cprintf("-> PROFESSIONAL COURSE");
gotoxy(13,7);
cprintf("-> MS OFICE");
gotoxy(13,8);
cprintf("-> TALLY");
gotoxy(13,9);
cprintf("-> AUTODESK AUTOCAD");
gotoxy(13,10);
cprintf("-> DTP ");
gotoxy(10,12);
cprintf("-> PROGRAMMING COURSE");
gotoxy(13,13);
cprintf("-> C,C++,JAVA");
gotoxy(13,14);
cprintf("-> SQL,PLSQL");
gotoxy(13,15);
cprintf("-> VB.NET,PHP.NET,");
gotoxy(13,16);
cprintf("-> HTML,JAVASCRIPT");
gotoxy(13,17);
cprintf("-> DATA STRUCTURE");
gotoxy(10,19);
cprintf("-> COMPUTER HARDWARE COURSE");

textcolor(LIGHTRED);
box(18,5,42,3);
gotoxy(44,5);
textcolor(CYAN);
cprintf("MAHALAXMI 11-12 SCIENCE CLASSES");
textcolor(LIGHTRED);
box(18,13,42,8);
gotoxy(45,10);
textcolor(CYAN);
cprintf("->Contact us for..");
gotoxy(47,12);
cprintf("->Computer services");
gotoxy(47,14);
cprintf("->Buy a new computer");
gotoxy(47,16);
cprintf("->CCTV Camera");
gotoxy(47,18);
cprintf("->New Passport or Renew");
textcolor(LIGHTRED);
box(36,3,6,21);
textcolor(CYAN);
gotoxy(7,22);

cprintf("---------------------Program by : Vrushank Patel--------------------");


getch();
main();
}

int backstack(int i,int a)
{
	if(a>0 && i==8)
	{
		putch(i);
		printf(" ");
		putch(i);
		return(1);
	}
	return(0);
}
