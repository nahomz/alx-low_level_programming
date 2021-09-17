#include <stdio.h>
/**
*main-print name of program.
*@argc:number of commandline arguments.
*@argv:pointer to an array of commmand line arguments.
*Return:0-success, non-zero-fail.
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
