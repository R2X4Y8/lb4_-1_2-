#include <stdio.h>
#include <getopt.h>

int main(int argc, char **argv) 
{
    int opt;
    char *file_name = NULL;
    int workMode = 0;
    int h = 0;
	printf("\n");
	if(argc == 1) 
	{ 
 		printf("no arguments\n");
 		return 0;
 	}
    while((opt = getopt(argc, argv, "ho:c")) != -1) 
	{
        switch(opt) 
		{
            case 'h':
                h=1;
                break;
            case 'c':
                workMode = 1;
                break;
            case 'o':
                file_name = optarg;
                break;
            case '?':
                printf("Unknown option\n");
                break;
            default:
                printf("Unknown error!!!\n");
                return -1;
        }
    }
	if(file_name != NULL || workMode || h==1)
	{
	    if (file_name != NULL) 
        	printf("Output file: %s\n", file_name);
    	if (workMode) 
        	printf("Specific work mode\n");
    	if (h==1) 
    		printf("Help string\n");
	}
	else 
        printf("No operation\n");

    printf("\n");

    return 0;
}
