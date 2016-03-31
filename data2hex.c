#include <stdio.h>

int main(int argc, char **argv)
{
	char c1;
	int byte;
	char strb[4];
	int c;
	do 
	{
		c = getc (stdin);
		if (c==EOF)
			break;
		if (argc>1 && argv[1][0]=='c')
		{
			printf("0x%02x, ", c);	
		}
		else
		{
			printf("%02x", c);	
		}

	} while (c != EOF);
	return 0;
}
