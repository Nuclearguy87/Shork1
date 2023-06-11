#include <stdio.h>

int monitor();

int main(){
	monitor();
}



int monitor(int * p_RAM)
{
    char chr[10];
    scanf("%s",&chr,sizeof(chr));     
    printf("%s\n", chr);  
    switch(chr[0]){
	case "p": if(chr[1] == 'k'){
	
	 break;
	case "j": break;

	default: printf("Invalid Command"); break;
    }
    return 0;
}   
