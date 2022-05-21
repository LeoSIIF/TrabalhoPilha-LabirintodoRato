#include <stdio.h>
#include "pilhaEncadeada.h"
#include <stdlib.h>
#define MAX 15
#include <locale.h>

void cria(char l[MAX][MAX]){
    int i,j,x,y;
    srand(time(NULL));
    for(i=0;i<MAX;i++)
    for(j=0;j<MAX;j++){
        if((rand()%5)==1)
        l[i][j]='|';
            else
            l[i][j]='.';
}
     for(i=0;i<MAX;i++){
           l[0][i]='*';
           l[MAX-1][i]='*';
           l[i][0]='*';
           l[i][MAX-1]='*';
           }// fim for
        x=  rand() % MAX;
        y=  rand() % MAX;
        l[x][y]='Q';
     }// fim funcao cria
     
void mostraLabirinto(char mat[MAX][MAX],int linha,int col){
    int i,j;
    for ( i = 0; i < linha; i++)
    {
     printf("\n");
    for ( j = 0; j < col; j++)
			printf (" %c ",mat[i][j] );
     	}

} // fim funcao
     
 int funcaoSuperMouse(char lab[MAX][MAX],int i, int j){
	tpilha linha, coluna;
	inicializa(&linha);
	inicializa(&coluna);
   	
	   while (lab[i][j] != 'Q'){
	lab[i][j] = 'V';
	if (lab[i][j + 1] == '.' || lab[i][j+1]=='Q'){
		push(&linha,i);
		push(&coluna,j);
		j++;//direita
}// fim if
		else if (lab[i+1][j] == '.'  || lab[i+1][j]=='Q'){
			push(&linha,i);
			push(&coluna,j);
			i++;// baixo
}// fim if
			else if (lab[i][j-1] == '.' || lab[i][j-1]=='Q'){
				push(&linha,i);
				push(&coluna,j);
				j--;
}// fim if
				else if (lab[i-1][j] == '.' || lab[i-1][j]=='Q'){
					push(&linha, i);
					push(&coluna, j);
					i--;
}// fim if
					else {
						if(!isEmpty(linha) && !isEmpty(coluna)){
    						lab[i][j] = 'X';
    						i = pop (&linha);
    						j = pop (&coluna);
    			}
    				else{
    					printf("Impossível achar o Queijo! :(");
    					return;
				}
} // fim else	
	Sleep(300);
	system("cls");
	mostraLabirinto(lab,MAX,MAX);
} // fim while
if(lab[i][j]=='Q')
        printf("Queijo encontrado na posição (%d,%d) :)", i, j);
 }// fim funcao

int main(){
	setlocale(LC_ALL, "Portuguese");
    char labirinto[MAX][MAX];
    int x,y;
    cria(labirinto);
    mostraLabirinto(labirinto,MAX,MAX);
    printf("\nEntre com a posicao inicial:");
    scanf("%d %d",&x,&y);
    funcaoSuperMouse(labirinto,x,y);
    getch();
    }
