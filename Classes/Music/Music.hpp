#ifndef MUSIC_HPP
#define MUSIC_HPP

  #include <iostream>
  #include <windows.h>
  #include <mmsystem.h>
  #include <string>
  #include <chrono>
  #include <thread>

  using namespace std;

class Music
{

protected:
  char UserPath[MAX_PATH];//To store user full path de onde foi rodado o main.cpp

  string MusicPath;
  string m_FormatType;
  string MusicAlias;//Nome definido na fuction Load para usar nas outras fun��es
  int    m_volume; //Volume atual da m�sica
public:
  Music(): MusicPath(""),m_FormatType(""),MusicAlias(""){};

  Music(string Path, string FormatType, string alias) :
  MusicPath(Path),m_FormatType(FormatType),MusicAlias(alias){};

  ~Music(){};

  void LoadMusic();//Load a musica
  ////Name: precisa inserir o restante do Path apos a folder sounds e o nome do arquivo
  ////FormatType: Formato da música: pode mp3 ou wav, cada um tem suas vantagens:
  //Wav:É muito mais leve, e consegue tocar sons muito curtos de menos de 1 segundo, diferente do mp3
  //mp3: Consegue usar a função setaudio, que pode aumentar ou diminuir o volume do arquivo, diferente do wav que não pode

  void Play(string Playtipe, int StartVolume);//Toca a Musica
  ////Playtype: Como vai sair a musica:
  //wait: Sai sincronicamente, programa espera a musica acabar pra rodar
  //from 0, musica começa do inicio sempre
  //repeat: musica fica em loop
  //Pode juntar esses todos se quiser, ex: wait from 0, toca do começo e o programa espera a musica acabar

  void PlayFunction(string Function);//Oq voc pode fazer com a musica
  ////Function: Diz oq vc quer fazer com a musica:
  //pause: Pausa a música
  //resume: Resume a música
  //stop: Para a musica
  //close: Fecha o arquivo da música, sempre bom fechar após toca-la, para não tocar com as outras
  //Não pode dar resume um som que foi stop mas pode usar play novamente

  void Volume(int value);//Muda o Volume, only in mp3


  void Volume(bool updown);//Muda o Volume valor fixo, only in mp3
  ////updown: Se for True aumenta 100, se for false diminui 100
  //Volume go from 0 to 1000, geralmente começando em 1000

  void Slowing(string updown, int value);

////////////////////////////////////////////////////////////////////////////////////////////////////////
  //Getters
    int GetVolume(){return m_volume;} ;

};


#endif
