#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main () 
{
    string a("199 2 3");

    istringstream my_stream(a);

    int n;
    my_stream >> n;
    cout << n << "\n";
}

int main() 
{
    string a("1 2 3");

    istringstream my_stream(a);

    int n;
    
    // Testing to see if the stream was successful and printing results.
    while (my_stream) {
        my_stream >> n;
        if (my_stream) {
            cout << "That stream was successful: " << n << "\n";
        }
        else {
            cout << "That stream was NOT successful!" << "\n";            
        }
    }
}

int main () {
    string a("1 2 3");

    istringstream my_stream(a);
    
    int n;
    
    while (my_stream >> n) {
      cout << "That stream was successful: " << n << "\n";
    }
    cout << "The stream has failed." << "\n";
    
}

int main() 
{
    string b("1,2,3");

    istringstream my_stream(b);

    char c;
    int n;

    while (my_stream >> n >> c) {
      cout << "That stream was successful:" << n << " " << c << "\n";
    }
    cout << "The stream has failed." << "\n";
}

void ReadBoardFile(string s)
{
  ifstream my_file(s);
  if(my_file)
  {
    cout << "open successfully" << "\n";
    string line;
    while(getline(my_file, line))
    {
      cout << line << "\n";
    }
  }
  return; 
}

// PrintBoard not used in this exercise
void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

int main()
{
    std::ifstream my_file;
    my_file.open("files/1.board");
    if (my_file) {
      std::cout << "The file stream has been created!" << "\n";
    }    
}

int main() {
    std::ifstream my_file;
    my_file.open("files/1.board");
    if (my_file) {
        std::cout << "The file stream has been created!" << "\n";
        std::string line;
        while (getline(my_file, line)) {
            std::cout << line << "\n";
        }
    }
}

vector<int> ParseLine(string line)
{
  
  istringstream my_stream(line);
  vector<int> parsedNumbers; 
  int number;
  char comma;
  
  while(my_stream >> number >> comma)
  {
    parsedNumbers.push_back(number); 
  }
  return parsedNumbers;
  }

  void ReadBoardFile(string path) {
  ifstream myfile (path);
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      cout << line << "\n";
    }
  }
}

void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

vector<vector<int>> ReadBoardFile(string path) 
{
  ifstream myfile (path);
  // TODO: Declare an empty board variable here with
  // type vector<vector<int>>.
  vector<vector<int>> board;
  if (myfile) 
  {
    string line;
    while (getline(myfile, line)) {
      // TODO: Replace the "cout" code with a call to ParseLine for each line and push the results of ParseLine to the 		  back of the board.
      //cout << line << "\n";
      board.push_back(ParseLine(line)); 
    }
  }
  // TODO: Return the board variable.
  return board;
}

vector<int> ParseLine(string line) {
    istringstream sline(line);
    int n;
    char c;
    vector<int> row;
    while (sline >> n >> c && c == ',') {
      row.push_back(n);
    }
    return row;
}