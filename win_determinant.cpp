#include "data_structure.cpp"
#include "player.hpp"

using namespace std;



const int row_checker(int row_num)
{
  string the_checker{};

  for(int i = 0; i < 3; ++i)
  {
    char temp = the_complete_data[row_num - 1][i];
    the_checker.push_back(temp);
  }

  if (the_checker == "XXX")
    return 1;
  else if (the_checker == "000")
    return 2;
  else
    return 3;
}


const int column_checker(int column_num)
{
  string the_checker{};

  for(int i = 0; i < 3; ++i)
  {
    char temp = the_complete_data[i][column_num - 1];
    the_checker.push_back(temp);
  }

  if (the_checker == "XXX")
    return 1;
  else if (the_checker == "000")
    return 2;
  else
    return 3;
}


const int diagonal_checker(int diagonal_num)
{
  string the_checker{};
  if(diagonal_num == 1)
    {
      for(int i = 0; i < 3; ++i)
      {
        char temp = the_complete_data[i][i];
        the_checker.push_back(temp);
      }
    }
  else
  {
    {char temp = the_complete_data[0][2];
     the_checker.push_back(temp);}
    {char temp = the_complete_data[1][1];
     the_checker.push_back(temp);}
    {char temp = the_complete_data[2][0];
     the_checker.push_back(temp);}
  }

  if (the_checker == "XXX")
    return 1;
  else if (the_checker == "000")
    return 2;
  else
    return 3;
}


const int win_determinator(vector<vector<char>> &vect)
{
  { // for X
    for(int i {}; i <= 2; ++i)
    {
      int temp{};
      temp = diagonal_checker(i);
      if (temp == 1)
        return 1;
      else if (temp == 2)
        return 2;

    }
    for (int i {1}; i <= 3; ++i)
    {
      int temp{};
      temp = row_checker(i);
      if (temp == 1)
        return 1;
      else if (temp == 2)
        return 2;

    }
    for (int i{1}; i <= 3; ++i)
    {
      int temp {};
      temp = column_checker(i);
      if (temp == 1)
        return 1;
      else if (temp == 2)
        return 2;

    }
  }
  return 3;
}

char winner_print(int value)
{
  if (value == 1)
  {
    cout << "X has won!" << endl;
    return 'X';
  }
  else if (value == 2)
  {
    cout <<  "0 has won!" << endl;
    return '0';
  }
  else
    cout << "It is a draw" << endl;
}


//bool game_tracker()
