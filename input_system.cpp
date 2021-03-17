
using namespace std;

int input_conversion(string str)
{
  if (str =="T.L" || str =="t.l" || str =="T.l" || str =="Tl" || str =="tl"|| str =="TL")
    return 11;
  else if(str =="T.M" || str =="t.m" || str == "T.m" || str =="TM" || str=="tm" || str =="Tm")
    return 12;
  else if(str =="T.R" || str =="t.r" || str == "T.r" || str =="TR" || str=="tr" || str =="Tr")
    return 13;
  else if(str =="C.L" || str =="c.l" || str == "C.l" || str =="CL" || str=="cl" || str =="Cl")
    return 21;
  else if(str =="C.M" || str =="c.m" || str == "C.m" || str =="CM" || str=="cm" || str =="Cm")
    return 22;
  else if(str =="C.R" || str =="c.r" || str == "C.r" || str =="CR" || str=="cr" || str =="Cr")
    return 23;
  else if(str =="B.L" || str =="b.l" || str == "B.l" || str =="BL" || str=="bl" || str =="Bl")
    return 31;
  else if(str =="B.M" || str =="b.m" || str == "B.m" || str =="BM" || str=="bm" || str =="Bm")
    return 32;
  else if(str =="B.R" || str =="b.r" || str == "B.r" || str =="BR" || str=="br" || str =="Br")
    return 33;
  else
    return -1;
}

void change_curr_tack( char &tack)
{
  if (tack == 'X')
    tack = '0';
  else
    tack = 'X';
}

void tack_correction(char &tack)
{
  char temp = tack;
  if(temp == 'x' && temp == 'X')
    tack == 'X';
  else if(temp == 'o' && temp == 'O' && temp == '0')
    tack == '0';
}
