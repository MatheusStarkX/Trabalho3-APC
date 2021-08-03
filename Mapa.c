/*Nome: Matheus Felipe Magalhães de Assis
 *Matrícula: 19/0035242
 *Disciplina: Algoritmos e Programação de Computadores
 *E-mail: matheusfelipemdeassis@gmail.com*/

#include <stdio.h>

int main(){
	int i,j;
	char mapinha[23][92] = {
		/*Linha 1*/
	{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
		/*Linha 2*/
	{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','*',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','*',' ','#'},
		/*Linha 3*/
	{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ','#'},	 	
		/*Linha 4*/
	{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#',' ',' ',' ','#'},
		/*Linha 5*/
	{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	 '#',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','?','!',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'}, 
		/*Linha 6*/
	{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	 '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#'},
		/*Linha 7*/
	{'#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','?','!',' ',' ',' ','*',' ',' ','!',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
		/*Linha 8*/
	{'#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ','#','#','#','#','#','#','#','#','#','#'}, 
 		/*Linha 9*/
	{'#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ','#','#','#','#','#','#','#','#','#','#'}, 
	 	/*Linha 10*/
	{'#',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ','#','#','#','#',' ',' ',' ',' ',' ','#'},	 
	 	/*Linha 11*/
	{'#',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ',
	 ' ',' ',' ','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#',' ',' ','#','#','#','#',' ',' ',' ',' ',' ','#'},
	 	/*Linha 12*/
	{'#',' ','@',' ',' ','?','!',' ',' ',' ',' ',' ','*',' ','#','#','#','#','#','#','#','#','#',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','?','!',' ',' ',' ',
	 '*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','?','!',' ',' ','*',' ','!',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','C','!',' ',' ','W',' ',' ','#'}, 
	 	/*Linha 13*/
	{'#',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ',
	 ' ',' ',' ','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#',' ',' ','#','#','#','#',' ',' ',' ',' ',' ','#'}, 
	 	/*Linha 14*/
	{'#',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ','#','#','#','#',' ',' ',' ',' ',' ','#'},
		/*Linha 15*/ 
	{'#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ','#','#','#','#','#','#','#','#','#','#'},
		/*Linha 16*/ 
	{'#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ','#','#','#','#','#','#','#','#','#','#'},
		/*Linha 17*/    
	{'#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','?','!',' ',' ',' ','*',' ',' ','!',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#'}, 
	 	/*Linha 18*/
	{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	 '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','?','!',' ',' ','*',' ',' ','#','#','#','#','#','#','#','#'}, 
	 	/*Linha 19*/
	{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	 '#',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#'}, 
	 	/*Linha 20*/
	{'#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}, 
	 	/*Linha 21*/
	{'#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
		/*Linha 22*/ 
	{'#','#','#','#','#','#','#','#','#','#','#','#',' ','*',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','*',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},  
	 	/*Linha 23*/
	{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	 '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'} 
	};

	for(j=0;j<23;j++){
		for(i=0;i<92;i++){
			printf("%c", mapinha[j][i]);
		}
		printf("\n");
	}
	                   
	return 0;
}	