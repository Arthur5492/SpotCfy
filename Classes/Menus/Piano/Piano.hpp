#ifndef PIANO_HPP
#define PIANO_HPP

#include "../../Mainmenu/Mainmenu.cpp"

class Piano : public Box
{
private:
  char ch;//Detect wich key pressed

  string left;
  string right;

  //USER
  Login *User;
  //Soundtrack
  Music *PianoMenu;
public:
  Piano(Login* userio) : User(userio){};//I dont need
  ~Piano(){
    delete PianoMenu;
    delete User;
  };

  void ConstructAll();// Executa todos as telas e dps o piano na mesma funcao
  void TopText();//Textos de cima
  void LeftSideText();//Textos do lado esquerdo
  void RightSideText();//Textos do lado direito

  void Keys();//This is where the while and _kbhit are, to check if keys are pressed

  void Key(string CurrentKey,int x1,int x2,int x3,int x4,int x5);//Toca nota natural

  void KeyS(string CurrentKey,int x1);//Toca nota acidentada(# e b)

  void PickKey(string Note,int x1,int x2,int x3,int x4,int x5);//Para Nota natural
  void PickKey(string Note,int x1);//Para Nota acidentada(# e b)

  void PlayCurrent(Music at,bool multiplenotes);//Play music at note

  void Transpose(int num, int x, int y);//Change color of transposed notes

};



#endif
