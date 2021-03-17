#include <string>
#ifndef PLAYER
#define PLAYER

class Player
{
public:
  std::string player_name{};
  char tack_used{};

  char get_tack_used();
  std::string get_name();
  std::string get_name_from_tack(char tack);
  Player(std::string name, char y);

  ~Player();
};

char Player::get_tack_used()
{
  return tack_used;
}

std::string Player::get_name()
{
    return player_name;
}

std::string Player::get_name_from_tack(char tack)
{
  if(tack == tack_used)
    return player_name;
  else
    return "Invalid";
}

Player :: Player(std::string name, char y)
{
  player_name = name;
  tack_used = y;
}

Player :: ~Player(){}
#endif
