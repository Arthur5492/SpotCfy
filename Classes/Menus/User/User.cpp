#include "User.hpp"

void User::CompleteScreen()
{
  UserBox();
  Exit();

  Name();
  Username();
  Password();
  bool question = Premium();//Se true, n„o mostra mais nada
  bool yesno=true;//true: ComeÁa com o da esquerda / false: o da direita

while(true)
 {
   if(question==false)YesNo_Box(yesno,false);
    int key = _getch();

    if(key==27)
    {
      break;
    }
    if(question==false)
    {
      if(key==ENTER)
        {
        if(yesno==true)
        {
          question=true;
          PremiumCourse(yesno);
        }
            else
            {
              select->Play("from 0",500);
              YesNo_Box(yesno,true);
              Message("Okay :(",3,true);
              question=true;
            }
        }
          else if(key ==KEY_LEFT)
          {
            yesno = true;
            option->Play("from 0",200);
            YesNo_Box(yesno,false);
          }
            else if(key ==KEY_RIGHT)
            {
              yesno = false;
              option->Play("from 0",200);
              YesNo_Box(yesno,false);
            }
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

bool User::Premium()
{
  Color(1);
  MakeBox(82,32,3,46);
  Textcolor("Premium Status: ",3,83,34);
    if(AtualUser->GetPremium()==0)
    {
      cout<<"Not premium";
      sleep(2);
      select->Play("from 0",300);
      Message("Heyy!,Wanna become a premium member?",2,3,true);
      sleep(1);
      return false;
    }
        else cout<<"Premium member!!";
        if(AtualUser->GetStatus()==1)
          Textcolor("You are my premium best friend :D :D:D:D:D:D:D:D",2,98,34);
        return true;
}
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
void User::YesNo_Box(bool Yes_No, bool hide)
{
  if(hide !=true)
  {
    if(Yes_No==true)//Se est√° no yes
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
  } else
    {
      int y=37;
      for(size_t i=0;i<9;i++)
      {
        gotoxy(81,y);
        cout<<"                                                 ";
        y++;
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
void User::PremiumQuestion(bool wich, bool hide)
{
  if(hide==false)
  {
    if(wich==true)//esquerdo
    {
      Color(3);
      MakeBox(110,37,3,15);
      Textcolor("SPOTCFY",3,114,39);

      Color(2);
      MakeBox(85,37,3,15);
      Textcolor("SPOTCFY",2,89,39);
      Color(7);
    }
      else
      {
        Color(3);
        MakeBox(85,37,3,15);
          Textcolor("SPOTCFY",3,89,39);

        Color(2);
        MakeBox(110,37,3,15);
        Textcolor("SPOTCFY",2,114,39);
        Color(7);
      }
  }
  else
  {
    for(size_t i=0;i<4;i++)
    {
      int y = 36;
      gotoxy(85,y);
      cout<<"                                            ";
      y++;
    }
  }
}
///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
void User::PremiumCourse(bool yesno)
{
    select->Play("from 0",500);
    YesNo_Box(false,true);
    Message("Soo, answer a simple question..",3,true);
    sleep(1);
    select->Play("from 0",300);
    Message("What is the best Program produced in C++??",3,7,true);
  bool premium=true;
    PremiumQuestion(premium,false);
    while(true)//Nested loop for Premium question
    {
      int key=_getch();
      if(key==ENTER)
      {
        select->Play("from 0",200);
        Message("Wright Answer!!",2,true);
        PremiumQuestion(premium,true);
        AtualUser->TurnPremium();
        Message("Premium acquired!!!",2,true);
        good->Play("from 0",300);
        Textcolor("Premium Status: You are a fcking premium!!",3,83,34);
        break;
      }
        else if(key == KEY_LEFT)
        {
          premium=true;
          option->Play("from 0",300);
          PremiumQuestion(premium,false);
        }
          else if(key== KEY_RIGHT)
          {
            premium=false;
            option->Play("from 0",300);
            PremiumQuestion(premium,false);
          }
    }
}
