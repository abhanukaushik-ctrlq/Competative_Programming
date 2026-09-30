#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
   // freopen(filename, mode, stream)
  // 1st arg = "input.txt"  → the file to open
   //2nd arg = "r"          → open in READ mode
   //3rd arg = stdin        → reconnect stdin to this file
freopen("input.txt", "r", stdin); 

    //   1st arg = "output.txt" → the file to create/open
   //2nd arg = "w"          → open in WRITE mode (erases old contents)
  // 3rd arg = stdout       → reconnect stdout to this file
  //write the file after formating it, like erase everthing and then write
freopen("output.txt", "w", stdout);


    /// use mode append "a" to edit the file
    //reconnect with the stdout;

    return 0;
}