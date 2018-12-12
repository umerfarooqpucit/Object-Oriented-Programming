#include<Windows.h>
#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include "Chess.h"
using namespace std;



/* PLEASE OPEN IN 100x30 CONSOLE*/

void playGame();
HANDLE hStdin; 
DWORD fdwSaveOldMode;
void GetMousePosWin(MOUSE_EVENT_RECORD);
COORD CursorPosition;
void setCursor(bool visible, DWORD size); // set bool visible = 0 - invisible, bool visible = 1 - visible
void gotoXY(short int a,short int b);
int wherex();
int wherey();
void setColor(int a);
int main()
{
	setCursor(0,0);
	
	DWORD cNumRead, fdwMode, i; 
	INPUT_RECORD irInBuf[128]; 
	int counter=0;
	// Get the standard input handle. 
	hStdin = GetStdHandle(STD_INPUT_HANDLE); 
	// Save the current input mode, to be restored on exit. 
	GetConsoleMode(hStdin, &fdwSaveOldMode);
	// Enable the mouse input events. 
	fdwMode =  ENABLE_MOUSE_INPUT; 
	SetConsoleMode(hStdin, fdwMode); 
	cout<<endl;
	setColor(8);
	cout<<"          CCCCCC   HHH     HHH   EEEEEEEEE    SSSSSSS    SSSSSSS            o        o  o  o"<<endl;
	Sleep(80);
	setColor(8);
	cout<<"         CCCCCCC   HHH     HHH   EEEEEEEEE   SSSSSSSS   SSSSSSSS          ooooo      ooooooo"<<endl;
	Sleep(80);
	setColor(15);
	cout<<"        CCC        HHH     HHH   EEE         SSS        SSS               ooooo      ooooooo"<<endl;
    Sleep(80);
	setColor(15);
	cout<<"        CCC        HHH     HHH   EEE         SSS        SSS                ooo         ooo  "<<endl;
	Sleep(80);
	setColor(15);
	cout<<"        CCC        HHHHHHHHHHH   EEEEEEEE    SSSSSSS    SSSSSSS            ooo         ooo  "<<endl;                    
    Sleep(80);
	setColor(15);
	cout<<"        CCC        HHHHHHHHHHH   EEEEEEEE     SSSSSSS    SSSSSSS           ooo         ooo  "<<endl;                   
    Sleep(80);
	setColor(15);
	cout<<"        CCC        HHH     HHH   EEE              SSS        SSS           ooo         ooo  "<<endl;                       
    Sleep(80);
	setColor(15);
	cout<<"        CCC        HHH     HHH   EEE              SSS        SSS           ooo         ooo  "<<endl;                      
    Sleep(80);
	setColor(8);
	cout<<"         CCCCCCC   HHH     HHH   EEEEEEEEE   SSSSSSSS   SSSSSSSS         ooooooo     ooooooo"<<endl;                            
    Sleep(80);
	setColor(8);
	cout<<"          CCCCCC   HHH     HHH   EEEEEEEEE   SSSSSSS    SSSSSSS          OOOOOOO     OOOOOOO"<<endl;
	gotoXY(1,28);
	cout<<"Copyright 2016					(  \xDB  are buttons)";
	gotoXY(1,27);
	cout << "\xDB Developers";
    gotoXY(45,12);
	cout << "MENU";
	gotoXY(39,14);
	cout << "\xDB Play";
	gotoXY(39,16);
	cout << "\xDB Help";
	gotoXY(39,18);
	cout << "\xDB Exit";
	while (!counter) 
	{ 
		// Wait for the events. 
		ReadConsoleInput( 
			hStdin,      // input buffer handle 
			irInBuf,     // buffer to read into 
			128,         // size of read buffer 
			&cNumRead)  ;// number of records read 
		// Dispatch the events to the appropriate handler. 
		for (i = 0; i < cNumRead; i++) 
		{
			switch(irInBuf[i].EventType) 
			{ 
				case MOUSE_EVENT: // mouse input 
					
					GetMousePosWin(irInBuf[i].Event.MouseEvent);
					break; 
				case FOCUS_EVENT:  // disregard focus events 
				case MENU_EVENT:   // disregard menu events 
					break; 
			} 
		}
	}
	SetConsoleMode(hStdin, fdwSaveOldMode);
	return 0; 
}
void GetMousePosWin(MOUSE_EVENT_RECORD mer)
{
	int x,y;
	INPUT_RECORD Inrec;
	DWORD evRead;
	HANDLE hStdIn;
	DWORD dwMode;
	bool Captured=false;
		
	hStdIn = GetStdHandle(STD_INPUT_HANDLE);
	dwMode =  ENABLE_MOUSE_INPUT;

	if( SetConsoleMode( hStdIn, dwMode | ENABLE_MOUSE_INPUT) == TRUE)

		GetConsoleMode(hStdIn, &dwMode);
		SetConsoleMode(hStdIn, (dwMode & (ENABLE_MOUSE_INPUT)));


		do
		{
			PeekConsoleInput(hStdIn, &Inrec, 1, &evRead);

			if( evRead ) 
			{ 
				ReadConsoleInput(hStdIn, &Inrec, 1, &evRead);
				x= Inrec.Event.MouseEvent.dwMousePosition.X ;
				y= Inrec.Event.MouseEvent.dwMousePosition.Y ;
				switch (Inrec.EventType )
				{

				case MOUSE_EVENT:
					{
						Captured = true;	
					}
				}
			}

		}while(!Captured);
	
	if((x>=39 && x<=44) && y==14)
	{
		gotoXY(45,16);
		cout<<" ";
		gotoXY(45,18);
		cout<<" ";
		gotoXY(45,14);
		cout<<char(251);
	}
	else if((x>=39 && x<=44) && y==16)
	{
		gotoXY(45,14);
		cout<<" ";
		gotoXY(45,18);
		cout<<" ";
		gotoXY(45,16);
		cout<<char(251);
	}
	else if((x>=39 && x<=44) && y==18)
	{
		gotoXY(45,14);
		cout<<" ";
		gotoXY(45,16);
		cout<<" ";
		gotoXY(45,18);
		cout<<char(251);
	}
	else
	{
		gotoXY(45,18);
		cout<<" ";
		gotoXY(45,14);
		cout<<" ";
		gotoXY(45,16);
		cout<<" ";
	}
	if(((x>=45 && x<=47) && y==22) && mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	{
		SetConsoleMode(hStdin, fdwSaveOldMode);
		setCursor(1,10);
		exit(0);
	}
	if(((x>=52 && x<=53) && y==22) && mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	{
		system("CLS");
		main();
	}
	if((x==1 && y==27) && mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	{
		gotoXY(38,12);
		cout<<"                          ";
		gotoXY(38,14);
		cout<<"                         ";
		gotoXY(38,16);
		cout<<"                           ";
		gotoXY(38,18);
		cout<<"                         ";
		gotoXY(1,27);
		cout<<"                         ";
		for(int j=1,k=77;j<=35;j++,k--){
			gotoXY(j,15);
			cout<<" Developed By";
			gotoXY(k,17);
			cout<<"Sher Ali & Umer Farooq ";
			Sleep(80);
		}
		gotoXY(80,30);
		cout<<"\xDB Back";
	}
	if((x==39 && y==14) && mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	{
		gotoXY(38,12);
		cout<<"                          ";
		gotoXY(38,14);
		cout<<"                         ";
		gotoXY(38,16);
		cout<<"                           ";
		gotoXY(38,18);
		cout<<"                         ";
		gotoXY(30,16);
		cout<<"LOADING ";
		for(int j=0;j<40;j++){
			cout<<char(178);
			Sleep(80);
		}
		system("CLS");	
		playGame();
	}
	if((x==39 && y==16) && mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	{
		system("CLS");
		cout << "\t\t\t\tHOW TO PLAY\n\n";
		cout << "\t\t\tINTRODUCTION\n\n";
		cout << "1.The Board is divided into 8 rows and 8 columns.\n";
		cout << "2.Columns are labeled with alphabets.\n";
		cout << "3.Rows are labeled with numbers.\n";
		cout << "4.It is a two players game.\n\n";
		cout << "\t\t\tHOW TO MAKE A MOVE\n\n";
		cout << "1.First enter the cell address to move from\n then enter the cell address to move to. For example,\n";
		cout << " if the cell's address to move from is E1\n and the address to move to is E4 you will write E1E4 or simply e1e4.\n";
		cout << "2.You can write address in both uppercase or lowercase format.\n\n";
		cout << "\t\t\tMOVES\n\n";
		cout << "1.It has original Chess Game's rules.\n";
		cout << "2.Any invalid move will give an error.\n";
		cout << "3.Moves are as follows :\n";
		cout << "->King(k) : Can move to only one box around it.\n";
		cout << "->Queen(q) : Can move through whole board.\n";
		cout << "->Rook(r) : Can move straight line from front and side.\n";
		cout << "->Bishop(b) : Can move through diagonals.\n";
		cout << "->Pawn(p) : Can move 2 cells from front at start of game and one afterwards.\n";
		cout << "->Knight(n) : Can move in L shape in any direction.(2 cells from front and 1 from side.)\n\n\n";
		cout << "Developed By :\nSher Ali BCSF15M012\nM UMER FAROOQ BCSF15M025\n";
		gotoXY(70,32);
		setCursor(1,10);
		cout<<"Press Any Key to go Back";
		_getch();
		system("CLS");
		main();
	}
	if((x==39 && y==18) && mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	{
		gotoXY(38,12);
		cout<<"                           ";
		gotoXY(38,14);
		cout<<"                           ";
		gotoXY(38,16);
		cout<<"                           ";
		gotoXY(38,18);
		cout<<"                           ";
		gotoXY(35,20);
		cout<<"Are you Sure you want to Exit?";
		gotoXY(44,21);
		cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(187)<<"  "<<char(201)<<char(205)<<char(205)<<char(187);
		gotoXY(44,22);
		cout<<char(186)<<"Yes"<<char(186)<<"  "<<char(186)<<"No"<<char(186);
		gotoXY(44,23);
		cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(188)<<"  "<<char(200)<<char(205)<<char(205)<<char(188);
	}
	if((x==80 && y==30) && mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	{
		system("CLS");
		main();
	}
}
void playGame()
{
	setCursor(1,10);
  Chess *chess = new Chess;
  chess->displayBoard();
  char move[5] = { '\0' };
  do {
    do {
      if (chess->getTurn()) {
        cout << "Player1's Move: ";
      } else {
        cout << "Player2's Move: ";
      }
      cin >> move;
      if ((toupper(move[0]) == 'E') && (toupper(move[1]) == 'X') && (toupper(move[2]) == 'I') && (toupper(move[3]) == 'T')) {
        if (chess->getTurn()) {
          system("cls");
          cout << "Winner: Player2\n";
          cout << "Press any key to continue...";
          _getch();
          system("CLS");
		  main();
        } else { 
          system("cls");
          cout << "Winner: Player1\n";
          cout << "Press any key to continue...";
          _getch();
          system("CLS");
		  main();
        }
      }
      chess->setInput(move);
      chess->setCoordinatesOfPiece();
    } while (chess->inputValidation());
    if (chess->getTurn()) {
      if (chess->getPieceLocation() == 'P' && chess->isPawnValid()) {
        chess->stepsOfPlayer1();
      } else if (chess->getPieceLocation() == 'R' && chess->isRookValid()) {
        chess->stepsOfPlayer1();
      } else if (chess->getPieceLocation() == 'N' && chess->isKnightValid()) {
        chess->stepsOfPlayer1();
      } else if (chess->getPieceLocation() == 'B' && chess->isBishopValid()) {
        chess->stepsOfPlayer1();
      } else if (chess->getPieceLocation() == 'Q' && chess->isQueenValid()) {
        chess->stepsOfPlayer1();
      } else if (chess->getPieceLocation() == 'K' && chess->isKingValid()) {
        chess->stepsOfPlayer1();
      } else {
        cout << "Illegal Move!!!\n";
      }
    } else {
      if (chess->getPieceLocation() == 'p' && chess->isPawnValid()) {
        chess->stepsOfPlayer2();
      } else if (chess->getPieceLocation() == 'r' && chess->isRookValid()) {
        chess->stepsOfPlayer2();
      } else if (chess->getPieceLocation() == 'n' && chess->isKnightValid()) {
        chess->stepsOfPlayer2();
      } else if (chess->getPieceLocation() == 'b' && chess->isBishopValid()) {
        chess->stepsOfPlayer2();
      } else if (chess->getPieceLocation() == 'q' && chess->isQueenValid()) {
        chess->stepsOfPlayer2();
      } else if (chess->getPieceLocation() == 'k' && chess->isKingValid()) {
        chess->stepsOfPlayer2();
      } else {
        cout << "Illegal Move!!!\n";
      }
    }
  } while (chess->checkmate());
  system("cls");
  if (chess->gameWon()) {
    cout << "Winner: Player1\n";
    cout << "Press any key to continue...";
    _getch();
	system("CLS");
	main();
  } else {
    cout << "Winner: Player2\n";
    cout << "Press any key to continue...";
    _getch();
	system("CLS");
	main();
  }
}
void setCursor(bool visible, DWORD size) // set bool visible = 0 - invisible, bool visible = 1 - visible
{
	HANDLE console=GetStdHandle(STD_OUTPUT_HANDLE);
	if(size == 0)
	{
		size = 20;	// default cursor size Changing to numbers from 1 to 20, decreases cursor width
	}
	CONSOLE_CURSOR_INFO lpCursor;	
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor);
}
void gotoXY(short int a,short int b)
{
	HANDLE screen=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position;
	position.X=a;
	position.Y=b;
	SetConsoleCursorPosition(screen,position);
}
int wherex()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  HANDLE screen=GetStdHandle(STD_OUTPUT_HANDLE);
  if (!GetConsoleScreenBufferInfo(screen,&csbi))
    return -1;
  return csbi.dwCursorPosition.X;
  }

int wherey()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  HANDLE screen=GetStdHandle(STD_OUTPUT_HANDLE);
  if (!GetConsoleScreenBufferInfo(screen,&csbi))
    return -1;
  return csbi.dwCursorPosition.Y;
  }
void setColor(int a)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}