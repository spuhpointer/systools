#include <stdio.h>
int main(int argc, char **argv)
{
	char c;
	
	do 
	{
		c = getc (stdin);
		if (c!=EOF && c!=0x0a)
		{
			printf("%02x", c);	
		}

	} while (c != EOF);
		
	return 0;
}
