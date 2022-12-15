#ifndef BOX_HPP
#define BOX_HPP

////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdio>
#include <time.h>
#include <fstream>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <Winuser.h>
#include <fstream>
#include <algorithm>
#include <utility>
#include <cstdlib>
#include <sstream>
#include <cctype>
#include <locale.h>

#include "../Music\Music.cpp"//Pra toca musica
#include "../../Misc/definenotes.hpp" //Transforma frequencia das notas em string ex: A4 = 440
//Não estou usando mais, porém tenho saudades

#define KEY_UP    72 // To detect arrow keys
#define KEY_DOWN  80 // To detect arrow keys
#define KEY_LEFT  75 // To detect arrow keys
#define KEY_RIGHT 77 // To detect arrow keys
#define ENTER     13 // To detect enter

using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////
class Box
{
protected:
    int big_x =1;
    int big_y=0;
    int big_tall=41;
    int big_wdt=166;//For box statistics
protected:
  Music *select = new Music("sys\\select.wav","wav","select");//Som de confirmar opcao
  Music *error = new Music("sys\\error.wav","wav","error");//Som de Erro
  Music *option = new Music("sys\\option.wav","wav","option");//Som de selecionar opcao
  Music *sucefull = new Music("sys\\sucefull.wav","wav","sucefull");//Som de algo que deu certo
  Music *entered = new Music("sys\\entered.wav","wav","entered");//Som de quanto entra em algo
  Music *talk = new Music("sys\\talk.wav","wav","talk");// Som de fala
  public:
    Box()
    {
      select->LoadMusic();
      error->LoadMusic();
      option->LoadMusic();
      sucefull->LoadMusic();
      talk->LoadMusic();
      entered->LoadMusic();
    };
    ~Box()
    {
      delete select;
      delete error;
      delete option;
      delete sucefull;
      delete talk;
      delete entered;
    };
    //Funcoes principais
    void MakeBox(int x,int y,int tall,int wdt); //Criar a Box
    void MakeASCII(string FileName, int x, int y);//Coloca os ASCII

////////////////////////////////////////////////////////////////////////////////////////////

    // Miscelaneous functions
    void BigMenu(){MakeBox(big_x, big_y, big_tall, big_wdt);}
    ///
    void gotoxy(int x,int y); //Poder escolher onde colocar o cursor do cmd
    ///
    void Color(int i){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);}
    //^^^Colocar corzinha no que eu quiser no terminal
    ///
    void LineOfLines(int n); //Faz a altura Da Box
    ///
    void Wait(int milisseconds);//this_thread and Chronos to wait in milliseconds
    ///
    int SafeCin(string title, int color, int i, int x,int y);//Make sure if a cin is working, int usage
    //^^^^ title = the title of input, color = Color of title, int i is the input, x and y, set the position
    ///
    string SafeCin(string title, int color, string input, int x,int y);//Make sure if a cin is working
    //^^^^ title = the title of input, color = Color of title, string input is the input, x and y sets the position
    ///
    void Talk(string Text);//String printa char por char e com som
    void Talk(string Text,int milliseconds);//Velocidade que printa o char
    ///
    void Textcolor(string text, int color, int x, int y);//Texto com cor, criei só depois de fazer metade do codigo sem :/
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////




};

#endif
