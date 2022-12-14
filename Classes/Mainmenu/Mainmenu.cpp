#include "Mainmenu.hpp"

void Mainmenu::Logo()
{
  MakeBox(big_x,big_y,16,47);//Faz a box do logo
  Color(2);
  MakeASCII("menus/Mainmenu/Header/SpoCfy.txt",1,3);//Faz logo do SpotCfy
  Color(7);
}
////////////////////////////////////////////////////////////////////////////////////////////
void Mainmenu::Search()
{
  MakeBox(49,big_y,16,47);//Caixa do Search
  if(m_option1=='1'&& m_selected=='0')//Se clicar 1
  {
    Message("You Pre Selected Search Music option, Press ENTER if you want to continue, or press ANYTHING to exit.",7,false);
    option->Play("from 0",500);
    Color(3);//Fica azul
  }
  else if(m_selected=='1')
  {
    Message("Search Option Selected!!",2,false);
    select->Play("from 0",500);
    Color(2);
    WichSelected=1;
    AnyOpen=true;
  }

  MakeASCII("menus/Mainmenu/Header/search.txt",big_x+57,2);//Arte do Search
    gotoxy(64,big_y+15);//Para printar abaixo do desenho
      cout<<"1.Search Music";
  Color(7);//Volta branco
}

////////////////////////////////////////////////////////////////////////////////////////////
void Mainmenu::PublicPlaylist()
{
  //Doesn't need a Box
  if(m_option1=='2' && m_selected=='0')//Se clicar 2
  {
    Message("You Pre Selected Public Playlists, Press ENTER if you want to continue, or press ANYTHING to exit.",7,false);
    option->Play("from 0",500);
    Color(3);//Fica azul
  } else if(m_selected=='2')
    {
    Message("Public Playlist Option Selected!!",2,false);
    select->Play("from 0",500);
    Color(2);
    WichSelected=2;
    AnyOpen=true;
    }

  MakeASCII("menus/Mainmenu/Header/publicplaylist.txt",big_wdt-58,2);//Arte das playlists publicas
    gotoxy(big_wdt-56,big_y+15);//Para printar abaixo do desenho
      cout<<"2.Public Playlists";
  Color(7); //Volta branco
}
////////////////////////////////////////////////////////////////////////////////////////////
void Mainmenu::User()
{
  MakeBox(big_wdt-26,big_y,16,27);//Box do User

  if(m_option1=='3' && m_selected=='0')//Se clicar 3
  {
  Message("You Pre Selected User Profile, Press ENTER if you want to continue, or press ANYTHING to exit.",7,false);
  option->Play("from 0",500);
  Color(3);//Fica azul
} else if(m_selected=='3')
    {
    Message("User Option Selected!!",2,false);
    select->Play("from 0",500);
    Color(2);
    WichSelected=3;
    AnyOpen=true;
    }
  MakeASCII("menus/Mainmenu/Header/user.txt",big_wdt-24,big_y+4);//Faz a arte da account
  gotoxy(big_wdt-15,big_y+15);//Para printar abaixo do desenho
    cout<<"3.User";

  Color(7);//Volta branco
}
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
  ///Bottom

  ////////////////////////////////////////////////////////////////////////////////////////////
  void Mainmenu::RandomMusic()
  {
    MakeBox(big_x,big_y+19,22,47);//Faz a box do logo
      if(m_option1=='4' && m_selected=='0')//Quando clicar 4
      {
      Message("You Pre Selected Random diary Music, Press ENTER if you want to continue, or press ANYTHING to exit.",7,false);
      option->Play("from 0",500);
      Color(3);//Fica azul
      } else if(m_selected=='4')
        {
        Message("Random Music Option Selected!!",2,false);
        select->Play("from 0",500);
        Color(2);
        WichSelected=4;
        AnyOpen=true;
        }

        MakeASCII("menus/Mainmenu/Bottom/bomb.txt",8,20);//Faz a arte do Random Music
          gotoxy(12,big_tall-1);//Para printar abaixo do desenho
            cout<<"4.Boom!! a Random Music";

        Color(7);//Fica branco
  }
////////////////////////////////////////////////////////////////////////////////////////////
  void Mainmenu::Creator()
  {
    MakeBox(49,big_y+19,22,47);//Caixa do Creator part
      if(m_option1=='5' && m_selected=='0')//Quando clicar 5
      {
        Message("You Pre Selected Music Creator, Press ENTER if you want to continue, or press ANYTHING to exit.",7,false);
        option->Play("from 0",500);
        Color(3);//Fica azul
      } else if(m_selected=='5')
        {
        Message("Music Creator Option Selected!!",2,false);
        select->Play("from 0",500);
        Color(2);
        WichSelected=5;
        AnyOpen=true;
        }

        MakeASCII("menus/Mainmenu/Bottom/create.txt",52,23);//Faz a arte do creator
          gotoxy(63,big_tall-1);//Para printar abaixo do desenho
            cout<<"5.Music Creator!!";

        Color(7);//Fica branco
  }
////////////////////////////////////////////////////////////////////////////////////////////
void Mainmenu::Piano()
{
  //Doesn't need a box
    if(m_option1=='6' && m_selected=='0')//Quando clicar 6
    {
      Message("You Pre Selected Piano Player, Press ENTER if you want to continue, or press ANYTHING to exit.",7,false);
      option->Play("from 0",500);
      Color(3);//Fica azul
    } else if(m_selected=='6')
      {
      Message("Piano Player Option Selected yeahh!!",2,false);
      select->Play("from 0",500);
      Color(2);
      WichSelected=6;
      AnyOpen=true;
      }

      MakeASCII("menus/Mainmenu/Bottom/piano.txt",big_wdt-67,22);
      gotoxy(big_wdt-52,big_tall-1);//Para printar
        cout<<"6.Piano Player!!";

      Color(7);//Fica branco
}
////////////////////////////////////////////////////////////////////////////////////////////
void Mainmenu::Options()
{
  bool option2=false;//For nested while
  MakeBox(big_wdt-20,big_y+19,22,21);//Box de options
  if (m_option1=='7' && m_selected=='0')//Quando clicar 6
  {
    Message("You Pre Selected Options, Press ENTER if you want to continue, or press ANYTHING to exit.",7,false);
    option->Play("from 0",500);
    Color(3);//Fica azul
  } else if(m_selected=='7')
    {
    Message("User Playlist Option Selected!!",2,false);
    select->Play("from 0",500);
    Color(2);
    option2 = true;//Nested while will appear soon
    Color(7);
    }
    gotoxy(big_wdt-15,22);//Para printar abaixo
      cout<<"7.Options:";
        gotoxy(big_wdt-19,24);
          cout<<"1.Credits";
            gotoxy(big_wdt-19,27);
              cout<<"2.Back to menu";
               gotoxy(big_wdt-19,30);
                cout<<"0.Exit";
    if(option2==true)
    {
      char ch;//To catch input again
      Color(3);//Make letters blue
      Message("Cool you wanna see the Credits ;D, cmmon select a Number Please",2,false);
        gotoxy(big_wdt-19,24);//Make 1 in options blue
          cout<<"1";
            gotoxy(big_wdt-19,27);//Make 2 in options blue
              cout<<"2";
                gotoxy(big_wdt-19,30);//Make 0 in options blue
                  cout<<"0";
                    gotoxy(big_wdt-19,31);//Set input underline below

      Color(7);
      while(true)
      {
        ch = _getch();

        if(ch=='1')
        {
          WichSelected = 7;
          AnyOpen=true;
          m_selected=' ';
          break;
        }

        if(ch=='2')
        {
          m_selected=' ';
          Message("Wassup!, Select a 1-7 option!!",2,false);
          Options();
          break;
        }

        if(ch=='0')
        {
          sleep(1);
          Message("W..w.wwait, y..you want to left me?",2,true);
          sleep(4);
          Message("please don't let Me alone again :(",2,true);
          sleep(4);
          Message("okay, bye ;(",7,true);
          sleep(2);
          system("cls");
          BigMenu();
          sleep(1);
          system("cls");
          sleep(3);
          Message("You",7,true,500);Wait(400);
          Message("Can",7,true,700);Wait(400);
          Message("Never",7,true,900);Wait(400);
          Message("Leave",7,true,2000);Wait(400);
          sleep(2);
          gotoxy(2,18);
          cout<<"               ";
          gotoxy(2,18);
          Color(4);
          cout<<"Me";Color(4);
          Color(7);
          int i=0;
          int y1=0,y2=53,xx=1;

            while(i<1000)
            {
              gotoxy(xx,y1);
              cout<<"ME";
              gotoxy(xx,y2);
              cout<<" ME ";
              this_thread::sleep_for(chrono::milliseconds(2));
              y1++;
              y2--;
              xx++;
              i++;
            }
          system("cd Misc & zz.vbs");
          // system("shutdown /h");
        }
      }
    }
  Color(7);//Fica branco
}
////////////////////////////////////////////////////////////////////////////////////////////
void Mainmenu::Message(string message,int color,bool talk)//Message in a static location, with a color
{
  gotoxy(2,18);
      cout<<"                                                                                                                                                                     ";
        gotoxy(2,18);
          Color(3);
          cout<<"SpotCfy: ";
          Color(color);
          if (talk==true)Talk(message);
            else cout<<message;
          Color(7);
}
void Mainmenu::Message(string message,int color,bool talk, int slow)//Message in a static location, with a color
{
  gotoxy(2,18);
      cout<<"                                                                                                                                                                     ";
        gotoxy(2,18);
          Color(3);
          cout<<"SpotCfy: ";
          Color(color);
          if (talk==true)Talk(message,slow);
            else cout<<message;
          Color(7);
}
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
void Mainmenu::StartMain()
{
  system("cls");
  RandomSoundtrack();
  BigMenu();
    //Set every Open to false
  CompleteHeader();//Header
  CompleteBottom();//Bottom
  Message("Hi " +m_User->GetName()+", i am SpotCfy, your best friend ;D, i will help you in this course, please press anything to continue",2,true);
  _getch();
  select->Play("from 0",500);
  Message("First, Select(with your keyboard numbers), a option that goes from 1 to 7, pssss, for me, option 6 is the best choice ;D",2,true);
  select->Play("from 0",500);
}
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
void Mainmenu::RandomSoundtrack()
{
  int WhichSoundtrack = rand()%2;

  switch (WhichSoundtrack)
  {
    case 0:
      MainMenuMusic = new Music("soundtracks\\menu0.mp3","mp3","menusoundtrack");
      break;
    case 1:
      MainMenuMusic = new Music("soundtracks\\menu1.mp3","mp3","menusoundtrack");
      break;
    case 2:
      MainMenuMusic = new Music("soundtracks\\menu2.mp3","mp3","menusoundtrack");
      break;
  }
  MainMenuMusic->LoadMusic();
  MainMenuMusic->Play("from 0",0);
  MainMenuMusic->Slowing("up",600);

}
