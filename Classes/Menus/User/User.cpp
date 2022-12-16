#include "User.hpp"

void User::CompleteScreen()
{
  UserBox();
}

void User::UserBox()
{
  MakeBox(80,1,40,50);
  Color(3);
  MakeASCII("Mainmenus/User/Userlogo.txt",91,3);
  Color(7);
  MakeBox(80,1,10,50);

  Color(2);
  MakeBox(1,0,13,48);
  MakeASCII("Mainmenus/User/SpotCfy.txt",2,1);
  Color(7);
}
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
void User::Message(string message,int color, bool talk)//Message in a static location, with a color
{
  gotoxy(80,14);
      cout<<"                                                  ";
        gotoxy(91,14);
          Color(color);
          if (talk==true)
            Talk(message);
              else cout<<message;
          Color(7);
}
void User::Message(string message,int color,int variation,bool talk)//Message in a static location, with a color
{
  gotoxy(80,14);
      cout<<"                                                  ";
        gotoxy(91-variation,14);
          Color(color);
            if (talk==true)
              Talk(message);
              else cout<<message;
          Color(7);
}
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
