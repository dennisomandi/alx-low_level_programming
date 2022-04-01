#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
(void) argc;
if (argv[1] && argv[2])
/* if truthy */
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));	/* arg1 * arg2 */
return (0);
}
else
printf("Error\n");
return (1);
}
