
#include "Classes/Menus/Credits/Credits.cpp"

HWND WINAPI GetConsoleWindowNT(void);
int main()
{
  ////////////////////////////////////////////////////////////////////////////////////////////
    ///Get users screen size
    CONSOLE_SCREEN_BUFFER_INFO csbi;
      int columns, rows;
      GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
      columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
      rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
      string UserConsoleWidth = "mode con: cols="+to_string(columns)+" lines="+to_string(rows);
  ////////////////////////////////////////////////////////////////////////////////////////////
  #if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)


  ///For portuguese
  setlocale(LC_ALL,"portuguese");

  //Get users path
  char UserPath[MAX_PATH];
GetCurrentDirectoryA(MAX_PATH, UserPath);


  system("mode con: cols=211 lines=49");//Aqui coloca o padrao de tamanho de tela que o programa precisa
  system("cls");

//INSTANCIAS CLASSES
  Login Loginzada;
  Register Registration;
  Mainmenu *Main_menu;
  Piano *c_Piano;
  User *Usuario;
  Credits *c_Credits;

//MISC FUNCTIONS TO USE IN MAIN
  Box gotoxy;//To use gotoxy here
  Box Sys_sounds;



////////////////////////////////////////////////////////////////////////////////////////////

  Loginzada.FirstLoginScreen();
  while(true)
  {
  // login:
  pair<bool,bool>LoginOptions = Loginzada.CompleteLogin();
  if(LoginOptions.first ==true && LoginOptions.second==true)
    break;

    else if(LoginOptions.first ==true && LoginOptions.second==false)
      continue;
        else if(LoginOptions.first == false)
          if(Registration.CompleteRegister()==false) continue;
            else continue;//Caso eu queria colocar algo mais
  }

  Main_menu = new Mainmenu(&Loginzada);
  Main_menu->StartMain();
  bool second_time_opened=false;
  while(true)
  {
    int option=0;
    if(Main_menu->GetReturnedOption()!=7)
    {
      option = Main_menu->CompleteMain(second_time_opened);
    } else option =7;

    if(option==3)
    {
    Usuario = new User(&Loginzada);
    Usuario->CompleteScreen();
    }

    if (option==6)
    {
    c_Piano = new Piano(&Loginzada);
    c_Piano->ConstructAll();
    }

    if(option == 7)
    {
        c_Credits = new Credits(&Loginzada);
        c_Credits->AllCredits();
        system("cls");
        break;
    }

    if(second_time_opened==false)
      second_time_opened =!second_time_opened;
  }
  system(UserConsoleWidth.c_str() );
  cout<<"Your console width you back to normal soon, just restart the cmd";


////////////////////////////////////////////////////////////////////////////////////
  ////Destructors
  //Classes
  delete Main_menu;
  Sys_sounds. ~Box();
  Loginzada. ~Login();
  c_Piano-> ~Piano();
  Usuario->~User();
  Main_menu-> ~Mainmenu();
  c_Credits->~Credits();

  delete Main_menu;
  delete c_Piano;
  delete Usuario;
  delete c_Credits;
  #else
  cout<<endl<<"This program only works in Windows OS, Please Use Windows Operational System, a virtual machine could help."<<endl;
  #endif
    return 0;
}
