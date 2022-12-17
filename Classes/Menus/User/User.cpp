#include "User.hpp"

void User::CompleteScreen()
{
  bool yesno=true;
  UserBox();
  Exit();

  Name();
  Username();
  Password();
  Premium();

while(true)
{
  YesNo_Box(yesno,true);
    int key = _getch();

    if(key==27)
    {
      break;
    }
    if(key==ENTER)
    {
        if(yesno==true)
        {
          select->Play("from 0",500);

        }
          else
          {
            select->Play("from 0",500);
            Message("Okay :(",3,true);

          }
    }
    else if(key ==KEY_LEFT)
    {
      yesno = true;
      option->Play("from 0",200);
      YesNo_Box(yesno,true);
    }
      else if(key ==KEY_RIGHT)
      {
        yesno = false;
        option->Play("from 0",200);
        YesNo_Box(yesno,true);
      }

  }
}

void User::UserBox()
{
  system("cls");
  MakeBox(80,1,45,50);
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
void User::Name()
{
  Color(1);
  MakeBox(82,17,3,46);
  Textcolor("Your name:",3,83,19);
    cout<<AtualUser->GetName();
}
////////////////////////////////////////////////////////////////////////////////////////////
void User::Username()
{
  Color(1);
  MakeBox(82,22,3,46);
  Textcolor("Your Username:",3,83,24);
    cout<<AtualUser->GetUsername();
}

void User::Password()
{
  Color(1);
  MakeBox(82,27,3,46);
  Textcolor("Your password:",3,83,29);
    cout<<AtualUser->GetPassword();
}

void User::Premium()
{
  Color(1);
  MakeBox(82,32,3,46);
  Textcolor("Premium Status: ",3,83,34);
    if(AtualUser->GetPremium()==0)
    {
      cout<<"Not premium";
      // sleep(1);
      select->Play("from 0",300);
      Message("Want to become a premium member?",2,3,true);
    }
        else cout<<"Premium member!!";
}
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
void User::YesNo_Box(bool Yes_No, bool hide)
{
  if(hide !=false)
  {
    if(Yes_No==true)//Se está no yes
    {
      Color(2);
      MakeBox(82,37,8,20);
        MakeASCII("Mainmenus/User/Yes.txt",83,38);

      Color(3);
      MakeBox(108,37,8,20);

      Color(3);
      MakeASCII("Mainmenus/User/No.txt",111,38);
      Color(7);

      gotoxy(99,44);
    }   else
        {
          Color(3);
          MakeBox(82,37,8,20);
          MakeASCII("Mainmenus/User/Yes.txt",83,38);

          Color(2);
          MakeBox(108,37,8,20);
          MakeASCII("Mainmenus/User/No.txt",111,38);
          Color(7);
        }
  }

}
////////////////////////////////////////////////////////////////////////////////////////////
void User::Exit()
{
  Color(4);
  MakeBox(54,2,10,20);
  Textcolor("Press ESC",4,59  ,6);
  Textcolor("To exit",4,60,9);
  Color(7);
}
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
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
void User::PremiumQuestion()
{
  Message("Soo, answer a simple question..",2,true);
  sleep(2);
  Message("What is the best Program produced in C++",2,true);

  for(size_t i=0;i<9;i++)
  {
    int y=37;
    gotoxy(82,y);
    cout<<"                                          ";
    y++;
  }
  // MakeASCII("Mainmenus/Users/SpotCfy.txt",);

}
