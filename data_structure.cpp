
using namespace std;


 vector<vector<char>> the_complete_data
 {
   {' ', ' ', ' '},
   {' ', ' ', ' '},
   {' ', ' ', ' '}
 };

void clear_board(vector<vector<char>> &the_complete_data)
{
  for (int i {0}; i < 3; ++i)
  {
    for (int j{0}; j < 3; ++j)
    {
      the_complete_data.at(i).at(j) = ' ';
    }
  }
}



const void print_structure(vector<vector<char>> &the_complete_data = the_complete_data)
{
  cout << " " << the_complete_data.at(0).at(0) << " | " <<
  the_complete_data.at(0).at(1) << " | " << the_complete_data.at(0).at(2) <<
  "\t\t\t\t t.l | t.m | t.r " << endl;
  cout <<  "___|___|___" << "\t\t\t\t  ___|_____|___" << endl;

  cout << " " << the_complete_data.at(1).at(0) << " | " <<
  the_complete_data.at(1).at(1) << " | " << the_complete_data.at(1).at(2) <<
  "\t\t\t\t c.l | c.m | c.r " << endl;
  cout <<  "___|___|___" << "\t\t\t\t  ___|_____|___" << endl;

  cout << " " << the_complete_data.at(2).at(0) << " | " <<
  the_complete_data.at(2).at(1) << " | " << the_complete_data.at(2).at(2) <<
  "\t\t\t\t b.l | b.m | b.r " << endl;
  cout << "   |   |   " << "\t\t\t\t     |     |   " << endl;
}

void change_data(vector<vector<char>> &the_complete_data, int choice, char tack)
{
  if(choice == 11)
    the_complete_data.at(0).at(0) = tack;
  else if(choice == 12)
    the_complete_data.at(0).at(1) = tack;
  else if(choice == 13)
    the_complete_data.at(0).at(2) = tack;
  else if(choice == 21)
    the_complete_data.at(1).at(0) = tack;
  else if(choice == 22)
    the_complete_data.at(1).at(1) = tack;
  else if(choice == 23)
    the_complete_data.at(1).at(2) = tack;
  else if(choice == 31)
    the_complete_data.at(2).at(0) = tack;
  else if(choice == 32)
    the_complete_data.at(2).at(1) = tack;
  else
    the_complete_data.at(2).at(2) = tack;

}
