#include <fstream>
#include <vector>

#include "Classes/Menus/Piano/Piano.cpp"
// #include "Classes/Register/Register.cpp"
// #include "Classes/GetAcc/GetAcc.cpp"
// #include "Classes/Login/Login.cpp"

HWND WINAPI GetConsoleWindowNT(void);
int main()
{
  setlocale(LC_ALL,"portuguese");
  char UserPath[MAX_PATH];
GetCurrentDirectoryA(MAX_PATH, UserPath);


  system("mode con: cols=211 lines=49");//Aqui coloca o padrao de tamanho de tela que o programa precisa
  system("cls");

//INSTANCIAS CLASSES
  Login Loginzada;
  Register Registration;
  Mainmenu *Main_menu;
  Piano c_Piano;

//MISC FUNCTIONS TO USE IN MAIN
  Box gotoxy;//To use gotoxy here
  Box Sys_sounds;



////////////////////////////////////////////////////////////////////////////////////////////

  // Loginzada.FirstLoginScreen();
  // while(true)
  // {
  // // login:
  // pair<bool,bool>LoginOptions = Loginzada.CompleteLogin();
  // if(LoginOptions.first ==true && LoginOptions.second==true)
  //   break;
  //
  //   else if(LoginOptions.first ==true && LoginOptions.second==false)
  //     continue;
  //       else if(LoginOptions.first == false)
  //         if(Registration.CompleteRegister()==false) continue;
  //           else continue;//Caso eu queria colocar algo mais
  // }
  //
  // Main_menu = new Mainmenu(&Loginzada);//Get user data
  // Main_menu->StartMain();
  // while(true)
  // {
  //   if(Main_menu->CompleteMain()==6);
        c_Piano.ConstructMenu();
        c_Piano.Keys();
        // break;
  // }


  // system("mode con: cols=30 lines=90");
  gotoxy.gotoxy(1,42);


////////////////////////////////////////////////////////////////////////////////////
  ////Destructors
  //Classes
  delete Main_menu;
  //Deleting sys sounds

  Sys_sounds.~Box();

    return 0;
}
