#include <stdio.h>

int monitor();

int main(){
	int RAM[256];
	RAM[0] = 1;
	monitor(&RAM);
}



int monitor(int * p_RAM)
{
    char chr[10];
    scanf("%s",&chr,sizeof(chr));     

    int i;
    while (chr[i] >= 48 && chr[i] <= 57 && chr[i] >= 65 && chr[i] <= 70){
    
    }

    switch(chr[0]){
	case 'p': if(chr[1] == 'k'){
		printf("%d",*(p_RAM+1));
		}		
	 break;
	case 'j': break;

	default: printf("Invalid Command"); break;
    }
    return 0;
}   
