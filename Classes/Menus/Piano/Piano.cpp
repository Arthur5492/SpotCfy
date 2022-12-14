#include "Piano.hpp"

void Piano::ConstructMenu()
{
  system("cls");
  Color(3);
  BigMenu();
  Color(7);
  TopText();
  SideText();
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
      gotoxy(76,9);
    Color(2);
        cout<<"TUTORIAL";
    Color(7);
      gotoxy(5,11);
        cout<<"You can select wich scale you want in left side";
      gotoxy(12,12);
        cout<<"Just press left shift + 1-7 number";
      gotoxy(16,13);
      Color(2);
        cout<<"You can test it, now!!";
      Color(7);

      gotoxy(115,11);
        cout<<"You can select wich scale you want in right side";
      gotoxy(122,12);
        cout<<"Just press right shift + 1-7 number";
      gotoxy(129,13);
      Color(2);
        cout<<"You can test it, now!!";
      Color(7);

      gotoxy(65,11);
      Color(3);
      cout<<"Watch Side boxes for key instructions";
      Color(7);
}
//////////////////////////////////////////////////////////////////////////////////
void Piano::SideText()
{
  Color(6);
  MakeBox(2,18,22,45);
  Color(7);
    gotoxy(17,20);
    Color(2);
      cout<<"Left Side Keys";
    Color(7);
    gotoxy(4,22);
      cout<<"tab = C";
}
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void Piano::Keys()
{
  setlocale(LC_ALL,"portuguese");
  bool multiple=true;

  while(true)
  {
    int left= 4;
    int right = 5;
    if(_kbhit())
    {
      int nRet = GetKeyState(VK_SHIFT);
      int inter = _getch();
      // cout<<nRet;
      ch = inter;
      //// C1
      if(ch=='\t')
      {
        Music c1("piano/"+to_string(left)+"/C.mp3","mp3","C1");
        thread tab(&Piano::PlayCurrent,this,c1,multiple);
        if(multiple==false)thread(&Piano::Key,this,"C1",5,3,2,1,1).detach();
        gotoxy(80,27);
        tab.join();
      }
      /////CS1
      if(ch=='1')
      {
        Music cs1("piano/"+to_string(left)+"/CS.mp3","mp3","C1");
        thread one(&Piano::PlayCurrent,this,cs1,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"CS1",8).detach();
        one.join();
      }
      /////D1
      if(ch=='q'||ch=='Q')
      {
        Music d1("piano/"+to_string(left)+"/D.mp3","mp3","C1");
        thread q(&Piano::PlayCurrent,this,d1,multiple);
        if(multiple==false)thread(&Piano::Key,this,"D1",10,0,0,6,5).detach();
        q.join();
      }
      ////DS1
      if(ch=='2')
      {
        Music ds1("piano/"+to_string(left)+"/DS.mp3","mp3","C1");
        thread two(&Piano::PlayCurrent,this,ds1,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"DS1",12).detach();
        two.join();
      }
      ////E1
      if(ch=='w'||ch=='W')
      {
        Music e1("piano/"+to_string(left)+"/E.mp3","mp3","C1");
        thread w(&Piano::PlayCurrent,this,e1,multiple);
        if(multiple==false)thread(&Piano::Key,this,"E1",14,15,14,10,9).detach();
        w.join();
      }
      ////F1
      if(ch=='e'||ch=='E')
      {
        Music f1("piano/"+to_string(left)+"/F.mp3","mp3","C1");
        thread e(&Piano::PlayCurrent,this,f1,multiple);
        if(multiple==false)thread(&Piano::Key,this,"F1",16,15,14,13,13).detach();
        e.join();
      }
      ////FS1
      if(ch=='4')
      {
        Music fs1("piano/"+to_string(left)+"/FS.mp3","mp3","C1");
        thread four(&Piano::PlayCurrent,this,fs1,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"FS1",20).detach();
        four.join();
      }
      ////G1
      if(ch=='r'||ch=='R')
      {
        Music g1("piano/"+to_string(left)+"/G.mp3","mp3","C1");
        thread r(&Piano::PlayCurrent,this,g1,multiple);
        if(multiple==false)thread(&Piano::Key,this,"G1",22,0,0,18,17).detach();
        r.join();
      }
      ////GS1
      if(ch=='5')
      {
        Music gs1("piano/"+to_string(left)+"/GS.mp3","mp3","C1");
        thread five(&Piano::PlayCurrent,this,gs1,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"GS1",24).detach();
        five.join();
      }
      ////A1
      if(ch=='t'||ch=='T')
      {
        Music a1("piano/"+to_string(left)+"/zA.mp3","mp3","C1");
        thread t(&Piano::PlayCurrent,this,a1,multiple);
        if(multiple==false)thread(&Piano::Key,this,"zA1",26,0,0,22,21).detach();
        t.join();
      }
      ////AS1
      if(ch=='6')
      {
        Music as1("piano/"+to_string(left)+"/zAS.mp3","mp3","C1");
        thread six(&Piano::PlayCurrent,this,as1,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"zAS1",28).detach();
        six.join();
      }
      ////B1
      if(ch=='y'||ch=='Y')
      {
        Music b1("piano/"+to_string(left)+"/zB.mp3","mp3","C1");
        thread y(&Piano::PlayCurrent,this,b1,multiple);
        if(multiple==false)thread(&Piano::Key,this,"zB1",30,31,30,26,25).detach();
        y.join();
      }
      ////Coct
      if(ch=='u'||ch=='U')
      {
        Music c2("piano/"+to_string(left)+"/zC.mp3","mp3","C1");
        thread u(&Piano::PlayCurrent,this,c2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"C2",33,31,30,29,29).detach();
        u.join();
      }
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
      //// C2
      if(ch=='b'||ch=='B')
      {
        Music c2("piano/"+to_string(right)+"/C.mp3","mp3","C1");
        thread b(&Piano::PlayCurrent,this,c2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"C2",33,31,30,29,29).detach();
        b.join();
      }
      /////CS2
      if(ch=='h'||ch=='H')
      {
        Music cs2("piano/"+to_string(right)+"/CS.mp3","mp3","C1");
        thread h(&Piano::PlayCurrent,this,cs2,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"CS2",36).detach();
        h.join();
      }
      //// D2
      if(ch=='n'||ch=='N')
      {
        Music d2("piano/"+to_string(right)+"/D.mp3","mp3","C1");
        thread n(&Piano::PlayCurrent,this,d2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"D2",38,0,0,34,33).detach();
        n.join();
      }
      /////DS2
      if(ch=='j'||ch=='J')
      {
        Music ds2("piano/"+to_string(right)+"/DS.mp3","mp3","C1");
        thread j(&Piano::PlayCurrent,this,ds2,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"DS2",40).detach();
        j.join();
      }
      //// E2
      if(ch=='m'||ch=='M')
      {
        Music e2("piano/"+to_string(right)+"/E.mp3","mp3","C1");
        thread m(&Piano::PlayCurrent,this,e2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"E2",42,43,42,38,37).detach();
        m.join();
      }
      //// F2
      if(ch==',')
      {
        Music f2("piano/"+to_string(right)+"/F.mp3","mp3","C1");
        thread comma(&Piano::PlayCurrent,this,f2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"F2",44,43,42,41,41).detach();
        comma.join();
      }
      /////FS2
      if(ch=='l'||ch=='L')
      {
        Music fs2("piano/"+to_string(right)+"/FS.mp3","mp3","C1");
        thread l(&Piano::PlayCurrent,this,fs2,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"FS2",48).detach();
        l.join();
      }
      //// G2
      if(ch=='.')
      {
        Music g2("piano/"+to_string(right)+"/G.mp3","mp3","C1");
        thread dot(&Piano::PlayCurrent,this,g2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"G2",49,0,0,46,45).detach();
        dot.join();
      }
      /////GS2
      if(inter==135||inter==128)
      {
        Music gs2("piano/"+to_string(right)+"/GS.mp3","mp3","C1");
        thread cedilha(&Piano::PlayCurrent,this,gs2,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"GS2",52).detach();
        cedilha.join();
      }
      //// A2
      if(inter==59)
      {
        Music a2("piano/"+to_string(right)+"/zA.mp3","mp3","C1");
        thread doubledot(&Piano::PlayCurrent,this,a2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"zA2",54,0,0,50,49).detach();
        doubledot.join();
      }
      ///AS2
      if(inter==93)
      {
        Music as2("piano/"+to_string(right)+"/zAS.mp3","mp3","C1");
        thread barrao(&Piano::PlayCurrent,this,as2,multiple);
        if(multiple==false)thread(&Piano::KeyS,this,"zAS2",56).detach();
        barrao.join();
      }
      ///B2
      if(inter==47)
      {
        Music b2("piano/"+to_string(right)+"/zB.mp3","mp3","C1");
        thread barra(&Piano::PlayCurrent,this,b2,multiple);
        if(multiple==false)thread(&Piano::Key,this,"zB2",58,59,58,54,53).detach();
        barra.join();
      }
      ///C3
      if(nRet==-128 || nRet==-127)
      {
        Music b2("piano/"+to_string(right)+"/zC.mp3","mp3","C1");
        thread barra(&Piano::PlayCurrent,this,b2,multiple);
        barra.join();
      }
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
}
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
