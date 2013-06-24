#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
	DIR *dir = opendir(".");
	if(dir){
	 struct dirent *ent;
 		if(argc==1){
		  while((ent = readdir(dir)) != NULL){
			printf("<%s> ",ent->d_name);
			}
		}
		else if(argc==2 && strcmp(argv[1], "l")){
 		  while((ent = readdir(dir)) != NULL){

			printf("%d\t\t%s\t\t%d\t\n",(int)ent->d_ino, ent->d_name, ent->d_type);
			}
		}
		else{
			printf("error");
		}
		printf("\n");
	}
	else{
	  fprintf(stderr, "Error\n");
	}
	return 0;
}
