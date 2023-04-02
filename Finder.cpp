// #include "Finder.h"

// using namespace std;

// vector<int> Finder::findSubstrings(string s1, string s2) {
//   vector<int> result;
//   string substr = s2.substr(0, 1);

//   for (size_t i = 1; i <= s2.size(); i++) {
//     size_t found = s1.find(s2.substr(0, i));
//     if (found != string::npos) {
//       result.push_back(found);
//     } else {
//       result.push_back(-1);
//     }
//   }
//   return result;
// }


// #include "Finder.h"

// using namespace std;

// vector<int> Finder::findSubstrings(string s1, string s2) {
//   vector<int> result;
//   string substr = s2.substr(0, 1);
//   for (size_t i = 1; i <= s2.size(); i++) {
//     size_t found = s1.find(substr);
//     if (found != string::npos) {
//       result.push_back(found);
//     } else {
//       result.push_back(-1);
//     }
//     if (i < s2.size()) {
//       substr.replace(0, 1, 1, s2[i]);
//     }
//   }
//   return result;
// }

#include "Finder.h"
#include <iostream>
#include <vector>

using namespace std;

vector<int> Z(string s) {
  int n = s.length();
  vector<int> z(n);
  z[0] = n;

  int l = 0, r = 0;
  for (int i = 1; i < n; i++) {
    if (i > r) {
      l = r = i;
      while (r < n && s[r - l] == s[r]) {
        r++;
      }
      z[i] = r - l;
      r--;
    } else {
      int k = i - l;
      if (z[k] < r - i + 1) {
        z[i] = z[k];
      } else {
        l = i;
        while (r < n && s[r - l] == s[r]) {
          r++;
        }
        z[i] = r - l;
        r--;
      }
    }
  }

  return z;
}

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;
  string str = s2 + "#" + s1;
  vector<int> z = Z(str);

  for (int i = s2.length() + 1; i < z.size(); i++) {
    if (z[i] == s2.length()) {
      result.push_back(i - s2.length() - 1);
    } else {
      result.push_back(-1);
    }
  }

  return result;
}
