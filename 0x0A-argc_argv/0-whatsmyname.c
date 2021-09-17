#include <stdio.h>
/**
*main-print name of program.
*@argc:number of commandline arguments.
*@argv:pointer to an array of commmand line arguments.
*Return:0-success, non-zero-fail.
*/

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
