#include "Piano.hpp"

void Piano::ConstructMenu()
{
  system("cls");
  Color(3);
  BigMenu();
  Color(7);
  TopText();
  LeftSideText();
  RightSideText();
  MakeASCII("Mainmenus/Piano/piano.txt",48,18);
}
//////////////////////////////////////////////////////////////////////////////////
void Piano::TopText()
{

  Color(1);
  MakeBox(2,1,5,164);
  Color(7);
    gotoxy(2,3);
      cout<<"   Hello and welcome to Tuizins piano!!, here you can play any notes from 2 different scales(left and right),everything was made in c++ with mp3 piano notes using";
    gotoxy(2,4);
      cout<<" mciSendString to play them, there is two threads(not including main thread) running in each note, so... you need a nice pc to run hehe,";
      Color(2);
      cout<<"now read the tutorial below";
      Color(7);

    Color(4);
    MakeBox(2,7,10,164);

    Textcolor("TUTORIAL",2,80,9);

    Textcolor("You can select wich scale you want in left side",7,5,11);

    Textcolor("Just press left shift + 1-7 number",7,12,12);

    Textcolor("You can test it, now!!",2,16,13);

    Textcolor("You can select wich scale you want in right side",7,115,11);
    Textcolor("Just press right shift + 1-7 number",7,122,12);
    Textcolor("You can test it, now!!",2,129,13);

    Textcolor("Watch Side boxes for key instructions",3,65,11);


      Textcolor("Press   to switch single notes or multiple notes",7,60,16);
      Textcolor("single notes",2,78,16);
      Textcolor("P",3,66,16);
}
//////////////////////////////////////////////////////////////////////////////////
void Piano::LeftSideText()
{
  Color(6);
  MakeBox(2,18,22,45);
  Color(7);

  Textcolor("Left Side Keys",2,17,20);

  Textcolor("Press shift + 1 and number to transpose to:",3,3,22);
  Transpose(4,18,24);

//////////////////////////////////////Notes
Textcolor("Naturals",6,12,26);

Textcolor("TAB = ",2,12,27);
Textcolor("C",7,18,27);

Textcolor("q  = ",2,13,28);
Textcolor("D",7,18,28);

Textcolor("w  = ",2,13,29);
Textcolor("E",7,18,29);

Textcolor("e  = ",2,13,30);
Textcolor("F",7,18,30);

Textcolor("r  = ",2,13,31);
Textcolor("G",7,18,31);

Textcolor("t  = ",2,13,32);
Textcolor("A",7,18,32);

Textcolor("y  = ",2,13,33);
Textcolor("B",7,18,33);

Textcolor("u  = ",2,13,34);
Textcolor("Coct",7,18,34);
//////////////////////////////// Sustenidos
Textcolor("Sharp",6,28,26);

Textcolor("1 = ",2,27,27);
Textcolor("C#",7,32,27);

Textcolor("2  = ",2,27,28);
Textcolor("D#",7,32,28);

Textcolor("///////",3,27,29);

Textcolor("4  = ",2,27,30);
Textcolor("F#",7,32,30);

Textcolor("5  = ",2,27,31);
Textcolor("G#",7,32,31);

Textcolor("6  = ",2,27,32);
Textcolor("A#",7,32,32);

Textcolor("///////",3,27,33);

Textcolor("///////",3,27,34);
//////////////////////////////////
Textcolor("C = ",2,13,36);
Textcolor("Do",7,17,36);

Textcolor("D = ",2,13,37);
Textcolor("Re",7,17,37);

Textcolor("E = ",2,13,38);
Textcolor("Mi",7,17,38);

Textcolor("F = ",2,13,39);
Textcolor("Fa",7,17,39);
//////////////////////////// Lado 2
Textcolor("G = ",2,27,36);
Textcolor("Sol",7,31,36);

Textcolor("A = ",2,27,37);
Textcolor("La",7,31,37);

Textcolor("B = ",2,27,38);
Textcolor("Si",7,31,38);

Textcolor("Coct = ",2,27,39);
Textcolor("Do oitavado",7,34,39);

}
//////////////////////////////////////////////////////////////////////////////////
void Piano::RightSideText()
{
  Color(6);
  MakeBox(119,18,22,45);
  Color(7);

  Textcolor("Left Side Keys",2,134,20);
//
  Textcolor("Press shift + 1 and number to transpose to:",3,120,22);
  Transpose(5,135,24);

// //////////////////////////////////////Notes
Textcolor("Naturals",6,129,26);
//
Textcolor("b  = ",2,129,27);
Textcolor("C",7,135,27);
//
Textcolor("n  = ",2,129,28);
Textcolor("D",7,135,28);
//
Textcolor("m  = ",2,129,29);
Textcolor("E",7,135,29);

Textcolor(",  = ",2,129,30);
Textcolor("F",7,135,30);

Textcolor(".  = ",2,129,31);
Textcolor("G",7,135,31);

Textcolor(";  = ",2,129,32);
Textcolor("A",7,135,32);

Textcolor("/  = ",2,129,33);
Textcolor("B",7,135,33);

Textcolor("Rshift = ",2,129,34);
Textcolor("Coct",7,138,34);
// //////////////////////////////// Sustenidos
Textcolor("Sharp",6,145,26);
//
Textcolor("h = ",2,144,27);
Textcolor("C#",7,149,27);

Textcolor("j  = ",2,144,28);
Textcolor("D#",7,149,28);

Textcolor("///////",3,144,29);

Textcolor("l  = ",2,144,30);
Textcolor("F#",7,149,30);

Textcolor("�  = ",2,144,31);
Textcolor("G#",7,149,31);

Textcolor("]  = ",2,144,32);
Textcolor("A#",7,149,32);

Textcolor("///////",3,144,33);

Textcolor("///////",3,144,34);
//////////////////////////////////
Textcolor("C = ",2,130,36);
Textcolor("Do",7,134,36);

Textcolor("D = ",2,130,37);
Textcolor("Re",7,134,37);

Textcolor("E = ",2,130,38);
Textcolor("Mi",7,134,38);

Textcolor("F = ",2,130,39);
Textcolor("Fa",7,134,39);
//////////////////////////// Lado 2
Textcolor("G = ",2,144,36);
Textcolor("Sol",7,148,36);

Textcolor("A = ",2,144,37);
Textcolor("La",7,148,37);

Textcolor("B = ",2,144,38);
Textcolor("Si",7,148,38);

Textcolor("Coct = ",2,144,39);
Textcolor("Do oitavado",7,151,39);

}
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void Piano::Keys()
{
  bool multiple=false;
  int left= 4;
  int right = 5;
  while(true)
  {

    if(_kbhit())
    {
      int shift = GetKeyState(VK_SHIFT);
      size_t inter = _getch();

      //If ! pressed
      if(inter == 33)
      {
        char newleft=_getch();
        cout<<newleft;
        if(newleft>=49 && newleft<=55)
        {
          left=newleft-48;
          Transpose(left,18,24);
        }

      }
      ///
      if(inter == 64)
      {

        char newright=_getch();
        if(newright>=49 && newright<=55)
        {
          right=newright-48;
          Transpose(right,135,24);
        }
      }
      ///
      if(inter==112 || inter==80)
      {
        multiple = !multiple;
        if (multiple==true)
        {
          Textcolor("single notes",7,78,16);
          Textcolor("multiple notes",2,94,16);
        }
          else
          {
            Textcolor("multiple notes",7,94,16);
            Textcolor("single notes",2,78,16);
          }
      }

      //// C1
      if(inter==9)
      {
        Music c1("piano/"+to_string(left)+"/C.mp3","mp3","C1");
        thread tab(&Piano::PlayCurrent,this,c1,multiple);
        if(multiple==false)thread(&Piano::Key,this,"C1",5,3,2,1,1).detach();
        gotoxy(80,27);
        tab.join();
      }
      /////CS1
      if(inter==49)
      {
        Music cs1("piano/"+to_string(left)+"/CS.mp3","mp3","CS1");
        thread one(&Piano::PlayCurrent,this,cs1,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"CS1",8).detach();
        one.join();
      }
      /////D1
      if(inter==113||inter==81)
      {
        Music d1("piano/"+to_string(left)+"/D.mp3","mp3","D1");
        thread q(&Piano::PlayCurrent,this,d1,multiple);
        if(multiple==false)thread(&Piano::Key,this,"D1",10,0,0,6,5).detach();
        q.join();
      }
      ////DS1
      if(inter==50)
      {
        Music ds1("piano/"+to_string(left)+"/DS.mp3","mp3","DS1");
        thread two(&Piano::PlayCurrent,this,ds1,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"DS1",12).detach();
        two.join();
      }
      ////E1
      if(inter==119||inter==87)
      {
        Music e1("piano/"+to_string(left)+"/E.mp3","mp3","E1");
        thread w(&Piano::PlayCurrent,this,e1,multiple);
        if(multiple==false)thread(&Piano::Key,this,"E1",14,15,14,10,9).detach();
        w.join();
      }
      ////F1
      if(inter==101||inter==69)
      {
        Music f1("piano/"+to_string(left)+"/F.mp3","mp3","F1");
        thread e(&Piano::PlayCurrent,this,f1,multiple);
        if(multiple==false)thread(&Piano::Key,this,"F1",16,15,14,13,13).detach();
        e.join();
      }
      ////FS1
      if(inter==52)
      {
        Music fs1("piano/"+to_string(left)+"/FS.mp3","mp3","FS1");
        thread four(&Piano::PlayCurrent,this,fs1,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"FS1",20).detach();
        four.join();
      }
      ////G1
      if(inter==114||inter==82)
      {
        Music g1("piano/"+to_string(left)+"/G.mp3","mp3","G1");
        thread r(&Piano::PlayCurrent,this,g1,multiple);
        if(multiple==false)thread(&Piano::Key,this,"G1",22,0,0,18,17).detach();
        r.join();
      }
      ////GS1
      if(inter==53)
      {
        Music gs1("piano/"+to_string(left)+"/GS.mp3","mp3","GS1");
        thread five(&Piano::PlayCurrent,this,gs1,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"GS1",24).detach();
        five.join();
      }
      ////A1
      if(inter==116||ch==84)
      {
        Music a1("piano/"+to_string(left)+"/zA.mp3","mp3","A1");
        thread t(&Piano::PlayCurrent,this,a1,multiple);
        if(multiple==false)thread(&Piano::Key,this,"zA1",26,0,0,22,21).detach();
        t.join();
      }
      ////AS1
      if(inter==54)
      {
        Music as1("piano/"+to_string(left)+"/zAS.mp3","mp3","AS1");
        thread six(&Piano::PlayCurrent,this,as1,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"zAS1",28).detach();
        six.join();
      }
      ////B1
      if(inter==121||inter==89)
      {
        Music b1("piano/"+to_string(left)+"/zB.mp3","mp3","B1");
        thread y(&Piano::PlayCurrent,this,b1,multiple);
        if(multiple==false)thread(&Piano::Key,this,"zB1",30,31,30,26,25).detach();
        y.join();
      }
      ////Coct
      if(inter==117||inter==85)
      {
        Music c2("piano/"+to_string(left)+"/zC.mp3","mp3","Coct1");
        thread u(&Piano::PlayCurrent,this,c2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"C2",32,31,30,29,29).detach();
        u.join();
      }
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
      //// C2
      if(inter==98||inter==66)
      {
        Music c2("piano/"+to_string(right)+"/C.mp3","mp3","C2");
        thread b(&Piano::PlayCurrent,this,c2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"C2",32,31,30,29,29).detach();
        b.join();
      }
      /////CS2
      if(inter==104||inter==72)
      {
        Music cs2("piano/"+to_string(right)+"/CS.mp3","mp3","CS2");
        thread h(&Piano::PlayCurrent,this,cs2,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"CS2",36).detach();
        h.join();
      }
      //// D2
      if(inter==110||inter==78)
      {
        Music d2("piano/"+to_string(right)+"/D.mp3","mp3","D2");
        thread n(&Piano::PlayCurrent,this,d2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"D2",38,0,0,34,33).detach();
        n.join();
      }
      /////DS2
      if(inter==106||inter==74)
      {
        Music ds2("piano/"+to_string(right)+"/DS.mp3","mp3","DS2");
        thread j(&Piano::PlayCurrent,this,ds2,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"DS2",40).detach();
        j.join();
      }
      //// E2
      if(inter==109||inter==77)
      {
        Music e2("piano/"+to_string(right)+"/E.mp3","mp3","E2");
        thread m(&Piano::PlayCurrent,this,e2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"E2",42,43,42,38,37).detach();
        m.join();
      }
      //// F2
      if(inter==44)
      {
        Music f2("piano/"+to_string(right)+"/F.mp3","mp3","F2");
        thread comma(&Piano::PlayCurrent,this,f2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"F2",44,43,42,41,41).detach();
        comma.join();
      }
      /////FS2
      if(inter==108||inter==76)
      {
        Music fs2("piano/"+to_string(right)+"/FS.mp3","mp3","FS2");
        thread l(&Piano::PlayCurrent,this,fs2,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"FS2",48).detach();
        l.join();
      }
      //// G2
      if(inter==46)
      {
        Music g2("piano/"+to_string(right)+"/G.mp3","mp3","G2");
        thread dot(&Piano::PlayCurrent,this,g2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"G2",49,0,0,46,45).detach();
        dot.join();
      }
      /////GS2
      if(inter==135||inter==128)
      {
        Music gs2("piano/"+to_string(right)+"/GS.mp3","mp3","GS2");
        thread cedilha(&Piano::PlayCurrent,this,gs2,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"GS2",52).detach();
        cedilha.join();
      }
      //// A2
      if(inter==59)
      {
        Music a2("piano/"+to_string(right)+"/zA.mp3","mp3","A2");
        thread doubledot(&Piano::PlayCurrent,this,a2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"zA2",54,0,0,50,49).detach();
        doubledot.join();
      }
      ///AS2
      if(inter==93)
      {
        Music as2("piano/"+to_string(right)+"/zAS.mp3","mp3","AS2");
        thread barrao(&Piano::PlayCurrent,this,as2,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"zAS2",56).detach();
        barrao.join();
      }
      ///B2
      if(inter==47)
      {
        Music b2("piano/"+to_string(right)+"/zB.mp3","mp3","B2");
        thread barra(&Piano::PlayCurrent,this,b2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"zB2",58,59,58,54,53).detach();
        barra.join();
      }
      ///Coct
      if(GetKeyState(VK_SHIFT)==-128 || GetKeyState(VK_SHIFT)==-127)
      {
        Music b2("piano/"+to_string(right)+"/zC.mp3","mp3","Coct2");
        thread barra(&Piano::PlayCurrent,this,b2,multiple);
        barra.join();
      }

      //////////////////////////////////////////////////////////////////////////
      //////////////////////////////////////////////////////////////////////////
    }

}

}
//////////////////////////////////////////////////////////////////////////////////

void Piano::Key(string CurrentKey,int x1,int x2,int x3,int x4,int x5)
{
  CurrentKey= CurrentKey+".txt";
  Color(4);
  PickKey(CurrentKey,x1,x2,x3,x4,x5);
  this_thread::sleep_for(chrono::milliseconds(100));
  Color(7);
  PickKey(CurrentKey,x1,x2,x3,x4,x5);
}

void Piano::KeyS(string CurrentKey,int x1)
{
  CurrentKey= CurrentKey+".txt";
  Color(4);
  PickKey(CurrentKey,x1);
  this_thread::sleep_for(chrono::milliseconds(50));
  Color(7);
  PickKey(CurrentKey,x1);
}
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

  void Piano::PickKey(string Note,int x1,int x2,int x3,int x4,int x5)//Para Nota natural
{
  Note = "Marcel/textos/Mainmenus/Piano/"+Note;
  ifstream key(Note);// Abre o arquivo começando pela pasta textos

    if(key.good())//Se deu certo abrir o arquivo
    {
      string tmp;
      vector <string> fulltmp;//string temporaria
      size_t n_lines=0;
      int x =48;
      int y=18;

      while(getline(key,tmp) && n_lines<=19)//Vasculha cada linha e guarda na string
      {
        if(n_lines == 14 || n_lines == 15 || n_lines == 16 || n_lines == 17 || n_lines == 18)
        {
          tmp.erase(remove(tmp.begin(),tmp.end(),' '),tmp.end());
        }
        fulltmp.push_back(tmp);
        tmp.clear();
        n_lines++;
      }
      n_lines=0;
      for(size_t i=0;i<19;i++)
      {
        if(n_lines==14)
        {
          gotoxy(x+x1,y);
            cout<<fulltmp.at(i);
        }
        if(n_lines==15)
        {
          gotoxy(x+x2,y);
            cout<<fulltmp.at(i);
        }
        if(n_lines==16)
        {
          gotoxy(x+x3,y);
            cout<<fulltmp.at(i);
        }
        if(n_lines==17)
        {
          gotoxy(x+x4,y);
            cout<<fulltmp.at(i);
        }
        if(n_lines==18)
        {
          gotoxy(x+x5,y);
            cout<<fulltmp.at(i);
        }

          y++;
          n_lines++;
      }
    } else cout<<"Could not find "<<Note<<" Path";//Se nao for possivel achar o arquivo
  key.close();
}

void Piano::PickKey(string Note,int x1)//Para Nota acidentada(# e b)
{
  Note = "Marcel/textos/Mainmenus/Piano/"+Note;
  ifstream key(Note);// Abre o arquivo começando pela pasta textos

    if(key.good())//Se deu certo abrir o arquivo
    {
      string tmp;
      vector <string> fulltmp;//string temporaria
      size_t n_lines=0;
      int x =48;
      int y=18;

      while(getline(key,tmp) && n_lines<=17)//Vasculha cada linha e guarda na string
      {
        if(n_lines == 13 || n_lines == 14 || n_lines == 15 || n_lines == 16)
        {
          tmp.erase(remove(tmp.begin(),tmp.end(),' '),tmp.end());
        }
        fulltmp.push_back(tmp);
        tmp.clear();
        n_lines++;
      }
      n_lines=0;
      for(size_t i=0;i<17;i++)
      {
        if(n_lines==13)
        {
          gotoxy(x+x1,y);
            cout<<fulltmp.at(i);
            x1--;
        }
        if(n_lines==14)
        {
          gotoxy(x+x1,y);
            cout<<fulltmp.at(i);
            x1--;
        }
        if(n_lines==15)
        {
          gotoxy(x+x1,y);
            cout<<fulltmp.at(i);
            x1--;
        }
        if(n_lines==16)
        {
          gotoxy(x+x1,y);
            cout<<fulltmp.at(i);
        }
          y++;
          n_lines++;
      }
    } else cout<<"Could not find "<<Note<<" Path";//Se nao for possivel achar o arquivo
  key.close();
}
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void Piano::PlayCurrent(Music at,bool multiplenotes)
{
  at.LoadMusic();
  at.Play("from 0",800);
  if(multiplenotes==false)this_thread::sleep_for(chrono::milliseconds(100));
    // else this_thread::sleep_for(chrono::milliseconds(20));
}
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

void Piano::Transpose(int num, int x, int y)
{
    gotoxy(x,y);
    for(size_t i=1;i<=7;i++)
    {
      if(i==num)Color(4);
      cout<<i<<' ';
      Color(7);
    }
}
