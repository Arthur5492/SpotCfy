#include "GetAcc.hpp"

void GetAcc::Load(int number)//Load all musics
{
  string NumFile = "Database/Accounts/" + to_string(number)+".txt";
  ifstream Account(NumFile);
    if(Account.good())
    {
      string tmp;//Variable to push back in vector

      SelectLine(Account,2);
        getline(Account,m_name);//Get name from txt
      ///
      SelectLine(Account,3);
        getline(Account,m_username);//Get username from txt
      ///
      SelectLine(Account,4);
        getline(Account,m_password);//Get password from txt
      ///
      SelectLine(Account,5);
        Account>>m_premium;//Get if premium from txt
      ///
      SelectLine(Account,6);
        while(getline(Account,tmp, ' '))   //This is to find if user have musics
        {
          if (tmp==";" || tmp==" ;")break;
            if(tmp=="")break;
            int intmsc = stoi(tmp);
            m_ownmusics.push_back(intmsc);
        }
      ///
      SelectLine(Account,7);
        Account>>m_id;
      ///
      char myfriend;
      Account.seekg(49,ios::beg);
      Account>>myfriend;
        if(myfriend == ':')
          m_status = 1;

        tmp.clear();
      } else MessageBox(NULL, "Cannot open an Load music file", "Error", MB_ICONERROR | MB_OK);
  Account.close();
}
////////////////////////////////////////////////////////////////////////////////////////////
void GetAcc::SelectLine(ifstream& file,int line)
{
  file.seekg(ios::beg);
    for(int i=0; i < line - 1; ++i)
    {
      file.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
  file.ignore(numeric_limits<streamsize>::max(),':');
}
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
void GetAcc::Create(int IDnumber, string name, string username, string password)
{
  ofstream Storage("Database/Accounts/storage.txt");//Atualiza o max de ids ja feitos
  Storage<<"//////////////////////////////////////////SpotCfy&Tuizin//////////////////////////////////////////////////////////////////////"<<endl;
  Storage<<"Users that we already have:"<<IDnumber<<endl;
  Storage<<"Remember, start counting from user 0 :D so "<<IDnumber+1<<" lovely users!"<<endl;
  Storage<<"Congratulations SpotCfy!!"<<endl;
  Storage.close();
/////////////////
  string path = "Database/Accounts/"+to_string(IDnumber)+".txt";
  ofstream AccCreate(path);
  // string stringid=to_string(IDnumber);
  AccCreate<<"//////////////////////////////////////////SpotCfy&Tuizin//////////////////////////////////////////////////////////////////////"<<endl;
  AccCreate<<"Name:"<<name<<endl;
  AccCreate<<"Username:"<<username<<endl;
  AccCreate<<"Password:"<<password<<endl;
  AccCreate<<"Premium:0"<<endl;
  AccCreate<<"Own Musics: ; ;"<<endl;
  AccCreate<<"Id:"<<IDnumber<<endl;

  AccCreate.close();
}
////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
void GetAcc::IDMAX()
{
  string idpath = "Database/Accounts/storage.txt";
  ifstream idmax(idpath);
  if(idmax.good())
  {
    SelectLine(idmax,2);
    idmax>>m_idmax;
  }else MessageBox(NULL, "Cannot open storage.txt file", "Error", MB_ICONERROR | MB_OK);
  idmax.close();
}
