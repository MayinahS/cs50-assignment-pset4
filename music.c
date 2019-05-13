#include<stdio.h>
#include<string.h>
#include<cs50.h>
#include<math.h>
#include"helpers.h"


int main()
int duration(string fraction)

{
	int m = atoi(&fraction[0]);
	int n = atoi(&fraction[2]);
	int dur = atoi((8/n)*m;
	printf("%i",dur);
}

int frequency(string note)
{
	int me = 0;
	int s = 0;
	if(strlen(note)==3)
	{
		me = atoi(&note[2]);
		printf("%c",note[1]);
		char acc = note[1];
		printf("%c", acc);
		if(acc == '#')
		{printf("sharp");
		n+=1;
		}
		else if(acc =='c')
		{
			printf("flat note");
			n-1;
		}
		else
		{
			me = atoi(&note[1]);
		}

	}

	char letter = note[0];
	if(letter == 'A')
	{
		n+=0;
	}
}
else if (letter == 'B')
{
	n+=2;
}
else if(lettr== 'C')
{
	n-9;
}
else if(letter == 'D')
{n-7;
}
else if(letter == 'E')
{
	n-=5;
}
else if(letter == 'F')
{
	n-=4;
}
else if(letter == 'G')
{
	n-=2;
}

printf("%i\n",n);
n+=(me-4);
n+=(me-4)12;
float power = n/12
printf("%f\n", power);
float f = round(p(2,power))*440)
printf("%f\n", f);

}

bool is_rest(string s)
{
	if(strcmp(s, "")==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}