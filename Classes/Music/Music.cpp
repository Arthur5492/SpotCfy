#include "Music.hpp"

  void Music::LoadMusic()
  {
    GetCurrentDirectoryA(MAX_PATH, UserPath);///Get User Path
    string StartPath = UserPath;

    if (m_FormatType =="mp3")
      m_FormatType=" mpegvideo ";
        else if(m_FormatType=="wav")
          m_FormatType=" waveaudio ";
            else m_FormatType=" ";

    string open = "open "+StartPath+ "\\Marcel\\sounds\\"
    + MusicPath + " type"+m_FormatType+"alias " + MusicAlias;//Set open music name

    mciSendString(open.c_str(),NULL,0,NULL);//Open the music
  }
////////////////////////////////////////////////////////////////////////////////////////////

void Music::Play(string Playtype, int startVolume)
{
  m_volume = startVolume;
  if(m_FormatType=="mp3")
  {
  //Volume que inicia a música, SÓ FUNCIONA EM MP3
  string volume = "setaudio "+ MusicAlias + " volume to "+to_string(m_volume);
  mciSendString(volume.c_str(), NULL, 0, NULL);
  }

  //Play
  if (Playtype=="default")
    Playtype =="";
      else Playtype=" "+Playtype;
  string play = "play " + MusicAlias + Playtype;//Play the song, with the playtipe
  mciSendString(play.c_str(), NULL, 0, NULL);//Play the song
}
////////////////////////////////////////////////////////////////////////////////////////////
void Music::Volume(bool updown)
{
  m_volume = GetVolume();
  if(updown == true)
  {
    if(m_volume<1000)
      m_volume+=100;
  }

    if(updown==false)
    {
      if(m_volume>0)
        m_volume-=100;
    }

    string newvalue = "setaudio " + MusicAlias + " volume to "+to_string(m_volume);
      mciSendString(newvalue.c_str(), NULL, 0, NULL);
      // cout<<newvalue<<endl;
}

void Music::Volume(int value)
{
  string newvalue = "setaudio " + MusicAlias + "volume to "+ to_string(value);
    mciSendString(newvalue.c_str(),NULL,0,NULL);
}
////////////////////////////////////////////////////////////////////////////////////////////
void Music::PlayFunction(string Function)
{
  Function = Function + " "+MusicAlias;
    mciSendString(Function.c_str(),NULL,0,NULL);
}
////////////////////////////////////////////////////////////////////////////////////////////
void Music::Slowing(string updown, int value)
{
  if (updown=="up")
  {
    while(m_volume<=value)
    {
      m_volume+=10;
      string newvolume = "setaudio " +MusicAlias+" volume to "+ to_string(m_volume);
      mciSendString(newvolume.c_str(),NULL,0,NULL);
      this_thread::sleep_for(chrono::milliseconds(30));
    }
 }

  if (updown=="down")
  {
    while(m_volume>=value)
    {
      m_volume-=10;
      string newvolume = "setaudio " +MusicAlias+" volume to "+ to_string(m_volume);
      mciSendString(newvolume.c_str(),NULL,0,NULL);
      this_thread::sleep_for(chrono::milliseconds(30));
    }
    if(m_volume ==0)
      PlayFunction("close");
 }

}
