#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generateSubscriptions(int budget){
   vector<vector<int>> combinations;
   int TOI, Hindu, ET, BM, HT;
   for (TOI = 0; TOI <= budget; TOI++) {
      for (Hindu = 0; Hindu <= budget; Hindu++) {
         for (ET = 0; ET <= budget; ET++) {
            for (BM = 0; BM <= budget; BM++) {
               for (HT = 0; HT <= budget; HT++) {
                  if (TOI + Hindu + ET + BM + HT == budget) {
                     vector<int> combination = {TOI, Hindu, ET, BM, HT};
                     combinations.push_back(combination);
                  }
               }
            }
         }
      }
   }
   return combinations;
}

int main() {
   int budget;
   cout << "Enter the budget allocated for newspaper subscriptions: ";
   cin >> budget;

   vector<vector<int>> combinations = generateSubscriptions(budget);

   cout << "All possible combinations of newspaper subscriptions for the given budget are: " << endl;
   for (int i = 0; i < combinations.size(); i++) {
      cout << "TOI: " << combinations[i][0] << " Hindu: " << combinations[i][1] << " ET: " << combinations[i][2] << " BM: " << combinations[i][3] << " HT: " << combinations[i][4] << endl;
   }

   return 0;
}
