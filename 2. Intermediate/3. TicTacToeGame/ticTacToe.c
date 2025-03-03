#include<stdio.h>
#include<stdlib.h>

void printBoard();
void initBoard();
void makeMove(char x,int a, int b);
void playGame(char *currentPlayer); 
char checkWinner();
int  isBoardFull();

char board[3][3];

   


int main() {
    char currentPlayer;
    char again;

    do {
        currentPlayer = 'X';  
        initBoard();          

        while (checkWinner() == '\0' && !isBoardFull()) {
            system("cls");  
            printBoard();
            playGame(&currentPlayer);
        }

        system("cls");
        printBoard();

        char winner = checkWinner();
        if (winner != '\0') {
            printf("Player %c wins!\n", winner);
        } else {
            printf("It's a tie!\n");
        }

        printf("Want to play again? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}


void printBoard(){for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i != 2) {
            printf("---+---+---\n");
        }
    }
 
    
}

void initBoard(){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            board[i][j]=' ';
        }
    }
}

void makeMove(char x, int a,int b){
    board[a][b]=x;
}


char checkWinner() {
    int i;
    for (i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return board[i][0];
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return board[0][i];
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return board[0][2]; 
    }
    return '\0'; 
}

   

int isBoardFull(){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(board[i][j]==' '){
                return 0;
            }
        }
    }
    return 1;
}

void playGame(char *currentPlayer){

    printf("Player %c, enter your move: ", *currentPlayer);
    int a, b;
    scanf("%d %d", &a, &b);
    while (a < 0 || a > 2 || b < 0 || b > 2 || board[a][b] != ' ') {
        printf("Invalid move. Please try again: ");
        scanf("%d %d", &a, &b);
    }
    makeMove(*currentPlayer, a, b);

    if (*currentPlayer == 'X'){
        *currentPlayer = 'O';
    }else{
        *currentPlayer = 'X';
    }

  
}
