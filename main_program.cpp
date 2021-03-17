#include "include_file.cpp"
#include "player.hpp"
#include "input_system.cpp"
#include "win_determinant.cpp"
using namespace std;

int main()
{
  bool quit{false};
  cout << "\t\t\t\tWelcome to a 2 person tic-tac-toe game" << endl << endl;

  do {
    string position{};

    string player1name{}, player2name{};
    char player1tack{}, player2tack{};
    cout << "Please enter the first player's name: ";
    cin >> player1name;
    cout << "Please enter your tack among X or 0: ";
    cin >> player1tack;
    while(player1tack != 'X' || player1tack != '0')
    {
      if(player1tack == 'X' || player1tack == '0')
          break;
      cout << "Invalid tack. Please choose between X or 0." << endl;
      cout << "Please enter your tack: ";
      cin >> player1tack;

    }
    Player player1(player1name, player1tack);

    if(player1tack == 'X')
      player2tack = '0';
    else if (player1tack == '0')
      player2tack = 'X';
    cout << "Please enter the second player's name: ";
    cin >> player2name;
    Player player2(player2name, player2tack);


    // this is where the game begins
    char current_tack {};
    cout << endl << "Which tack plays first? : ";
    cin >> current_tack;
    current_tack = toupper(current_tack);
    string curr_name {};
    const string invalid{"Invalid"};
    int win_tracker {};


      //turn 1
      print_structure(the_complete_data);
      curr_name = player1.get_name_from_tack(current_tack);
      if(curr_name == invalid)
        curr_name = player2.get_name_from_tack(current_tack);
      cout <<endl << curr_name << "'s turn." << endl;
      cout << endl << endl << "This is the current board. Where would you like to place your tack? : ";
      cin >> position;
      int choice {};
      choice = input_conversion(position);
      if(choice == -1)
      {
          cout << "Invalid choice" << endl;
          break;
      }
      change_data(the_complete_data, choice, current_tack);
      print_structure(the_complete_data);

      //turn 2
      change_curr_tack(current_tack);
      curr_name = player1.get_name_from_tack(current_tack);
      if(curr_name == invalid)
        curr_name = player2.get_name_from_tack(current_tack);
      cout << curr_name << "'s turn." << endl;
      cout << "Where would you like to place your tack? : ";
      cin >> position;
      choice = input_conversion(position);
      if(choice == -1)
      {
          cout << "Invalid choice" << endl;
          break;
      }
      change_data(the_complete_data, choice, current_tack);
      print_structure(the_complete_data);

      //turn 3
      change_curr_tack(current_tack);
      curr_name = player1.get_name_from_tack(current_tack);
      if(curr_name == invalid)
        curr_name = player2.get_name_from_tack(current_tack);
      cout << curr_name <<"s turn." << endl;
      cout << "Where would you like to place your tack? : ";
      cin >> position;
      choice = input_conversion(position);
      if(choice == -1)
      {
          cout << "Invalid choice" << endl;
          break;
      }
      change_data(the_complete_data, choice , current_tack);
      print_structure(the_complete_data);

      //turn 4
      change_curr_tack(current_tack);
      curr_name = player1.get_name_from_tack(current_tack);
      if(curr_name == invalid)
        curr_name = player2.get_name_from_tack(current_tack);
      cout << curr_name <<"s turn." << endl;
      cout << "Where would you like to place your tack? : ";
      cin >> position;
      choice = input_conversion(position);
      if(choice == -1)
      {
          cout << "Invalid choice" << endl;
          break;
      }
      change_data(the_complete_data, choice , current_tack);
      print_structure(the_complete_data);

      //turn 5
      change_curr_tack(current_tack);
      curr_name = player1.get_name_from_tack(current_tack);
      if(curr_name == invalid)
        curr_name = player2.get_name_from_tack(current_tack);
      cout << curr_name <<"s turn." << endl;
      cout << "Where would you like to place your tack? : ";
      cin >> position;
      choice = input_conversion(position);
      if(choice == -1)
      {
          cout << "Invalid choice" << endl;
          break;
      }
      change_data(the_complete_data, choice , current_tack);
      print_structure(the_complete_data);
      win_tracker = win_determinator(the_complete_data);
      if(win_tracker == 1 || win_tracker == 2)
      {
        current_tack = winner_print(win_tracker);
        curr_name = player1.get_name_from_tack(current_tack);
        if(curr_name == invalid)
          curr_name = player2.get_name_from_tack(current_tack);
        cout << "Congratulations " << curr_name << "!" << endl;
        cout << "Would you like to play again? (y/n): ";
        char decider{};
        cin >> decider;
        if (decider == 'y' || decider == 'Y')
        {
          cout << "Very well." << endl;
          clear_board(the_complete_data);
        }
        else
        {
          quit = true;
        }
      }

      //turn 6
      change_curr_tack(current_tack);
      curr_name = player1.get_name_from_tack(current_tack);
      if(curr_name == invalid)
        curr_name = player2.get_name_from_tack(current_tack);
      cout << curr_name <<"s turn." << endl;
      cout << "Where would you like to place your tack? : ";
      cin >> position;
      choice = input_conversion(position);
      if(choice == -1)
      {
          cout << "Invalid choice" << endl;
          break;
      }
      change_data(the_complete_data, choice , current_tack);
      print_structure(the_complete_data);
      win_tracker = win_determinator(the_complete_data);
      if(win_tracker == 1 || win_tracker == 2)
      {
        current_tack = winner_print(win_tracker);
        curr_name = player1.get_name_from_tack(current_tack);
        if(curr_name == invalid)
          curr_name = player2.get_name_from_tack(current_tack);
        cout << "Congratulations " << curr_name << "!" << endl;
        cout << "Would you like to play again? (y/n): ";
        char decider{};
        cin >> decider;
        if (decider == 'y' || decider == 'Y')
        {
          cout << "Very well." << endl;
          clear_board(the_complete_data);
        }
        else
        {
          quit = true;
        }
      }

      //turn 7
      change_curr_tack(current_tack);
      curr_name = player1.get_name_from_tack(current_tack);
      if(curr_name == invalid)
        curr_name = player2.get_name_from_tack(current_tack);
      cout << curr_name <<"s turn." << endl;
      cout << "Where would you like to place your tack? : ";
      cin >> position;
      choice = input_conversion(position);
      if(choice == -1)
      {
          cout << "Invalid choice" << endl;
          break;
      }
      change_data(the_complete_data, choice , current_tack);
      print_structure(the_complete_data);
      win_tracker = win_determinator(the_complete_data);
      if(win_tracker == 1 || win_tracker == 2)
      {
        current_tack = winner_print(win_tracker);
        curr_name = player1.get_name_from_tack(current_tack);
        if(curr_name == invalid)
          curr_name = player2.get_name_from_tack(current_tack);
        cout << "Congratulations " << curr_name << "!" << endl;
        cout << "Would you like to play again? (y/n): ";
        char decider{};
        cin >> decider;
        if (decider == 'y' || decider == 'Y')
        {
          cout << "Very well." << endl;
          clear_board(the_complete_data);
        }
        else
        {
          quit = true;
        }
      }

      //turn 8
      change_curr_tack(current_tack);
      curr_name = player1.get_name_from_tack(current_tack);
      if(curr_name == invalid)
        curr_name = player2.get_name_from_tack(current_tack);
      cout << curr_name <<"s turn." << endl;
      cout << "Where would you like to place your tack? : ";
      cin >> position;
      choice = input_conversion(position);
      if(choice == -1)
      {
          cout << "Invalid choice" << endl;
          break;
      }
      change_data(the_complete_data, choice , current_tack);
      print_structure(the_complete_data);
      win_tracker = win_determinator(the_complete_data);
      if(win_tracker == 1 || win_tracker == 2)
      {
        current_tack = winner_print(win_tracker);
        curr_name = player1.get_name_from_tack(current_tack);
        if(curr_name == invalid)
          curr_name = player2.get_name_from_tack(current_tack);
        cout << "Congratulations " << curr_name << "!" << endl;
        cout << "Would you like to play again? (y/n): ";
        char decider{};
        cin >> decider;
        if (decider == 'y' || decider == 'Y')
        {
          cout << "Very well." << endl;
          clear_board(the_complete_data);
        }
        else
        {
          quit = true;
        }
      }

      //turn 9
      change_curr_tack(current_tack);
      curr_name = player1.get_name_from_tack(current_tack);
      if(curr_name == invalid)
        curr_name = player2.get_name_from_tack(current_tack);
      cout << curr_name <<"s turn." << endl;
      cout << "Where would you like to place your tack? : ";
      cin >> position;
      choice = input_conversion(position);
      if(choice == -1)
      {
          cout << "Invalid choice" << endl;
          break;
      }
      change_data(the_complete_data, choice , current_tack);
      print_structure(the_complete_data);
      win_tracker = win_determinator(the_complete_data);
      if(win_tracker == 1 || win_tracker == 2 || win_tracker == 3)
      {
        if(win_tracker == 3)
        {
          current_tack = winner_print(win_tracker);
          cout << "Would you like to play again? (y/n): ";
          char decider{};
          cin >> decider;
          if (decider == 'y' || decider == 'Y')
          {
            cout << "Very well." << endl;
            clear_board(the_complete_data);
          }
          else
          {
            quit = true;
          }
        }
        current_tack = winner_print(win_tracker);
        curr_name = player1.get_name_from_tack(current_tack);
        if(curr_name == invalid)
          curr_name = player2.get_name_from_tack(current_tack);
        cout << "Congratulations " << curr_name << "!" << endl;
        cout << "Would you like to play again? (y/n): ";
        char decider{};
        cin >> decider;
        if (decider == 'y' || decider == 'Y')
        {
          cout << "Very well." << endl;
          clear_board(the_complete_data);
        }
        else
        {
          quit = true;
        }
      }

    } while(quit == false);
}
